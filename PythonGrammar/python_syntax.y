%token RETURN
%token CONTINUE
%token DEL
%token GLOBAL
%token YIELD
%token ASSERT
%token PASS
%token BREAK
%token IN
%token RAISE
%token IMPORT

%token PRINT
%token EXEC

%token IDENTIFIER
%token SHORTSTRING
%token LONGSTRING
%token DECINTEGER
%token OCTINTEGER
%token HEXINTEGER
%token POINTFLOAT
%token EXPONENTFLOAT
%token IMAGNUMBER

%token NEWLINE

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
	start: input
	
	identifier:
		IDENTIFIER
	
	stringliteral:
		SHORTSTRING | LONGSTRING

	longinteger:
		integer "l" | integer "L"
		
	integer:
		DECINTEGER | OCTINTEGER | HEXINTEGER
		
	floatnumber:
		POINTFLOAT | EXPONENTFLOAT
	
	imagnumber:
		IMAGNUMBER
	
	literal:
		stringliteral
		| integer
		| longinteger
		| floatnumber
		| imagnumber
		
	atom:
		identifier
		| literal
		| enclosure		
		
	enclosure:
		"TODO"
		
	yield_expression:
		YIELD
		| YIELD expression_list
		
	or_expr:
		"TODO"
		
	simple_stmt:
		expression_list
		| assert_stmt
		| assignment_stmt
		| augmented_assignment_stmt
		| pass_stmt
		| del_stmt
		| print_stmt
		| return_stmt
		| yield_stmt
		| raise_stmt
		| break_stmt
		| continue_stmt
		| import_stmt
		| global_stmt
		| exec_stmt
		
	assert_stmt:
		ASSERT expression
		| ASSERT expression "," expression
		
	assignment_stmt:
		"TODO"
		
	target_list:
		"TODO"
		
	augmented_assignment_stmt:
		"TODO"
	
	pass_stmt:
		PASS
		
	del_stmt:
		DEL target_list
	
	print_stmt:
		PRINT "TODO"
	
	return_stmt:
		RETURN
		| RETURN expression_list
		
	yield_stmt:
		yield_expression
		
	raise_stmt:
		RAISE
		| RAISE expression
		| RAISE expression ',' expression
		| RAISE expression ',' expression ',' expression
		
	break_stmt:
		BREAK
		
	continue_stmt:
		CONTINUE
		
	import_stmt:
		IMPORT module
		
	module:
		identifier
		| module '.' module
	
	name:
		identifier
		
	global_stmt:
		GLOBAL identifier
		| GLOBAL identifier global_stmt_extended
		
	global_stmt_extended:
		',' identifier
		| global_stmt_extended
		
	exec_stmt:
		EXEC or_expr
		| EXEC or_expr IN expression
		| EXEC or_expr IN expression ',' expression
		
	expression:
		"TODO"
		
	expression_list:
		"TODO"
		
	input:
		simple_stmt
%%