
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 71 "D:\\Testing\\Repos\\PythonGrammar\\PythonGrammar\\python_syntax.y"


/* Line 189 of yacc.c  */
#line 75 "D:\\Testing\\Repos\\PythonGrammar\\PythonGrammar\\python_syntax.y"

	#define YYDEBUG 1


/* Line 189 of yacc.c  */
#line 82 "y.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


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
     STAR = 320,
     DOUBLESTAR = 321,
     NEWLINE = 322
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
#define STAR 320
#define DOUBLESTAR 321
#define NEWLINE 322




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 80 "D:\\Testing\\Repos\\PythonGrammar\\PythonGrammar\\python_syntax.y"

	int int_type;
	char* string_type;



/* Line 214 of yacc.c  */
#line 259 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 271 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  108
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   418

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  82
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  87
/* YYNRULES -- Number of rules.  */
#define YYNRULES  237
/* YYNRULES -- Number of states.  */
#define YYNSTATES  341

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   323

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      70,    71,     2,     2,    74,     2,    79,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    77,     2,
       2,    80,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,    69,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    72,     2,    73,     2,     2,    78,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    68,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    75,     2,    76,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    81
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    11,    14,    17,    19,
      21,    23,    25,    27,    29,    31,    33,    35,    37,    39,
      41,    43,    45,    47,    49,    51,    53,    55,    57,    60,
      64,    67,    71,    75,    78,    83,    89,    91,    94,    98,
     101,   105,   107,   109,   112,   116,   121,   126,   132,   134,
     136,   139,   143,   146,   150,   152,   155,   158,   162,   166,
     169,   173,   177,   181,   183,   186,   188,   190,   192,   194,
     196,   200,   205,   207,   209,   214,   219,   221,   224,   227,
     231,   233,   235,   237,   240,   244,   246,   248,   250,   253,
     256,   260,   263,   267,   269,   271,   273,   275,   279,   284,
     290,   296,   298,   302,   307,   312,   319,   326,   334,   344,
     346,   351,   356,   364,   367,   373,   376,   378,   381,   383,
     386,   390,   393,   397,   399,   401,   403,   405,   407,   409,
     411,   413,   415,   417,   419,   421,   423,   425,   427,   429,
     431,   434,   439,   442,   445,   448,   452,   454,   458,   461,
     463,   467,   471,   473,   475,   477,   481,   485,   487,   489,
     491,   493,   495,   497,   499,   501,   503,   505,   507,   509,
     511,   513,   516,   518,   521,   525,   529,   534,   538,   543,
     549,   552,   556,   558,   561,   563,   565,   568,   573,   580,
     582,   584,   587,   592,   596,   602,   607,   614,   620,   628,
     635,   644,   652,   662,   670,   680,   689,   700,   705,   707,
     711,   713,   715,   717,   720,   724,   726,   729,   732,   737,
     741,   747,   750,   755,   759,   765,   767,   770,   774,   777,
     781,   784,   789,   796,   798,   800,   802,   804
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      83,     0,    -1,   168,    -1,    37,    -1,    38,    -1,    39,
      -1,    87,    68,    -1,    87,    69,    -1,    40,    -1,    41,
      -1,    42,    -1,    43,    -1,    44,    -1,    45,    -1,    84,
      -1,    92,    -1,    91,    -1,    93,    -1,    94,    -1,   101,
      -1,   105,    -1,   109,    -1,   110,    -1,    85,    -1,    87,
      -1,    86,    -1,    88,    -1,    89,    -1,    70,    71,    -1,
      70,   167,    71,    -1,    72,    73,    -1,    72,   167,    73,
      -1,    72,    95,    73,    -1,   164,    96,    -1,    18,   140,
      23,    97,    -1,    18,   140,    23,    97,    99,    -1,   165,
      -1,   165,    98,    -1,   165,    98,    74,    -1,    74,   165,
      -1,    98,    74,   165,    -1,    96,    -1,   100,    -1,    21,
     165,    -1,    21,   165,    99,    -1,    70,   164,   102,    71,
      -1,    18,   140,    23,   166,    -1,    18,   140,    23,   166,
     103,    -1,   102,    -1,   104,    -1,    21,   165,    -1,    21,
     165,   103,    -1,    75,    76,    -1,    75,   106,    76,    -1,
     107,    -1,   107,    74,    -1,   107,   108,    -1,   107,   108,
      74,    -1,   164,    77,   164,    -1,    74,   107,    -1,   108,
      74,   107,    -1,    78,   167,    78,    -1,    70,   111,    71,
      -1,    34,    -1,    34,   167,    -1,    90,    -1,   113,    -1,
     114,    -1,   115,    -1,   128,    -1,   112,    79,    84,    -1,
     112,    72,   167,    73,    -1,   116,    -1,   117,    -1,   112,
      72,   122,    73,    -1,   112,    72,   118,    73,    -1,   119,
      -1,   119,    74,    -1,   119,   120,    -1,   119,   120,    74,
      -1,   164,    -1,   121,    -1,   127,    -1,    74,   119,    -1,
     120,    74,   119,    -1,   122,    -1,   123,    -1,    77,    -1,
     124,    77,    -1,    77,   125,    -1,   124,    77,   125,    -1,
     122,    77,    -1,   122,    77,   126,    -1,   164,    -1,   164,
      -1,   164,    -1,    46,    -1,   112,    70,    71,    -1,   112,
      70,   129,    71,    -1,   112,    70,   129,    74,    71,    -1,
     112,    70,   164,   102,    71,    -1,   130,    -1,   130,    74,
     131,    -1,   130,    74,    65,   164,    -1,   130,    74,    66,
     164,    -1,   130,    74,   131,    74,    65,   164,    -1,   130,
      74,   131,    74,    66,   164,    -1,   130,    74,    65,   164,
      74,    66,   164,    -1,   130,    74,   131,    74,    65,   164,
      74,    66,   164,    -1,   131,    -1,   131,    74,    65,   164,
      -1,   131,    74,    66,   164,    -1,   131,    74,    65,   164,
      74,    66,   164,    -1,    65,   164,    -1,    65,   164,    74,
      66,   164,    -1,    66,   164,    -1,   164,    -1,   164,   147,
      -1,   132,    -1,   132,   133,    -1,    84,    80,   164,    -1,
      74,   132,    -1,   133,    74,   132,    -1,    81,    -1,   136,
      -1,   137,    -1,   138,    -1,   142,    -1,   144,    -1,   145,
      -1,   146,    -1,   148,    -1,   149,    -1,   150,    -1,   151,
      -1,   152,    -1,   153,    -1,   161,    -1,   163,    -1,   167,
      -1,     8,   164,    -1,     8,   164,    74,   164,    -1,   139,
     167,    -1,   139,   111,    -1,   140,    80,    -1,   139,   140,
      80,    -1,   141,    -1,   140,    74,   141,    -1,   140,    74,
      -1,    84,    -1,    70,   140,    71,    -1,    72,   140,    73,
      -1,   113,    -1,   114,    -1,   115,    -1,   141,   143,   167,
      -1,   141,   143,   111,    -1,    47,    -1,    48,    -1,    49,
      -1,    50,    -1,    51,    -1,    52,    -1,    53,    -1,    54,
      -1,    55,    -1,    56,    -1,    57,    -1,    58,    -1,    59,
      -1,    28,    -1,    13,   140,    -1,    35,    -1,    35,   164,
      -1,    35,   164,    74,    -1,    35,   164,   147,    -1,    35,
     164,   147,    74,    -1,    35,    58,   164,    -1,    35,    58,
     164,   147,    -1,    35,    58,   164,   147,    74,    -1,    74,
     164,    -1,   147,    74,   164,    -1,    30,    -1,    30,   167,
      -1,   111,    -1,    29,    -1,    29,   164,    -1,    29,   164,
      74,   164,    -1,    29,   164,    74,   164,    74,   164,    -1,
       9,    -1,    11,    -1,    22,   154,    -1,    22,   154,     7,
     160,    -1,    22,   154,   158,    -1,    22,   154,     7,   160,
     158,    -1,    19,   155,    22,    84,    -1,    19,   155,    22,
      84,     7,   160,    -1,    19,   155,    22,    84,   159,    -1,
      19,   155,    22,    84,     7,   160,   159,    -1,    19,   155,
      22,    70,    84,    71,    -1,    19,   155,    22,    70,    84,
       7,   160,    71,    -1,    19,   155,    22,    70,    84,   159,
      71,    -1,    19,   155,    22,    70,    84,     7,   160,   159,
      71,    -1,    19,   155,    22,    70,    84,    74,    71,    -1,
      19,   155,    22,    70,    84,     7,   160,    74,    71,    -1,
      19,   155,    22,    70,    84,   159,    74,    71,    -1,    19,
     155,    22,    70,    84,     7,   160,   159,    74,    71,    -1,
      19,   154,    22,    65,    -1,    84,    -1,   154,    79,   154,
      -1,   154,    -1,   156,    -1,   157,    -1,    79,   154,    -1,
     156,    79,   154,    -1,    79,    -1,   157,    79,    -1,    74,
     154,    -1,    74,   154,     7,   160,    -1,   158,    74,   154,
      -1,   158,    74,   154,     7,   160,    -1,    74,    84,    -1,
      74,    84,     7,   160,    -1,   159,    74,    84,    -1,   159,
      74,    84,     7,   160,    -1,    84,    -1,    20,    84,    -1,
      20,    84,   162,    -1,    74,    84,    -1,   162,    74,    84,
      -1,    36,   134,    -1,    36,   134,    23,   164,    -1,    36,
     134,    23,   164,    74,   164,    -1,    81,    -1,    81,    -1,
      81,    -1,    81,    -1,   135,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    86,    86,    89,    92,    92,    95,    95,    98,    98,
      98,   101,   101,   104,   107,   108,   109,   112,   113,   114,
     115,   116,   117,   120,   121,   122,   123,   124,   127,   128,
     131,   132,   133,   136,   139,   140,   143,   144,   145,   148,
     149,   152,   153,   156,   157,   160,   163,   164,   167,   168,
     171,   172,   175,   176,   179,   180,   181,   182,   185,   188,
     189,   192,   195,   198,   199,   202,   203,   204,   205,   206,
     209,   212,   215,   216,   219,   222,   225,   226,   227,   228,
     231,   232,   233,   236,   237,   240,   241,   244,   245,   246,
     247,   250,   251,   254,   257,   260,   263,   266,   267,   268,
     269,   272,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   289,   290,   293,   294,
     297,   300,   301,   304,   307,   308,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   324,
     327,   328,   331,   332,   335,   336,   339,   340,   341,   344,
     345,   346,   347,   348,   349,   352,   353,   356,   356,   356,
     356,   356,   357,   357,   357,   357,   357,   358,   358,   358,
     361,   364,   367,   368,   369,   370,   371,   372,   373,   374,
     377,   378,   381,   382,   385,   388,   389,   390,   391,   394,
     397,   400,   401,   402,   403,   404,   405,   406,   407,   408,
     409,   410,   411,   412,   413,   414,   415,   416,   419,   420,
     423,   424,   425,   428,   429,   432,   433,   436,   437,   438,
     439,   442,   443,   444,   445,   448,   451,   452,   455,   456,
     459,   460,   461,   464,   467,   470,   473,   476
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "FALSE", "NONE", "TRUE", "AND", "AS",
  "ASSERT", "BREAK", "CLASS", "CONTINUE", "DEF", "DEL", "ELIF", "ELSE",
  "EXCEPT", "FINALLY", "FOR", "FROM", "GLOBAL", "IF", "IMPORT", "IN", "IS",
  "LAMBDA", "NOT", "OR", "PASS", "RAISE", "RETURN", "TRY", "WHILE", "WITH",
  "YIELD", "PRINT", "EXEC", "IDENTIFIER", "SHORTSTRING", "LONGSTRING",
  "DECINTEGER", "OCTINTEGER", "HEXINTEGER", "POINTFLOAT", "EXPONENTFLOAT",
  "IMAGNUMBER", "ELLIPSIS", "RIGHT_ASSIGN", "LEFT_ASSIGN", "ADD_ASSIGN",
  "SUB_ASSIGN", "MUL_ASSIGN", "POW_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN",
  "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN", "RIGHT_OP", "LEFT_OP", "PTR_OP",
  "LE_OP", "GE_OP", "EQ_OP", "NE_OP", "STAR", "DOUBLESTAR", "NEWLINE",
  "'l'", "'L'", "'('", "')'", "'['", "']'", "','", "'{'", "'}'", "':'",
  "'`'", "'.'", "'='", "\"TODO\"", "$accept", "start", "identifier",
  "stringliteral", "longinteger", "integer", "floatnumber", "imagnumber",
  "atom", "enclosure", "literal", "parenth_form", "list_display",
  "list_comprehension", "list_for", "old_expression_list",
  "old_expressions", "list_iter", "list_if", "generator_expression",
  "genexpr_for", "genexpr_iter", "genexpr_if", "dict_display",
  "key_datum_list", "key_datum", "key_datums", "string_conversion",
  "yield_atom", "yield_expression", "primary", "attributeref",
  "subscription", "slicing", "simple_slicing", "extended_slicing",
  "slice_list", "slice_item", "slice_items", "proper_slice", "short_slice",
  "long_slice", "lower_bound", "upper_bound", "stride", "ellipsis", "call",
  "argument_list", "positional_arguments", "keyword_arguments",
  "keyword_item", "keyword_items", "or_expr", "simple_stmt",
  "expression_stmt", "assert_stmt", "assignment_stmt",
  "assignment_stmt_targer_list", "target_list", "target",
  "augmented_assignment_stmt", "augop", "pass_stmt", "del_stmt",
  "print_stmt", "expressions", "return_stmt", "yield_stmt", "raise_stmt",
  "break_stmt", "continue_stmt", "import_stmt", "module",
  "relative_module", "dot_modules", "dots", "modules",
  "import_stmt_identifiers", "name", "global_stmt",
  "global_stmt_identifiers", "exec_stmt", "expression", "old_expression",
  "or_test", "expression_list", "input", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   108,    76,
      40,    41,    91,    93,    44,   123,   125,    58,    96,    46,
      61,   323
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    82,    83,    84,    85,    85,    86,    86,    87,    87,
      87,    88,    88,    89,    90,    90,    90,    91,    91,    91,
      91,    91,    91,    92,    92,    92,    92,    92,    93,    93,
      94,    94,    94,    95,    96,    96,    97,    97,    97,    98,
      98,    99,    99,   100,   100,   101,   102,   102,   103,   103,
     104,   104,   105,   105,   106,   106,   106,   106,   107,   108,
     108,   109,   110,   111,   111,   112,   112,   112,   112,   112,
     113,   114,   115,   115,   116,   117,   118,   118,   118,   118,
     119,   119,   119,   120,   120,   121,   121,   122,   122,   122,
     122,   123,   123,   124,   125,   126,   127,   128,   128,   128,
     128,   129,   129,   129,   129,   129,   129,   129,   129,   129,
     129,   129,   129,   129,   129,   129,   130,   130,   131,   131,
     132,   133,   133,   134,   135,   135,   135,   135,   135,   135,
     135,   135,   135,   135,   135,   135,   135,   135,   135,   136,
     137,   137,   138,   138,   139,   139,   140,   140,   140,   141,
     141,   141,   141,   141,   141,   142,   142,   143,   143,   143,
     143,   143,   143,   143,   143,   143,   143,   143,   143,   143,
     144,   145,   146,   146,   146,   146,   146,   146,   146,   146,
     147,   147,   148,   148,   149,   150,   150,   150,   150,   151,
     152,   153,   153,   153,   153,   153,   153,   153,   153,   153,
     153,   153,   153,   153,   153,   153,   153,   153,   154,   154,
     155,   155,   155,   156,   156,   157,   157,   158,   158,   158,
     158,   159,   159,   159,   159,   160,   161,   161,   162,   162,
     163,   163,   163,   164,   165,   166,   167,   168
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     3,
       2,     3,     3,     2,     4,     5,     1,     2,     3,     2,
       3,     1,     1,     2,     3,     4,     4,     5,     1,     1,
       2,     3,     2,     3,     1,     2,     2,     3,     3,     2,
       3,     3,     3,     1,     2,     1,     1,     1,     1,     1,
       3,     4,     1,     1,     4,     4,     1,     2,     2,     3,
       1,     1,     1,     2,     3,     1,     1,     1,     2,     2,
       3,     2,     3,     1,     1,     1,     1,     3,     4,     5,
       5,     1,     3,     4,     4,     6,     6,     7,     9,     1,
       4,     4,     7,     2,     5,     2,     1,     2,     1,     2,
       3,     2,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     4,     2,     2,     2,     3,     1,     3,     2,     1,
       3,     3,     1,     1,     1,     3,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     1,     2,     3,     3,     4,     3,     4,     5,
       2,     3,     1,     2,     1,     1,     2,     4,     6,     1,
       1,     2,     4,     3,     5,     4,     6,     5,     7,     6,
       8,     7,     9,     7,     9,     8,    10,     4,     1,     3,
       1,     1,     1,     2,     3,     1,     2,     2,     4,     3,
       5,     2,     4,     3,     5,     1,     2,     3,     2,     3,
       2,     4,     6,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,   189,   190,     0,     0,     0,     0,   170,   185,
     182,    63,   172,     0,     3,     4,     5,     8,     9,    10,
      11,    12,    13,     0,     0,     0,     0,   236,     0,   149,
      23,    25,    24,    26,    27,    65,    16,    15,    17,    18,
      19,    20,    21,    22,   184,     0,   152,   153,   154,    72,
      73,    69,   237,   124,   125,   126,     0,     0,   146,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,     2,   233,   140,   171,   146,   215,   208,     0,
       0,   211,   212,   226,   191,   186,   183,    64,     0,   173,
     123,   230,    28,   233,     0,     0,     0,     0,    30,     0,
       0,     0,     0,    52,     0,    54,     0,     0,     1,     6,
       7,     0,     0,     0,   143,     0,   142,   148,   144,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,     0,     0,   213,     0,     0,     0,     0,   216,
       0,   227,     0,     0,   193,     0,   177,   174,   175,     0,
      62,   150,     0,     0,    29,    32,   151,     0,    33,    31,
      53,    55,    56,     0,    61,     0,     0,    97,     0,     0,
     101,   109,   118,   116,    96,    87,     0,    76,    81,    85,
      86,     0,    82,    80,     0,    70,   145,   147,   156,   155,
     141,   207,   209,     0,   195,   214,   228,     0,   225,   192,
     217,     0,   187,     0,   178,   180,   176,   231,     0,    45,
       0,    59,    57,    58,   113,   115,     0,    98,     0,     0,
       0,     0,   119,     0,   117,    89,    94,    75,    77,    78,
      74,    91,    88,    71,     0,     0,     0,   197,   229,   194,
       0,   219,     0,   179,   181,     0,     0,     0,    60,     0,
     120,    99,     0,     0,   102,     0,     0,   121,     0,   100,
       0,    83,    85,    79,    92,    95,    90,     0,   199,     0,
       0,   196,   221,     0,   218,     0,   188,   232,   235,    46,
     234,    34,    36,     0,   103,   104,     0,   110,   111,   122,
      84,     0,   203,   201,     0,   198,     0,   223,   220,     0,
      48,    47,    49,     0,    41,    35,    42,     0,    37,   114,
       0,     0,     0,     0,   200,     0,     0,   205,   222,     0,
      50,    43,    39,    38,     0,   105,   106,     0,   204,   202,
       0,   224,    51,    44,    40,   107,     0,   112,   206,     0,
     108
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    99,   304,   281,   308,   305,   306,    40,
     300,   301,   302,    41,   104,   105,   162,    42,    43,    44,
      45,    46,    47,    48,    49,    50,   176,   177,   229,   178,
     262,   180,   181,   225,   264,   182,    51,   169,   170,   171,
     172,   222,    91,    52,    53,    54,    55,    56,    57,    76,
      59,   132,    60,    61,    62,   148,    63,    64,    65,    66,
      67,    68,    79,    80,    81,    82,   144,   237,   199,    69,
     141,    70,   106,   282,   279,    71,    72
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -226
static const yytype_int16 yypact[] =
{
     337,   -43,  -226,  -226,   226,    -6,    14,    14,  -226,   -43,
      16,    16,   -29,    31,  -226,  -226,  -226,  -226,  -226,  -226,
    -226,  -226,  -226,   246,   147,    38,    16,  -226,   128,   -36,
    -226,  -226,   131,  -226,  -226,  -226,  -226,  -226,  -226,  -226,
    -226,  -226,  -226,  -226,  -226,    81,    87,    91,    99,  -226,
    -226,  -226,  -226,  -226,  -226,  -226,    23,   -39,   336,  -226,
    -226,  -226,  -226,  -226,  -226,  -226,  -226,  -226,  -226,  -226,
    -226,  -226,  -226,  -226,    73,    84,  -226,    14,  -226,   -10,
     145,    94,   114,   121,     2,   134,  -226,  -226,   -43,   135,
    -226,   187,  -226,   140,   142,   -34,   194,   143,  -226,   148,
     -15,   198,   150,  -226,   153,   144,   149,   146,  -226,  -226,
    -226,    37,    43,    14,  -226,   -26,  -226,   226,  -226,  -226,
    -226,  -226,  -226,  -226,  -226,  -226,  -226,  -226,  -226,  -226,
    -226,  -226,    -4,   -43,   154,   169,    14,    10,    14,  -226,
      14,   161,    14,    14,   163,   -43,   164,   -43,   165,   -43,
    -226,  -226,   226,   172,  -226,  -226,  -226,   226,  -226,  -226,
    -226,   -43,   171,   -43,  -226,   -43,   -43,  -226,   166,    55,
     173,   174,   175,     8,  -226,   -43,   177,   179,  -226,    95,
    -226,   180,  -226,   184,   183,  -226,  -226,  -226,  -226,  -226,
    -226,  -226,   154,    14,    18,   154,  -226,    14,  -226,   199,
       6,    14,   202,   -43,   203,  -226,   -43,   204,     4,  -226,
       9,  -226,   -43,  -226,   207,  -226,   -43,  -226,   201,    90,
     138,    14,   218,   222,   220,  -226,  -226,  -226,    53,   221,
    -226,   -43,   -43,  -226,    17,    14,    14,   225,  -226,   163,
      14,     7,   -43,   -43,  -226,   -43,   219,   224,  -226,   236,
    -226,  -226,   -43,   -43,   229,   -43,   -43,  -226,    14,  -226,
     -43,  -226,   230,    53,  -226,  -226,  -226,    14,  -226,    19,
      65,   235,   306,    14,  -226,    14,  -226,  -226,  -226,   124,
    -226,   162,   241,   -43,   245,  -226,   141,   248,  -226,  -226,
    -226,   123,  -226,  -226,    69,   225,    14,   313,  -226,   224,
    -226,  -226,  -226,   224,  -226,  -226,  -226,   224,   251,  -226,
     262,   -43,   -43,   263,  -226,    70,   127,  -226,  -226,    14,
     124,   162,  -226,   224,   -43,   256,  -226,   -43,  -226,  -226,
      72,  -226,  -226,  -226,  -226,  -226,   265,  -226,  -226,   -43,
    -226
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -226,  -226,    39,  -226,  -226,  -226,  -226,  -226,  -226,  -226,
    -226,  -226,  -226,  -226,   231,  -226,  -226,    13,  -226,  -226,
     -89,    20,  -226,  -226,  -226,  -133,  -226,  -226,  -226,   -17,
    -226,  -226,  -226,  -226,  -226,  -226,  -226,  -128,  -226,  -226,
     227,  -226,  -226,   104,  -226,  -226,  -226,  -226,  -226,   118,
    -188,  -226,  -226,  -226,  -226,  -226,  -226,  -226,    -3,     5,
    -226,  -226,  -226,  -226,  -226,   -50,  -226,  -226,  -226,  -226,
    -226,  -226,    -5,  -226,  -226,  -226,   152,  -216,  -225,  -226,
    -226,  -226,    -1,  -186,  -226,    -7,  -226
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -237
static const yytype_int16 yytable[] =
{
      74,    75,    84,    86,    87,    58,    94,   153,    85,   142,
     271,    89,   135,   240,   275,   274,    97,   102,   270,   107,
      95,   100,    96,   101,   267,   235,   152,   246,   211,    88,
      11,    14,   247,   257,   -14,   117,   -14,   151,    73,   114,
     117,   118,   291,   -14,    78,    83,    78,    14,   117,   116,
     298,    14,    73,   115,   186,   295,    14,    11,   156,   117,
      14,    15,    16,    17,    18,    19,    20,    21,    22,   136,
     289,   318,   134,    77,    14,   316,   143,    27,   117,   248,
     193,   136,   203,   117,   223,   136,   136,   146,   268,   174,
     292,   269,   236,    23,   331,    24,   204,    27,    25,   174,
     261,    26,   165,   166,    27,   184,    14,    14,   167,    14,
     173,   183,    90,   320,   103,   188,    78,   321,    73,    73,
     175,   322,   187,   224,    93,   189,   217,    14,   108,   218,
     175,   192,   190,   195,    73,   290,   293,   334,   200,   294,
     317,   328,   152,   338,   202,   299,   205,   133,   207,   208,
     168,   111,   185,   112,   210,   252,   253,   -66,   117,   -66,
     113,   -67,   213,   -67,   214,   215,   -66,   137,   230,   -68,
     -67,   -68,   231,   138,   226,    78,   194,    78,   -68,   196,
     157,   198,    78,   303,    14,    15,    16,    17,    18,    19,
      20,    21,    22,   139,   314,   140,   241,   315,   329,   109,
     110,   330,   205,   255,   256,   244,   311,   312,   145,   147,
     149,  -236,   152,   150,   154,   250,   157,    23,   161,    24,
      98,   155,    25,   159,   164,    26,   163,   183,    93,   160,
     265,   226,   234,   136,   191,   197,   238,   201,   203,   206,
      78,   276,   244,   209,   277,   212,   216,   219,   220,   221,
     227,   284,   285,   228,   287,   288,   233,   232,   168,   244,
     168,   -93,   183,    14,    15,    16,    17,    18,    19,    20,
      21,    22,   251,   143,   198,   272,   242,   243,   245,   198,
      11,   249,   309,    14,    15,    16,    17,    18,    19,    20,
      21,    22,   258,   259,   260,   263,    23,   168,    24,   273,
     278,    25,   283,   286,    26,   280,   198,   231,   272,   236,
     325,   326,   297,   296,   198,   307,    23,    92,    24,   310,
     319,    25,   313,   335,    26,   323,   337,    93,   324,   327,
     336,   339,   158,   297,   333,   198,   266,   254,   340,   179,
     332,     0,     0,     0,     0,     1,     2,     0,     3,     0,
       4,   239,     0,     0,   272,     0,     5,     6,   198,     7,
       0,     0,     0,     0,     0,     8,     9,    10,     0,   297,
       0,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    23,     0,    24,
       0,     0,    25,     0,     0,    26,     0,     0,    27
};

static const yytype_int16 yycheck[] =
{
       1,     4,     7,    10,    11,     0,    23,    96,     9,     7,
     235,    12,    22,     7,     7,   240,    23,    24,   234,    26,
      23,    24,    23,    24,     7,     7,    18,    23,   161,    58,
      34,    37,    23,   221,    70,    74,    72,    71,    81,    56,
      74,    80,   267,    79,     5,     6,     7,    37,    74,    56,
     275,    37,    81,    56,    80,   271,    37,    34,    73,    74,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    79,
     258,   296,    77,    79,    37,   291,    74,    81,    74,   212,
      70,    79,    74,    74,   173,    79,    79,    88,    71,    46,
      71,    74,    74,    70,   319,    72,   146,    81,    75,    46,
     228,    78,    65,    66,    81,   112,    37,    37,    71,    37,
     111,   112,    81,   299,    76,   132,    77,   303,    81,    81,
      77,   307,   117,   173,    81,   132,    71,    37,     0,    74,
      77,   136,   133,   138,    81,   263,    71,   323,   143,    74,
      71,    71,    18,    71,   145,    21,   147,    74,   149,   152,
     111,    70,   113,    72,   157,    65,    66,    70,    74,    72,
      79,    70,   163,    72,   165,   166,    79,    22,    73,    70,
      79,    72,    77,    79,   175,   136,   137,   138,    79,   140,
      18,   142,   143,    21,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    79,    71,    74,   201,    74,    71,    68,
      69,    74,   203,    65,    66,   206,    65,    66,    74,    74,
      23,    71,    18,    71,    71,   216,    18,    70,    74,    72,
      73,    73,    75,    73,    78,    78,    77,   228,    81,    76,
     231,   232,   193,    79,    65,    74,   197,    74,    74,    74,
     201,   242,   243,    71,   245,    74,    80,    74,    74,    74,
      73,   252,   253,    74,   255,   256,    73,    77,   219,   260,
     221,    77,   263,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    71,    74,   235,   236,    74,    74,    74,   240,
      34,    74,   283,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    74,    71,    74,    74,    70,   258,    72,    74,
      81,    75,    66,    74,    78,    81,   267,    77,   269,    74,
     311,   312,   273,     7,   275,    74,    70,    71,    72,    74,
       7,    75,    74,   324,    78,    74,   327,    81,    66,    66,
      74,    66,   101,   294,   321,   296,   232,   219,   339,   112,
     320,    -1,    -1,    -1,    -1,     8,     9,    -1,    11,    -1,
      13,   199,    -1,    -1,   315,    -1,    19,    20,   319,    22,
      -1,    -1,    -1,    -1,    -1,    28,    29,    30,    -1,   330,
      -1,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    72,
      -1,    -1,    75,    -1,    -1,    78,    -1,    -1,    81
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     8,     9,    11,    13,    19,    20,    22,    28,    29,
      30,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    70,    72,    75,    78,    81,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
     101,   105,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   128,   135,   136,   137,   138,   139,   140,   141,   142,
     144,   145,   146,   148,   149,   150,   151,   152,   153,   161,
     163,   167,   168,    81,   164,   140,   141,    79,    84,   154,
     155,   156,   157,    84,   154,   164,   167,   167,    58,   164,
      81,   134,    71,    81,   111,   140,   164,   167,    73,    95,
     140,   164,   167,    76,   106,   107,   164,   167,     0,    68,
      69,    70,    72,    79,   111,   140,   167,    74,    80,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,   143,    74,   154,    22,    79,    22,    79,    79,
      74,   162,     7,    74,   158,    74,   164,    74,   147,    23,
      71,    71,    18,   102,    71,    73,    73,    18,    96,    73,
      76,    74,   108,    77,    78,    65,    66,    71,    84,   129,
     130,   131,   132,   164,    46,    77,   118,   119,   121,   122,
     123,   124,   127,   164,   167,    84,    80,   141,   111,   167,
     164,    65,   154,    70,    84,   154,    84,    74,    84,   160,
     154,    74,   164,    74,   147,   164,    74,   164,   140,    71,
     140,   107,    74,   164,   164,   164,    80,    71,    74,    74,
      74,    74,   133,   102,   147,   125,   164,    73,    74,   120,
      73,    77,    77,    73,    84,     7,    74,   159,    84,   158,
       7,   154,    74,    74,   164,    74,    23,    23,   107,    74,
     164,    71,    65,    66,   131,    65,    66,   132,    74,    71,
      74,   119,   122,    74,   126,   164,   125,     7,    71,    74,
     159,   160,    84,    74,   160,     7,   164,   164,    81,   166,
      81,    97,   165,    66,   164,   164,    74,   164,   164,   132,
     119,   160,    71,    71,    74,   159,     7,    84,   160,    21,
     102,   103,   104,    21,    96,    99,   100,    74,    98,   164,
      74,    65,    66,    74,    71,    74,   159,    71,   160,     7,
     165,   165,   165,    74,    66,   164,   164,    66,    71,    71,
      74,   160,   103,    99,   165,   164,    74,   164,    71,    66,
     164
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
      

/* Line 1455 of yacc.c  */
#line 1866 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 477 "D:\\Testing\\Repos\\PythonGrammar\\PythonGrammar\\python_syntax.y"

