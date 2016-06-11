%{
	#pragma warning(disable: 4013)
	#pragma warning(disable: 4996)

	#include <stdio.h>
	#include <stdlib.h>
	
	#include "y.tab.h"

	unsigned int line_number = 1;
%}
  
DIGIT	[0-9]
ID 		[\$][a-zA-Z_][a-zA-Z0-9_]*
VAR		[a-z]
SIGN 	[-+=;^?()]

%%

{DIGIT}+		{
					
				}

{ID}			{
					char* t = (char*)malloc(strlen(yytext)*sizeof(char));
					strcpy(t, yytext);
					yylval.string_type = t;
					return ID;
				}

{VAR}			{
					
				}

([-+^]{2,})|([*]{3,})		{
					
				}

[*]{1,2}		{
					
				}

{SIGN}			return *yytext;

[#].*	

[ \t]+
	
[\n]			line_number++;

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