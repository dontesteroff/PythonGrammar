%token IDENTIFIER

%token SHORTSTRING
%token LONGSTRING

%token DECINTEGER
%token OCTINTEGER
%token HEXINTEGER
%token POINTFLOAT
%token EXPONENTFLOAT

%token IMAGNUMBER

%{
%}

%error-verbose
%{
	#define YYDEBUG 1
%}

%union
{
	int int_type;
	char* string_type;
}

%%

	atom:
		IDENTIFIER
		| literal
		
	stringliteral:
		SHORTSTRING | LONGSTRING

	longinteger:
		integer "l" | integer "L"
		
	integer:
		DECINTEGER | OCTINTEGER | HEXINTEGER
		
	floatnumber:
		POINTFLOAT | EXPONENTFLOAT
	
	literal:
		stringliteral
		| integer
		| longinteger
		| floatnumber
		| IMAGNUMBER
%%