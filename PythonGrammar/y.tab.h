
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     FALSE = 258,
     NONE = 259,
     TRUE = 260,
     AND = 261,
     AS = 262,
     ASSERT = 263,
     BREAK = 264,
     CLASS = 265,
     CONTINUE = 266,
     DEF = 267,
     DEL = 268,
     ELIF = 269,
     ELSE = 270,
     EXCEPT = 271,
     FINALLY = 272,
     FOR = 273,
     FROM = 274,
     GLOBAL = 275,
     IF = 276,
     IMPORT = 277,
     IN = 278,
     IS = 279,
     LAMBDA = 280,
     NOT = 281,
     OR = 282,
     PASS = 283,
     RAISE = 284,
     RETURN = 285,
     TRY = 286,
     WHILE = 287,
     WITH = 288,
     YIELD = 289,
     PRINT = 290,
     EXEC = 291,
     IDENTIFIER = 292,
     SHORTSTRING = 293,
     LONGSTRING = 294,
     DECINTEGER = 295,
     OCTINTEGER = 296,
     HEXINTEGER = 297,
     POINTFLOAT = 298,
     EXPONENTFLOAT = 299,
     IMAGNUMBER = 300,
     ELLIPSIS = 301,
     RIGHT_ASSIGN = 302,
     LEFT_ASSIGN = 303,
     ADD_ASSIGN = 304,
     SUB_ASSIGN = 305,
     MUL_ASSIGN = 306,
     POW_ASSIGN = 307,
     DIV_ASSIGN = 308,
     MOD_ASSIGN = 309,
     AND_ASSIGN = 310,
     XOR_ASSIGN = 311,
     OR_ASSIGN = 312,
     RIGHT_OP = 313,
     LEFT_OP = 314,
     PTR_OP = 315,
     LE_OP = 316,
     GE_OP = 317,
     EQ_OP = 318,
     NE_OP = 319,
     NEWLINE = 320
   };
#endif
/* Tokens.  */
#define FALSE 258
#define NONE 259
#define TRUE 260
#define AND 261
#define AS 262
#define ASSERT 263
#define BREAK 264
#define CLASS 265
#define CONTINUE 266
#define DEF 267
#define DEL 268
#define ELIF 269
#define ELSE 270
#define EXCEPT 271
#define FINALLY 272
#define FOR 273
#define FROM 274
#define GLOBAL 275
#define IF 276
#define IMPORT 277
#define IN 278
#define IS 279
#define LAMBDA 280
#define NOT 281
#define OR 282
#define PASS 283
#define RAISE 284
#define RETURN 285
#define TRY 286
#define WHILE 287
#define WITH 288
#define YIELD 289
#define PRINT 290
#define EXEC 291
#define IDENTIFIER 292
#define SHORTSTRING 293
#define LONGSTRING 294
#define DECINTEGER 295
#define OCTINTEGER 296
#define HEXINTEGER 297
#define POINTFLOAT 298
#define EXPONENTFLOAT 299
#define IMAGNUMBER 300
#define ELLIPSIS 301
#define RIGHT_ASSIGN 302
#define LEFT_ASSIGN 303
#define ADD_ASSIGN 304
#define SUB_ASSIGN 305
#define MUL_ASSIGN 306
#define POW_ASSIGN 307
#define DIV_ASSIGN 308
#define MOD_ASSIGN 309
#define AND_ASSIGN 310
#define XOR_ASSIGN 311
#define OR_ASSIGN 312
#define RIGHT_OP 313
#define LEFT_OP 314
#define PTR_OP 315
#define LE_OP 316
#define GE_OP 317
#define EQ_OP 318
#define NE_OP 319
#define NEWLINE 320




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 78 "D:\\Testing\\Repos\\PythonGrammar\\PythonGrammar\\python_syntax.y"

	int int_type;
	char* string_type;



/* Line 1676 of yacc.c  */
#line 189 "y.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


