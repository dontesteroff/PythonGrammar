%token INTEGER
%token ID
%token VAR
%token POW

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
	char char_type;
}

%right '='
%left '+' '-'
%left '*'
%left POW

%%

	program:
		operation ';'
		| program operation ';'

	operation:
		ID '=' polyexpr
		| '?' ID
		
	polyexpr:
		term
		| ID
		| polyexpr POW polyexpr 
		| polyexpr '+' polyexpr
		| polyexpr '-' polyexpr
		| polyexpr '*' polyexpr
		| '-' polyexpr %prec '*'
		| '+' polyexpr %prec '*'
		| '(' polyexpr ')'

	term:
		INTEGER
		| VAR 
		| INTEGER VAR
		| VAR '^' INTEGER
		| INTEGER VAR '^' INTEGER

%%