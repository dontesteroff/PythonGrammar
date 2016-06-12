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
%token STAR
%token DOUBLESTAR
%token SLASH
%token DOUBLESLASH

%token NEWLINE
%token INDENT
%token DEDENT

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
	
	atom:
		identifier
		| literal
		| enclosure		
		
	enclosure:
		parenth_form
		| list_display
		| generator_expression
		| dict_display
		| string_conversion
		| yield_atom
	
	literal:
		stringliteral
		| integer
		| longinteger
		| floatnumber
		| imagnumber
		
	parenth_form:
		'(' ')'
		| '(' expression_list ')'
		
	list_display:
		'[' ']'
		| '[' expression_list ']'
		| '[' list_comprehension ']'
		
	list_comprehension:
		expression list_for
		
	list_for:
		FOR target_list IN old_expression_list
		| FOR target_list IN old_expression_list list_iter
		
	old_expression_list:
		old_expression
		| old_expression old_expressions
		| old_expression old_expressions ','
		
	old_expressions:
		',' old_expression
		| old_expressions ',' old_expression
		
	list_iter:
		list_for
		| list_if
		
	list_if:
		IF old_expression
		| IF old_expression list_iter
		
	generator_expression:
		'(' expression genexpr_for ')'
		
	genexpr_for:
		FOR target_list IN or_test
		| FOR target_list IN or_test genexpr_iter
		
	genexpr_iter:
		genexpr_for
		| genexpr_if
		
	genexpr_if:
		IF old_expression
		| IF old_expression genexpr_iter
		
	dict_display:
		'{' '}'
		| '{' key_datum_list '}'
		
	key_datum_list:
		key_datum
		| key_datum ','
		| key_datum key_datums
		| key_datum key_datums ','
		
	key_datum:
		expression ':' expression
		
	key_datums:
		',' key_datum
		| key_datums ',' key_datum
		
	string_conversion:
		'`' expression_list '`'
		
	yield_atom:
		'(' yield_expression ')'
		
	yield_expression:
		YIELD
		| YIELD expression_list
		
	primary:
		atom
		| attributeref
		| subscription
		| slicing
		| call	
	
	attributeref:
		primary '.' identifier
		
	subscription:
		primary '[' expression_list ']'
		
	slicing:
		simple_slicing
		| extended_slicing
		
	simple_slicing:
		primary '[' short_slice ']'
		
	extended_slicing:
		primary '[' slice_list ']'
		
	slice_list:
		slice_item
		| slice_item ','
		| slice_item slice_items
		| slice_item slice_items ','
		
	slice_item:
		expression
		| proper_slice
		| ellipsis
		
	slice_items:
		',' slice_item
		| slice_items ',' slice_item
	
	proper_slice:
		short_slice
		| long_slice
		
	short_slice:
		':'
		| lower_bound ':'
		| ':' upper_bound
		| lower_bound ':' upper_bound
		
	long_slice:
		short_slice ':'
		| short_slice ':' stride
		
	lower_bound:
		expression
		
	upper_bound:
		expression
		
	stride:
		expression
		
	ellipsis:
		ELLIPSIS
		
	call:
		primary '(' ')'
		| primary '(' argument_list ')'
		| primary '(' argument_list ',' ')'
		| primary '(' expression genexpr_for ')'
		
	argument_list:
		positional_arguments
		| positional_arguments ',' keyword_arguments
		| positional_arguments ',' STAR expression
		| positional_arguments ',' DOUBLESTAR expression
		| positional_arguments ',' keyword_arguments ',' STAR expression
		| positional_arguments ',' keyword_arguments ',' DOUBLESTAR expression
		| positional_arguments ',' STAR expression ',' DOUBLESTAR expression
		| positional_arguments ',' keyword_arguments ',' STAR expression ',' DOUBLESTAR expression
		| keyword_arguments
		| keyword_arguments ',' STAR expression
		| keyword_arguments ',' DOUBLESTAR expression
		| keyword_arguments ',' STAR expression ',' DOUBLESTAR expression
		| STAR expression
		| STAR expression ',' DOUBLESTAR expression
		| DOUBLESTAR expression
		
	positional_arguments:
		expression
		| expression expressions
		
	keyword_arguments:
		keyword_item
		| keyword_item keyword_items
		
	keyword_item:
		identifier '=' expression
		
	keyword_items:
		',' keyword_item
		| keyword_items ',' keyword_item
		
	power:
		primary
		| DOUBLESTAR u_expr
		
	u_expr:
		power
		| '-' u_expr
		| '+' u_expr
		| '~' u_expr
		
	m_expr:
		u_expr
		| m_expr STAR u_expr
		| m_expr DOUBLESLASH u_expr
		| m_expr SLASH u_expr
		| m_expr '%' u_expr
		
	a_expr:
		m_expr
		| a_expr '+' m_expr
		| a_expr '-' m_expr
		
	shift_expr:
		a_expr
		| shift_expr RIGHT_OP a_expr
		| shift_expr LEFT_OP a_expr
		
	and_expr:
		shift_expr
		| and_expr '&' shift_expr
		
	xor_expr:
		and_expr
		| xor_expr '^' and_expr
		
	or_expr:
		xor_expr
		| or_expr '|' xor_expr
		
	comparison:
		or_expr
		| comparison_operators_or_exprs
		
	comparison_operators_or_exprs:
		comp_operator or_expr
		| comparison_operators_or_exprs comp_operator or_expr
		
	comp_operator:
		"<" | ">" | "==" | ">=" | "<=" | "<>" | "!="
		| IS | IS NOT | IN | NOT IN
		
	expression:
		conditional_expression
		| lambda_form
		
	old_expression:
		or_test
		| old_lambda_form
		
	conditional_expression:
		or_test
		| or_test IF or_test ELSE expression
		
	or_test:
		and_test
		| or_test OR and_test
		
	and_test:
		not_test
		| and_test AND not_test
		
	not_test:
		comparison
		| NOT not_test
		
	lambda_form:
		LAMBDA ':' expression
		| LAMBDA parameter_list ':' expression
		
	old_lambda_form:
		LAMBDA ':' old_expression
		| LAMBDA parameter_list ':' expression
		
	expression_list:
		expression
		| expression ','
		| expression expressions
		| expression expressions ','
		
	expressions:
		',' expression
		| expressions ',' expression
		
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
		| FROM module IMPORT STAR
		
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
		| GLOBAL identifier global_stmt_identifiers
		
	global_stmt_identifiers:
		',' identifier
		| global_stmt_identifiers ',' identifier
		
	exec_stmt:
		EXEC or_expr
		| EXEC or_expr IN expression
		| EXEC or_expr IN expression ',' expression
		
	compound_stmt:
		if_stmt
		| while_stmt
		| for_stmt
		| try_stmt
		| with_stmt
		| funcdef
		| classdef
		
	suite:
		stmt_list NEWLINE
		| NEWLINE INDENT statements DEDENT
		
	statement:
		stmt_list NEWLINE
		| compound_stmt
		
	statements:
		statement
		| statements statement
		
	stmt_list:
		simple_stmt
		| simple_stmt ';'
		| simple_stmt simple_stmts
		| simple_stmt simple_stmts ';'
		
	simple_stmts:
		';' simple_stmt
		| simple_stmts ';' simple_stmt
		
	if_stmt:
		IF expression ':' suite
		| IF expression ':' suite ELSE ':' suite
		| IF expression ':' suite elif_stmt
		| IF expression ':' suite elif_stmt ELSE ':' suite
		
	elif_stmt:
		ELIF expression ':' suite
		| elif_stmt ELIF expression ':' suite
		
	while_stmt:
		WHILE expression ':' suite
		| WHILE expression ':' suite ELSE ':' suite
		
	for_stmt:
		FOR target_list IN expression_list ':' suite
		| FOR target_list IN expression_list ':' suite ELSE ':' suite
		
	try_stmt:
		try1_stmt
		| try2_stmt
		
	try1_stmt:
		TRY ':' suite except_stmt
		| TRY ':' suite except_stmts ELSE ':' suite
		| TRY ':' suite except_stmts FINALLY ':' suite
		| TRY ':' suite except_stmts ELSE ':' suite FINALLY ':' suite
		
	except_stmt:
		EXCEPT ':' suite
		| EXCEPT expression ':' suite
		| EXCEPT expression ',' target ':' suite
		| except_stmts EXCEPT ':' suite
		| except_stmts EXCEPT expression ':' suite
		| except_stmts EXCEPT expression ',' target ':' suite
		
	try2_stmt:
		TRY ':' suite FINALLY ':' suite
		
	with_stmt:
		WITH expression ':' expression
		| WITH expression AS target ':' expression
	
	funcdef:
		DEF funcname '(' ')' ':' suite
		| decorators DEF funcname '(' ')' ':' suite
		| DEF funcname '(' parameter_list ')' ':' suite
		| decorators DEF funcname '(' parameter_list ')' ':' suite
		
	decorators:
		decorator
		| decorators decorator
		
	decorator:
		'@' dotted_name NEWLINE
		| '@' dotted_name '(' ')' NEWLINE
		| '@' dotted_name '(' argument_list ')' NEWLINE
		| '@' dotted_name '(' argument_list ',' ')' NEWLINE
		
	dotted_name:
		identifier
		| identifier dot_identifiers
		
	dot_identifiers:
		'.' identifier
		| dot_identifiers '.' identifier
		
	parameter_list:
		STAR identifier
		| STAR identifier ',' DOUBLESTAR identifier
		| DOUBLESTAR identifier
		| defparameter
		| defparameter ','
		| defparameters STAR identifier
		| defparameters STAR identifier ',' DOUBLESTAR identifier
		| defparameters DOUBLESTAR identifier
		| defparameters defparameter
		| defparameters defparameter ','
		
	defparameter:
		parameter
		| parameter '=' expression
		
	defparameters:
		defparameter ','
		defparameters defparameter ','
	
	sublist:
		parameter
		| parameter ','
		| parameter parameters
		| parameter parameters ','
	
	parameter:
		identifier
		| '(' sublist ')'
		
	parameters:
		',' parameter
		| parameters ',' parameter
		
	funcname:
		identifier
		
	classdef:
		CLASS classname ':' suite
		| CLASS classname inheritance ':' suite
		
	inheritance:
		'(' ')'
		| '(' expression_list ')'
		
	classname:
		identifier
		
	input:
		"TODO"
%%