%token IDENTIFIER

%token SHORTSTRING
%token LONGSTRING

%token DECINTEGER
%token OCTINTEGER
%token HEXINTEGER

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

	program:
		stringliteral | integer
		
	stringliteral:
		SHORTSTRING | LONGSTRING

	longinteger:
		integer "l" | integer "L"
		
	integer:
		DECINTEGER | OCTINTEGER | HEXINTEGER
		
%%