%{
	#pragma warning(disable: 4013)
	#pragma warning(disable: 4996)

	#include <stdio.h>
	#include <stdlib.h>
	
	#include "y.tab.h"

	unsigned int line_number = 1;
%}

IDENTIFIER 		[a-zA-Z_][a-zA-Z0-9_]*

DIGIT			[0-9]
NONZERODIGIT	[1-9]
OCTDIGIT		[0-7]
HEXDIGIT		{DIGIT}|[a-fA-F]
DECINTEGER		{NONZERODIGIT}{DIGIT}*|"0"
OCTINTEGER		"0"{OCTDIGIT}+
HEXINTEGER		"0"("x"|"X"){HEXDIGIT}+

INTPART			{DIGIT}+
FRACTION		"."{DIGIT}+
POINTFLOAT		({INTPART}?{FRACTION})|({INTPART}".")|{FRACTION}
EXPONENT		("e"|"E")("+"|"-")?{DIGIT}+
EXPONENTFLOAT	({INTPART}|{POINTFLOAT}){EXPONENT}

IMAGNUMBER		({POINTFLOAT}|{EXPONENTFLOAT}|{INTPART})("j"|"J")

STRINGPREFIX	("r"|"u"|"ur"|"R"|"U"|"UR"|"Ur"|"uR")
SHORTSTRINGITEM	([^\n\'\"\\])|([\\].)
LONGSTRINGITEM	([^\\])|([\\].)
SHORTSTRING		{STRINGPREFIX}?([']{SHORTSTRINGITEM}*['])|(["]{SHORTSTRINGITEM}*["])
LONGSTRING		{STRINGPREFIX}?(([']{3}{LONGSTRINGITEM}*[']{3})|(["]{3}{LONGSTRINGITEM}*["]{3}))

NEWLINE			[\n]
WHITESPACE		[ \t\v\n\f]

%%

"False"				{ return FALSE; }
"None"				{ return NONE; }
"True"				{ return TRUE; }
"and"				{ return AND; }
"as"				{ return AS; }
"assert"			{ return ASSERT; }
"break"				{ return BREAK; }
"class"				{ return CLASS; }
"continue"			{ return CONTINUE; }
"def"				{ return DEF; }
"del"				{ return DEL; }
"elif"				{ return ELIF; }
"else"				{ return ELSE; }
"except"			{ return EXCEPT; }
"finally"			{ return FINALLY; }
"for"				{ return FOR; }
"from"				{ return FROM; }
"global"			{ return GLOBAL; }
"if"				{ return IF; }
"import"			{ return IMPORT; }
"in"				{ return IN; }
"is"				{ return IS; }
"lambda"			{ return LAMBDA; }
"not"				{ return NOT; }
"or"				{ return OR; }
"pass"				{ return PASS; }
"raise"				{ return RAISE; }
"return"			{ return RETURN; }
"try"				{ return TRY; }
"while"				{ return WHILE; }
"with"				{ return WITH; }
"yield"				{ return YIELD; }

"print"				{ return PRINT; }
"exec"				{ return EXEC; }

"L"					{ return 'L'; }
"l"					{ return 'l'; }

"..."				{ return ELLIPSIS; }
">>="				{ return RIGHT_ASSIGN; }
"<<="				{ return LEFT_ASSIGN; }
"+="				{ return ADD_ASSIGN; }
"-="				{ return SUB_ASSIGN; }
"*="				{ return MUL_ASSIGN; }
"**="				{ return POW_ASSIGN; }
"/="				{ return DIV_ASSIGN; }
"%="				{ return MOD_ASSIGN; }
"&="				{ return AND_ASSIGN; }
"^="				{ return XOR_ASSIGN; }
"|="				{ return OR_ASSIGN; }
">>"				{ return RIGHT_OP; }
"<<"				{ return LEFT_OP; }
"<="				{ return LE_OP; }
">="				{ return GE_OP; }
"=="				{ return EQ_OP; }
"!="				{ return NE_OP; }

","					{ return ','; }
":"					{ return ':'; }
"="					{ return '='; }
"("					{ return '('; }
")"					{ return ')'; }
"["					{ return '['; }
"]"					{ return ']'; }
"{"					{ return '{'; }
"}"					{ return '}'; }
"."					{ return '.'; }
"&"					{ return '&'; }
"!"					{ return '!'; }
"~"					{ return '~'; }
"-"					{ return '-'; }
"+"					{ return '+'; }
"*"					{ return '*'; }
"/"					{ return '/'; }
"%"					{ return '%'; }
"<"					{ return '<'; }
">"					{ return '>'; }
"^"					{ return '^'; }
"|"					{ return '|'; }
"`"					{ return '`'; }
"*"					{ return STAR; }
"**"				{ return DOUBLESTAR; }
				
{IDENTIFIER}		{
						printf("IDENTIFIER: %s\n", yytext);
						return IDENTIFIER;
					}

{DECINTEGER}		{
						printf("DECINTEGER: %s\n", yytext);
						return DECINTEGER;
					}
					
{OCTINTEGER}		{
						printf("OCTINTEGER: %s\n", yytext);
						return OCTINTEGER;
					}
					
{HEXINTEGER}		{
						printf("HEXINTEGER: %s\n", yytext);
						return HEXINTEGER;
					}

{POINTFLOAT}		{
						printf("POINTFLOAT: %s\n", yytext);
						return POINTFLOAT;
					}
					
{EXPONENTFLOAT}		{
						printf("EXPONENTFLOAT: %s\n", yytext);
						return EXPONENTFLOAT;
					}

{IMAGNUMBER}		{
						printf("IMAGNUMBER: %s\n", yytext);
						return IMAGNUMBER;
					}
					

{SHORTSTRING}		{
						printf("SHORTSTRING: %s\n", yytext);
						return SHORTSTRING;
					}

{LONGSTRING}		{
						printf("LONGSTRING: %s\n", yytext);
						return LONGSTRING;
					}
					
[#].*	

[\n]				{
						line_number++;
						return NEWLINE;
					}
					
					
{WHITESPACE}+		{ /* whitespace separates tokens */ }
.					{ /* discard bad characters */ }

%%

int yywrap(void) {
    return 1;
}

int yyerror(char *errmsg)
{
	printf("line %d: %s\n", line_number, errmsg);
	return 0;
}

int main(int argc, char**argv)
{
	if(argc < 2)
	{
		printf("Usage: %s <file>\n", argv[0]);
		exit(EXIT_FAILURE);
	}

	if(access(argv[1], 0))
	{
		printf("File doesn\'t exist!\n");
		exit(EXIT_FAILURE);
	}

	yyin = fopen(argv[1], "r");

	fseek(yyin, 0, SEEK_END);
	if(ftell(yyin) == 0)
	{
		printf("Input file is EMPTY!\n");
		exit(EXIT_FAILURE);
	}
	rewind(yyin);

	yyparse();
}