%token FALSE
%token NONE
%token TRUE
%token AND
%token AS
%token ASSERT
%token BREAK
%token CLASS
%token CONTINUE
%token DEF
%token DEL
%token ELIF
%token ELSE
%token EXCEPT
%token FINALLY
%token FOR
%token FROM
%token GLOBAL
%token IF
%token IMPORT
%token IN
%token IS
%token LAMBDA
%token NOT
%token OR
%token PASS
%token RAISE
%token RETURN
%token TRY
%token WHILE
%token WITH
%token YIELD

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

%token ELLIPSIS
%token RIGHT_ASSIGN
%token LEFT_ASSIGN
%token ADD_ASSIGN
%token SUB_ASSIGN
%token MUL_ASSIGN
%token POW_ASSIGN
%token DIV_ASSIGN
%token MOD_ASSIGN
%token AND_ASSIGN
%token XOR_ASSIGN
%token OR_ASSIGN
%token RIGHT_OP
%token LEFT_OP
%token PTR_OP
%token LE_OP
%token GE_OP
%token EQ_OP
%token NE_OP

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
		integer 'l' | integer 'L'
		
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
		
	attributeref:
		"TODO"

	subscription:
		"TODO"

	slicing:
		"TODO"
		
	or_expr:
		"TODO"
		
	simple_stmt:
		expression_stmt
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
		
	expression_stmt:
		expression_list
		
	assert_stmt:
		ASSERT expression
		| ASSERT expression ',' expression
		
	assignment_stmt:
		assignment_stmt_targer_list expression_list
		| assignment_stmt_targer_list yield_expression
		
	assignment_stmt_targer_list:
		target_list '='
		| assignment_stmt_targer_list target_list '='
		
	target_list:
		target
		| target_list ',' target
		| target_list ','
		
	target:
		identifier
		| '(' target_list ')'
		| '[' target_list ']'
		| attributeref
		| subscription
		| slicing
		
	augmented_assignment_stmt:
		target augop expression_list
		| target augop yield_expression
		
	augop:
		RIGHT_ASSIGN | LEFT_ASSIGN | ADD_ASSIGN | SUB_ASSIGN | MUL_ASSIGN
		| POW_ASSIGN | DIV_ASSIGN | MOD_ASSIGN | AND_ASSIGN | XOR_ASSIGN
		| OR_ASSIGN | RIGHT_OP | LEFT_OP
	
	pass_stmt:
		PASS
		
	del_stmt:
		DEL target_list
	
	print_stmt:
		PRINT
		| PRINT expression
		| PRINT expression ','
		| PRINT expression expressions
		| PRINT expression expressions ','
		| PRINT RIGHT_OP expression
		| PRINT RIGHT_OP expression expressions
		| PRINT RIGHT_OP expression expressions ','
		
	expressions:
		',' expression
		| expressions ',' expression
	
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
		| IMPORT module AS name
		| IMPORT module modules
		| IMPORT module AS name modules
		| FROM relative_module IMPORT identifier
		| FROM relative_module IMPORT identifier AS name
		| FROM relative_module IMPORT identifier import_stmt_identifiers
		| FROM relative_module IMPORT identifier AS name import_stmt_identifiers
		| FROM relative_module IMPORT '(' identifier ')'
		| FROM relative_module IMPORT '(' identifier AS name ')'
		| FROM relative_module IMPORT '(' identifier import_stmt_identifiers ')'
		| FROM relative_module IMPORT '(' identifier AS name import_stmt_identifiers ')'
		| FROM relative_module IMPORT '(' identifier ',' ')'
		| FROM relative_module IMPORT '(' identifier AS name ',' ')'
		| FROM relative_module IMPORT '(' identifier import_stmt_identifiers ',' ')'
		| FROM relative_module IMPORT '(' identifier AS name import_stmt_identifiers ',' ')'
		| FROM module IMPORT '*'
		
	module:
		identifier
		| module '.' module
		
	relative_module:
		module
		| dot_modules
		| dots
	
	dot_modules:
		'.' module
		| dot_modules '.' module
		
	dots:
		'.'
		| dots '.'
		
	modules:
		',' module
		| ',' module AS name
		| modules ',' module
		| modules ',' module AS name
	
	import_stmt_identifiers:
		',' identifier
		| ',' identifier AS name
		| import_stmt_identifiers ',' identifier
		| import_stmt_identifiers ',' identifier AS name
	
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