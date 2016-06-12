
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
#line 75 "D:\\Testing\\Repos\\PythonGrammar\\PythonGrammar\\python_syntax.y"


/* Line 189 of yacc.c  */
#line 79 "D:\\Testing\\Repos\\PythonGrammar\\PythonGrammar\\python_syntax.y"

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
     SLASH = 322,
     DOUBLESLASH = 323,
     NEWLINE = 324,
     INDENT = 325,
     DEDENT = 326
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
#define SLASH 322
#define DOUBLESLASH 323
#define NEWLINE 324
#define INDENT 325
#define DEDENT 326




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 266 "y.tab.c"

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
#define YYFINAL  244
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2975

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  101
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  132
/* YYNRULES -- Number of rules.  */
#define YYNRULES  378
/* YYNRULES -- Number of states.  */
#define YYNSTATES  629

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   333

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    88,    89,     2,
      74,    75,     2,    86,    78,    85,    83,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    81,    99,
       2,    84,     2,     2,   100,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,    73,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    76,     2,    77,    90,     2,    82,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    72,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    79,    91,    80,    87,     2,     2,     2,
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
      65,    66,    67,    68,    69,    70,    71,    92,    93,    94,
      95,    96,    97,    98
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    12,    15,    17,    19,
      21,    23,    25,    27,    29,    31,    33,    35,    37,    39,
      41,    43,    45,    47,    49,    51,    53,    55,    58,    62,
      65,    69,    73,    76,    81,    87,    89,    92,    96,    99,
     103,   105,   107,   110,   114,   119,   124,   130,   132,   134,
     137,   141,   144,   148,   150,   153,   156,   160,   164,   167,
     171,   175,   179,   181,   184,   186,   188,   190,   192,   194,
     198,   203,   205,   207,   212,   217,   219,   222,   225,   229,
     231,   233,   235,   238,   242,   244,   246,   248,   251,   254,
     258,   261,   265,   267,   269,   271,   273,   277,   282,   288,
     294,   296,   300,   305,   310,   317,   324,   332,   342,   344,
     349,   354,   362,   365,   371,   374,   376,   379,   381,   384,
     388,   391,   395,   397,   400,   402,   405,   408,   411,   413,
     417,   421,   425,   429,   431,   435,   439,   441,   445,   449,
     451,   455,   457,   461,   463,   467,   469,   471,   474,   478,
     480,   482,   484,   486,   488,   490,   492,   494,   497,   499,
     502,   504,   506,   508,   510,   512,   518,   520,   524,   526,
     530,   532,   535,   539,   544,   548,   553,   555,   558,   561,
     565,   568,   572,   574,   576,   578,   580,   582,   584,   586,
     588,   590,   592,   594,   596,   598,   600,   602,   604,   607,
     612,   615,   618,   621,   625,   627,   631,   634,   636,   640,
     644,   646,   648,   650,   654,   658,   660,   662,   664,   666,
     668,   670,   672,   674,   676,   678,   680,   682,   684,   686,
     689,   691,   694,   698,   702,   707,   711,   716,   722,   724,
     727,   729,   731,   734,   739,   746,   748,   750,   753,   758,
     762,   768,   773,   780,   786,   794,   801,   810,   818,   828,
     836,   846,   855,   866,   871,   873,   877,   879,   881,   883,
     886,   890,   892,   895,   898,   903,   907,   913,   916,   921,
     925,   931,   933,   936,   940,   943,   947,   950,   955,   962,
     964,   966,   968,   970,   972,   974,   976,   979,   984,   987,
     989,   991,   994,   996,   999,  1002,  1006,  1009,  1013,  1018,
    1026,  1032,  1041,  1046,  1052,  1057,  1065,  1072,  1082,  1084,
    1086,  1091,  1099,  1107,  1118,  1122,  1127,  1134,  1139,  1145,
    1153,  1160,  1165,  1172,  1179,  1187,  1195,  1204,  1206,  1209,
    1213,  1219,  1226,  1234,  1236,  1239,  1242,  1246,  1249,  1255,
    1258,  1260,  1263,  1267,  1274,  1278,  1281,  1285,  1287,  1291,
    1294,  1298,  1300,  1303,  1306,  1310,  1312,  1316,  1319,  1323,
    1325,  1330,  1336,  1339,  1343,  1345,  1347,  1350,  1352
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     232,     0,    -1,    37,    -1,    38,    -1,    39,    -1,   105,
      72,    -1,   105,    73,    -1,    40,    -1,    41,    -1,    42,
      -1,    43,    -1,    44,    -1,    45,    -1,   102,    -1,   110,
      -1,   109,    -1,   111,    -1,   112,    -1,   119,    -1,   123,
      -1,   127,    -1,   128,    -1,   103,    -1,   105,    -1,   104,
      -1,   106,    -1,   107,    -1,    74,    75,    -1,    74,   171,
      75,    -1,    76,    77,    -1,    76,   171,    77,    -1,    76,
     113,    77,    -1,   163,   114,    -1,    18,   178,    23,   115,
      -1,    18,   178,    23,   115,   117,    -1,   164,    -1,   164,
     116,    -1,   164,   116,    78,    -1,    78,   164,    -1,   116,
      78,   164,    -1,   114,    -1,   118,    -1,    21,   164,    -1,
      21,   164,   117,    -1,    74,   163,   120,    75,    -1,    18,
     178,    23,   166,    -1,    18,   178,    23,   166,   121,    -1,
     120,    -1,   122,    -1,    21,   164,    -1,    21,   164,   121,
      -1,    79,    80,    -1,    79,   124,    80,    -1,   125,    -1,
     125,    78,    -1,   125,   126,    -1,   125,   126,    78,    -1,
     163,    81,   163,    -1,    78,   125,    -1,   126,    78,   125,
      -1,    82,   171,    82,    -1,    74,   129,    75,    -1,    34,
      -1,    34,   171,    -1,   108,    -1,   131,    -1,   132,    -1,
     133,    -1,   146,    -1,   130,    83,   102,    -1,   130,    76,
     171,    77,    -1,   134,    -1,   135,    -1,   130,    76,   140,
      77,    -1,   130,    76,   136,    77,    -1,   137,    -1,   137,
      78,    -1,   137,   138,    -1,   137,   138,    78,    -1,   163,
      -1,   139,    -1,   145,    -1,    78,   137,    -1,   138,    78,
     137,    -1,   140,    -1,   141,    -1,    81,    -1,   142,    81,
      -1,    81,   143,    -1,   142,    81,   143,    -1,   140,    81,
      -1,   140,    81,   144,    -1,   163,    -1,   163,    -1,   163,
      -1,    46,    -1,   130,    74,    75,    -1,   130,    74,   147,
      75,    -1,   130,    74,   147,    78,    75,    -1,   130,    74,
     163,   120,    75,    -1,   148,    -1,   148,    78,   149,    -1,
     148,    78,    65,   163,    -1,   148,    78,    66,   163,    -1,
     148,    78,   149,    78,    65,   163,    -1,   148,    78,   149,
      78,    66,   163,    -1,   148,    78,    65,   163,    78,    66,
     163,    -1,   148,    78,   149,    78,    65,   163,    78,    66,
     163,    -1,   149,    -1,   149,    78,    65,   163,    -1,   149,
      78,    66,   163,    -1,   149,    78,    65,   163,    78,    66,
     163,    -1,    65,   163,    -1,    65,   163,    78,    66,   163,
      -1,    66,   163,    -1,   163,    -1,   163,   172,    -1,   150,
      -1,   150,   151,    -1,   102,    84,   163,    -1,    78,   150,
      -1,   151,    78,   150,    -1,   130,    -1,    66,   153,    -1,
     152,    -1,    85,   153,    -1,    86,   153,    -1,    87,   153,
      -1,   153,    -1,   154,    65,   153,    -1,   154,    68,   153,
      -1,   154,    67,   153,    -1,   154,    88,   153,    -1,   154,
      -1,   155,    86,   154,    -1,   155,    85,   154,    -1,   155,
      -1,   156,    58,   155,    -1,   156,    59,   155,    -1,   156,
      -1,   157,    89,   156,    -1,   157,    -1,   158,    90,   157,
      -1,   158,    -1,   159,    91,   158,    -1,   159,    -1,   161,
      -1,   162,   159,    -1,   161,   162,   159,    -1,    92,    -1,
      93,    -1,    94,    -1,    95,    -1,    96,    -1,    97,    -1,
      98,    -1,    24,    -1,    24,    26,    -1,    23,    -1,    26,
      23,    -1,   165,    -1,   169,    -1,   166,    -1,   170,    -1,
     166,    -1,   166,    21,   166,    15,   163,    -1,   167,    -1,
     166,    27,   167,    -1,   168,    -1,   167,     6,   168,    -1,
     160,    -1,    26,   168,    -1,    25,    81,   163,    -1,    25,
     221,    81,   163,    -1,    25,    81,   164,    -1,    25,   221,
      81,   163,    -1,   163,    -1,   163,    78,    -1,   163,   172,
      -1,   163,   172,    78,    -1,    78,   163,    -1,   172,    78,
     163,    -1,   174,    -1,   175,    -1,   176,    -1,   180,    -1,
     182,    -1,   183,    -1,   184,    -1,   185,    -1,   186,    -1,
     187,    -1,   188,    -1,   189,    -1,   190,    -1,   198,    -1,
     200,    -1,   171,    -1,     8,   163,    -1,     8,   163,    78,
     163,    -1,   177,   171,    -1,   177,   129,    -1,   178,    84,
      -1,   177,   178,    84,    -1,   179,    -1,   178,    78,   179,
      -1,   178,    78,    -1,   102,    -1,    74,   178,    75,    -1,
      76,   178,    77,    -1,   131,    -1,   132,    -1,   133,    -1,
     179,   181,   171,    -1,   179,   181,   129,    -1,    47,    -1,
      48,    -1,    49,    -1,    50,    -1,    51,    -1,    52,    -1,
      53,    -1,    54,    -1,    55,    -1,    56,    -1,    57,    -1,
      58,    -1,    59,    -1,    28,    -1,    13,   178,    -1,    35,
      -1,    35,   163,    -1,    35,   163,    78,    -1,    35,   163,
     172,    -1,    35,   163,   172,    78,    -1,    35,    58,   163,
      -1,    35,    58,   163,   172,    -1,    35,    58,   163,   172,
      78,    -1,    30,    -1,    30,   171,    -1,   129,    -1,    29,
      -1,    29,   163,    -1,    29,   163,    78,   163,    -1,    29,
     163,    78,   163,    78,   163,    -1,     9,    -1,    11,    -1,
      22,   191,    -1,    22,   191,     7,   197,    -1,    22,   191,
     195,    -1,    22,   191,     7,   197,   195,    -1,    19,   192,
      22,   102,    -1,    19,   192,    22,   102,     7,   197,    -1,
      19,   192,    22,   102,   196,    -1,    19,   192,    22,   102,
       7,   197,   196,    -1,    19,   192,    22,    74,   102,    75,
      -1,    19,   192,    22,    74,   102,     7,   197,    75,    -1,
      19,   192,    22,    74,   102,   196,    75,    -1,    19,   192,
      22,    74,   102,     7,   197,   196,    75,    -1,    19,   192,
      22,    74,   102,    78,    75,    -1,    19,   192,    22,    74,
     102,     7,   197,    78,    75,    -1,    19,   192,    22,    74,
     102,   196,    78,    75,    -1,    19,   192,    22,    74,   102,
       7,   197,   196,    78,    75,    -1,    19,   191,    22,    65,
      -1,   102,    -1,   191,    83,   191,    -1,   191,    -1,   193,
      -1,   194,    -1,    83,   191,    -1,   193,    83,   191,    -1,
      83,    -1,   194,    83,    -1,    78,   191,    -1,    78,   191,
       7,   197,    -1,   195,    78,   191,    -1,   195,    78,   191,
       7,   197,    -1,    78,   102,    -1,    78,   102,     7,   197,
      -1,   196,    78,   102,    -1,   196,    78,   102,     7,   197,
      -1,   102,    -1,    20,   102,    -1,    20,   102,   199,    -1,
      78,   102,    -1,   199,    78,   102,    -1,    36,   159,    -1,
      36,   159,    23,   163,    -1,    36,   159,    23,   163,    78,
     163,    -1,   207,    -1,   209,    -1,   210,    -1,   211,    -1,
     215,    -1,   216,    -1,   228,    -1,   205,    69,    -1,    69,
      70,   204,    71,    -1,   205,    69,    -1,   201,    -1,   203,
      -1,   204,   203,    -1,   173,    -1,   173,    99,    -1,   173,
     206,    -1,   173,   206,    99,    -1,    99,   173,    -1,   206,
      99,   173,    -1,    21,   163,    81,   202,    -1,    21,   163,
      81,   202,    15,    81,   202,    -1,    21,   163,    81,   202,
     208,    -1,    21,   163,    81,   202,   208,    15,    81,   202,
      -1,    14,   163,    81,   202,    -1,   208,    14,   163,    81,
     202,    -1,    32,   163,    81,   202,    -1,    32,   163,    81,
     202,    15,    81,   202,    -1,    18,   178,    23,   171,    81,
     202,    -1,    18,   178,    23,   171,    81,   202,    15,    81,
     202,    -1,   212,    -1,   214,    -1,    31,    81,   202,   213,
      -1,    31,    81,   202,   213,    15,    81,   202,    -1,    31,
      81,   202,   213,    17,    81,   202,    -1,    31,    81,   202,
     213,    15,    81,   202,    17,    81,   202,    -1,    16,    81,
     202,    -1,    16,   163,    81,   202,    -1,    16,   163,    78,
     179,    81,   202,    -1,   213,    16,    81,   202,    -1,   213,
      16,   163,    81,   202,    -1,   213,    16,   163,    78,   179,
      81,   202,    -1,    31,    81,   202,    17,    81,   202,    -1,
      33,   163,    81,   163,    -1,    33,   163,     7,   179,    81,
     163,    -1,    12,   227,    74,    75,    81,   202,    -1,   217,
      12,   227,    74,    75,    81,   202,    -1,    12,   227,    74,
     221,    75,    81,   202,    -1,   217,    12,   227,    74,   221,
      75,    81,   202,    -1,   218,    -1,   217,   218,    -1,   100,
     219,    69,    -1,   100,   219,    74,    75,    69,    -1,   100,
     219,    74,   147,    75,    69,    -1,   100,   219,    74,   147,
      78,    75,    69,    -1,   102,    -1,   102,   220,    -1,    83,
     102,    -1,   220,    83,   102,    -1,    65,   102,    -1,    65,
     102,    78,    66,   102,    -1,    66,   102,    -1,   222,    -1,
     222,    78,    -1,   223,    65,   102,    -1,   223,    65,   102,
      78,    66,   102,    -1,   223,    66,   102,    -1,   223,   222,
      -1,   223,   222,    78,    -1,   225,    -1,   225,    84,   163,
      -1,   222,    78,    -1,   223,   222,    78,    -1,   225,    -1,
     225,    78,    -1,   225,   226,    -1,   225,   226,    78,    -1,
     102,    -1,    74,   224,    75,    -1,    78,   225,    -1,   226,
      78,   225,    -1,   102,    -1,    10,   230,    81,   202,    -1,
      10,   230,   229,    81,   202,    -1,    74,    75,    -1,    74,
     171,    75,    -1,   102,    -1,    69,    -1,   231,    69,    -1,
     231,    -1,   204,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    88,    88,    91,    91,    94,    94,    97,    97,    97,
     100,   100,   103,   106,   107,   108,   111,   112,   113,   114,
     115,   116,   119,   120,   121,   122,   123,   126,   127,   130,
     131,   132,   135,   138,   139,   142,   143,   144,   147,   148,
     151,   152,   155,   156,   159,   162,   163,   166,   167,   170,
     171,   174,   175,   178,   179,   180,   181,   184,   187,   188,
     191,   194,   197,   198,   201,   202,   203,   204,   205,   208,
     211,   214,   215,   218,   221,   224,   225,   226,   227,   230,
     231,   232,   235,   236,   239,   240,   243,   244,   245,   246,
     249,   250,   253,   256,   259,   262,   265,   266,   267,   268,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   288,   289,   292,   293,   296,
     299,   300,   303,   304,   307,   308,   309,   310,   313,   314,
     315,   316,   317,   320,   321,   322,   325,   326,   327,   330,
     331,   334,   335,   338,   339,   342,   343,   346,   347,   350,
     350,   350,   350,   350,   350,   350,   351,   351,   351,   351,
     354,   355,   358,   359,   362,   363,   366,   367,   370,   371,
     374,   375,   378,   379,   382,   383,   386,   387,   388,   389,
     392,   393,   396,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,   407,   408,   409,   410,   413,   416,   417,
     420,   421,   424,   425,   428,   429,   430,   433,   434,   435,
     436,   437,   438,   441,   442,   445,   445,   445,   445,   445,
     446,   446,   446,   446,   446,   447,   447,   447,   450,   453,
     456,   457,   458,   459,   460,   461,   462,   463,   466,   467,
     470,   473,   474,   475,   476,   479,   482,   485,   486,   487,
     488,   489,   490,   491,   492,   493,   494,   495,   496,   497,
     498,   499,   500,   501,   504,   505,   508,   509,   510,   513,
     514,   517,   518,   521,   522,   523,   524,   527,   528,   529,
     530,   533,   536,   537,   540,   541,   544,   545,   546,   549,
     550,   551,   552,   553,   554,   555,   558,   559,   562,   563,
     566,   567,   570,   571,   572,   573,   576,   577,   580,   581,
     582,   583,   586,   587,   590,   591,   594,   595,   598,   599,
     602,   603,   604,   605,   608,   609,   610,   611,   612,   613,
     616,   619,   620,   623,   624,   625,   626,   629,   630,   633,
     634,   635,   636,   639,   640,   643,   644,   647,   648,   649,
     650,   651,   652,   653,   654,   655,   656,   659,   660,   663,
     664,   667,   668,   669,   670,   673,   674,   677,   678,   681,
     684,   685,   688,   689,   692,   695,   696,   699,   700
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
  "LE_OP", "GE_OP", "EQ_OP", "NE_OP", "STAR", "DOUBLESTAR", "SLASH",
  "DOUBLESLASH", "NEWLINE", "INDENT", "DEDENT", "'l'", "'L'", "'('", "')'",
  "'['", "']'", "','", "'{'", "'}'", "':'", "'`'", "'.'", "'='", "'-'",
  "'+'", "'~'", "'%'", "'&'", "'^'", "'|'", "\"<\"", "\">\"", "\"==\"",
  "\">=\"", "\"<=\"", "\"<>\"", "\"!=\"", "';'", "'@'", "$accept",
  "identifier", "stringliteral", "longinteger", "integer", "floatnumber",
  "imagnumber", "atom", "enclosure", "literal", "parenth_form",
  "list_display", "list_comprehension", "list_for", "old_expression_list",
  "old_expressions", "list_iter", "list_if", "generator_expression",
  "genexpr_for", "genexpr_iter", "genexpr_if", "dict_display",
  "key_datum_list", "key_datum", "key_datums", "string_conversion",
  "yield_atom", "yield_expression", "primary", "attributeref",
  "subscription", "slicing", "simple_slicing", "extended_slicing",
  "slice_list", "slice_item", "slice_items", "proper_slice", "short_slice",
  "long_slice", "lower_bound", "upper_bound", "stride", "ellipsis", "call",
  "argument_list", "positional_arguments", "keyword_arguments",
  "keyword_item", "keyword_items", "power", "u_expr", "m_expr", "a_expr",
  "shift_expr", "and_expr", "xor_expr", "or_expr", "comparison",
  "comparison_operators_or_exprs", "comp_operator", "expression",
  "old_expression", "conditional_expression", "or_test", "and_test",
  "not_test", "lambda_form", "old_lambda_form", "expression_list",
  "expressions", "simple_stmt", "expression_stmt", "assert_stmt",
  "assignment_stmt", "assignment_stmt_targer_list", "target_list",
  "target", "augmented_assignment_stmt", "augop", "pass_stmt", "del_stmt",
  "print_stmt", "return_stmt", "yield_stmt", "raise_stmt", "break_stmt",
  "continue_stmt", "import_stmt", "module", "relative_module",
  "dot_modules", "dots", "modules", "import_stmt_identifiers", "name",
  "global_stmt", "global_stmt_identifiers", "exec_stmt", "compound_stmt",
  "suite", "statement", "statements", "stmt_list", "simple_stmts",
  "if_stmt", "elif_stmt", "while_stmt", "for_stmt", "try_stmt",
  "try1_stmt", "except_stmt", "try2_stmt", "with_stmt", "funcdef",
  "decorators", "decorator", "dotted_name", "dot_identifiers",
  "parameter_list", "defparameter", "defparameters", "sublist",
  "parameter", "parameters", "funcname", "classdef", "inheritance",
  "classname", "newlines", "input", 0
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
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   108,    76,    40,    41,    91,    93,    44,   123,
     125,    58,    96,    46,    61,    45,    43,   126,    37,    38,
      94,   124,   327,   328,   329,   330,   331,   332,   333,    59,
      64
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   101,   102,   103,   103,   104,   104,   105,   105,   105,
     106,   106,   107,   108,   108,   108,   109,   109,   109,   109,
     109,   109,   110,   110,   110,   110,   110,   111,   111,   112,
     112,   112,   113,   114,   114,   115,   115,   115,   116,   116,
     117,   117,   118,   118,   119,   120,   120,   121,   121,   122,
     122,   123,   123,   124,   124,   124,   124,   125,   126,   126,
     127,   128,   129,   129,   130,   130,   130,   130,   130,   131,
     132,   133,   133,   134,   135,   136,   136,   136,   136,   137,
     137,   137,   138,   138,   139,   139,   140,   140,   140,   140,
     141,   141,   142,   143,   144,   145,   146,   146,   146,   146,
     147,   147,   147,   147,   147,   147,   147,   147,   147,   147,
     147,   147,   147,   147,   147,   148,   148,   149,   149,   150,
     151,   151,   152,   152,   153,   153,   153,   153,   154,   154,
     154,   154,   154,   155,   155,   155,   156,   156,   156,   157,
     157,   158,   158,   159,   159,   160,   160,   161,   161,   162,
     162,   162,   162,   162,   162,   162,   162,   162,   162,   162,
     163,   163,   164,   164,   165,   165,   166,   166,   167,   167,
     168,   168,   169,   169,   170,   170,   171,   171,   171,   171,
     172,   172,   173,   173,   173,   173,   173,   173,   173,   173,
     173,   173,   173,   173,   173,   173,   173,   174,   175,   175,
     176,   176,   177,   177,   178,   178,   178,   179,   179,   179,
     179,   179,   179,   180,   180,   181,   181,   181,   181,   181,
     181,   181,   181,   181,   181,   181,   181,   181,   182,   183,
     184,   184,   184,   184,   184,   184,   184,   184,   185,   185,
     186,   187,   187,   187,   187,   188,   189,   190,   190,   190,
     190,   190,   190,   190,   190,   190,   190,   190,   190,   190,
     190,   190,   190,   190,   191,   191,   192,   192,   192,   193,
     193,   194,   194,   195,   195,   195,   195,   196,   196,   196,
     196,   197,   198,   198,   199,   199,   200,   200,   200,   201,
     201,   201,   201,   201,   201,   201,   202,   202,   203,   203,
     204,   204,   205,   205,   205,   205,   206,   206,   207,   207,
     207,   207,   208,   208,   209,   209,   210,   210,   211,   211,
     212,   212,   212,   212,   213,   213,   213,   213,   213,   213,
     214,   215,   215,   216,   216,   216,   216,   217,   217,   218,
     218,   218,   218,   219,   219,   220,   220,   221,   221,   221,
     221,   221,   221,   221,   221,   221,   221,   222,   222,   223,
     223,   224,   224,   224,   224,   225,   225,   226,   226,   227,
     228,   228,   229,   229,   230,   231,   231,   232,   232
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     3,     2,
       3,     3,     2,     4,     5,     1,     2,     3,     2,     3,
       1,     1,     2,     3,     4,     4,     5,     1,     1,     2,
       3,     2,     3,     1,     2,     2,     3,     3,     2,     3,
       3,     3,     1,     2,     1,     1,     1,     1,     1,     3,
       4,     1,     1,     4,     4,     1,     2,     2,     3,     1,
       1,     1,     2,     3,     1,     1,     1,     2,     2,     3,
       2,     3,     1,     1,     1,     1,     3,     4,     5,     5,
       1,     3,     4,     4,     6,     6,     7,     9,     1,     4,
       4,     7,     2,     5,     2,     1,     2,     1,     2,     3,
       2,     3,     1,     2,     1,     2,     2,     2,     1,     3,
       3,     3,     3,     1,     3,     3,     1,     3,     3,     1,
       3,     1,     3,     1,     3,     1,     1,     2,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     1,     2,
       1,     1,     1,     1,     1,     5,     1,     3,     1,     3,
       1,     2,     3,     4,     3,     4,     1,     2,     2,     3,
       2,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     4,
       2,     2,     2,     3,     1,     3,     2,     1,     3,     3,
       1,     1,     1,     3,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     2,     3,     3,     4,     3,     4,     5,     1,     2,
       1,     1,     2,     4,     6,     1,     1,     2,     4,     3,
       5,     4,     6,     5,     7,     6,     8,     7,     9,     7,
       9,     8,    10,     4,     1,     3,     1,     1,     1,     2,
       3,     1,     2,     2,     4,     3,     5,     2,     4,     3,
       5,     1,     2,     3,     2,     3,     2,     4,     6,     1,
       1,     1,     1,     1,     1,     1,     2,     4,     2,     1,
       1,     2,     1,     2,     2,     3,     2,     3,     4,     7,
       5,     8,     4,     5,     4,     7,     6,     9,     1,     1,
       4,     7,     7,    10,     3,     4,     6,     4,     5,     7,
       6,     4,     6,     6,     7,     7,     8,     1,     2,     3,
       5,     6,     7,     1,     2,     2,     3,     2,     5,     2,
       1,     2,     3,     6,     3,     2,     3,     1,     3,     2,
       3,     1,     2,     2,     3,     1,     3,     2,     3,     1,
       4,     5,     2,     3,     1,     1,     2,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,   245,     0,   246,     0,     0,     0,     0,     0,
       0,     0,   158,   156,     0,     0,   228,   241,   238,     0,
       0,     0,    62,   230,     0,     2,     3,     4,     7,     8,
       9,    10,    11,    12,     0,   375,     0,     0,     0,     0,
       0,     0,     0,   149,   150,   151,   152,   153,   154,   155,
       0,    13,    22,    24,    23,    25,    26,    64,    15,    14,
      16,    17,    18,    19,    20,    21,   240,   122,    65,    66,
      67,    71,    72,    68,   124,   128,   133,   136,   139,   141,
     143,   145,   170,   146,     0,   176,   160,   164,   166,   168,
     161,   197,   302,   182,   183,   184,     0,     0,   204,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   299,   300,   378,     0,   289,   290,   291,   292,   318,
     319,   293,   294,     0,   337,   295,   377,     0,     0,     0,
      13,    65,    66,    67,   198,   374,     0,   369,     0,     0,
     229,   204,     0,   271,   264,     0,     0,   267,   268,   282,
       0,   247,   157,     0,     0,     0,     0,   365,     0,   350,
       0,   357,   158,   171,   242,   239,     0,     0,     0,    63,
       0,   231,   286,   123,    27,     0,   176,     0,     0,    29,
       0,   176,     0,     0,    51,     0,    53,     0,     0,   125,
     126,   127,   343,     0,     5,     6,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   147,   177,   178,     0,     0,     0,   303,   304,
     201,   200,     0,   206,   202,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,     0,   301,
     298,     0,   338,   376,     1,     0,     0,     0,     0,     0,
       0,   269,     0,     0,     0,     0,   272,     0,   283,     0,
       0,     0,   249,   347,   349,     0,   361,   172,     0,   359,
       0,     0,   355,     0,     0,     0,     0,     0,     0,     0,
       0,   235,   232,   233,     0,    61,     0,     0,    28,   208,
      31,     0,    32,    30,   209,    52,    54,    55,     0,    60,
       0,   344,   339,     0,     0,     0,    96,    13,     0,   100,
     108,   117,   115,    95,    86,     0,    75,    80,    84,    85,
       0,    81,    79,     0,    69,   129,   131,   130,   132,   135,
     134,   137,   138,   140,   142,   144,   159,   148,   180,   179,
       0,   167,   169,   306,   305,   203,   205,   214,   213,     0,
     199,   372,     0,   370,     0,     0,     0,     0,   263,   265,
       0,   251,   270,   284,     0,   308,   281,   248,   273,     0,
       0,   366,   362,   363,   173,   352,   354,   360,   358,   243,
       0,     0,     0,   320,   296,   314,     0,   331,     0,   236,
     234,   287,     0,    44,     0,    58,    56,    57,   345,     0,
       0,     0,   115,   112,   123,   114,     0,    97,     0,     0,
       0,     0,   118,     0,   116,    88,    93,    74,    76,    77,
      73,    90,    87,    70,   181,     0,   307,     0,   373,   371,
       0,     0,     0,     0,     0,     0,   253,   285,     0,     0,
     310,   250,     0,   275,     0,   367,   364,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   237,     0,
       0,     0,    59,   346,   340,     0,     0,     0,   119,    98,
       0,     0,     0,   101,     0,     0,   120,     0,    99,     0,
      82,    84,    79,    78,    91,    94,    89,   165,     0,     0,
     333,     0,   316,     0,   255,     0,     0,   252,   277,     0,
       0,     0,     0,     0,   274,     0,   348,   368,     0,   244,
     297,   324,     0,     0,   330,     0,     0,     0,     0,     0,
     332,   288,    45,     0,    33,    35,   162,   163,   341,     0,
       0,   102,   103,     0,   109,   110,   121,    83,     0,     0,
     335,     0,     0,   259,   257,     0,   254,     0,   279,     0,
     309,     0,     0,   276,   353,     0,   325,   321,   327,     0,
       0,   322,   315,     0,    47,    46,    48,     0,     0,     0,
      40,    34,    41,     0,    36,   342,   113,     0,     0,     0,
       0,   334,     0,     0,   256,     0,     0,   261,   278,     0,
     312,     0,   311,     0,     0,     0,   328,    49,   174,     0,
      42,    38,    37,     0,   104,   105,     0,   336,   317,   260,
     258,     0,   280,   313,   326,     0,     0,    50,   175,    43,
      39,   106,     0,   111,   262,   323,   329,     0,   107
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   130,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,   180,   570,   524,   574,   571,   572,    62,   564,
     565,   566,    63,   185,   186,   297,    64,    65,    66,    67,
     131,   132,   133,    71,    72,   315,   316,   419,   317,   481,
     319,   320,   415,   484,   321,    73,   308,   309,   310,   311,
     412,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,   525,    86,    87,    88,    89,    90,   527,
      91,   214,    92,    93,    94,    95,    96,    97,    98,    99,
     238,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     145,   146,   147,   148,   262,   436,   367,   109,   258,   110,
     111,   276,   112,   113,   277,   219,   115,   440,   116,   117,
     118,   119,   383,   120,   121,   122,   123,   124,   193,   301,
     158,   159,   160,   265,   161,   373,   138,   125,   248,   136,
     126,   127
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -469
static const yytype_int16 yypact[] =
{
    1560,  2682,  -469,    25,  -469,    25,   144,   144,    14,    25,
    2682,    25,  -469,    38,    86,  2812,  -469,  2682,  2682,     4,
    2682,  2682,  2682,  2097,   963,  -469,  -469,  -469,  -469,  -469,
    -469,  -469,  -469,  -469,   963,  -469,   890,  2162,  2227,  2682,
     963,   963,   963,  -469,  -469,  -469,  -469,  -469,  -469,  -469,
      25,   437,  -469,  -469,    72,  -469,  -469,  -469,  -469,  -469,
    -469,  -469,  -469,  -469,  -469,  -469,  -469,    67,   559,   619,
     691,  -469,  -469,  -469,  -469,  -469,    91,   155,   216,   112,
      71,    11,  -469,   140,   963,   137,  -469,    40,   211,  -469,
    -469,  -469,   166,  -469,  -469,  -469,  2292,    69,   807,  -469,
    -469,  -469,  -469,  -469,  -469,  -469,  -469,  -469,  -469,  -469,
    -469,  -469,  -469,  1653,   202,  -469,  -469,  -469,  -469,  -469,
    -469,  -469,  -469,    29,  -469,  -469,   229,   224,  1463,  2357,
    -469,  -469,  -469,  -469,   204,  -469,     2,  -469,   206,    67,
     222,  -469,    46,    25,  -469,    36,   286,   231,   249,   234,
     239,    20,  -469,    25,    25,   100,  2682,  -469,   260,   269,
     241,   264,  -469,  -469,   272,  -469,  1746,   270,    27,  -469,
    2682,   276,    15,  -469,  -469,   277,    34,   282,    79,  -469,
     281,    39,   283,   209,  -469,   284,   288,   280,   287,  -469,
    -469,  -469,   279,   130,  -469,  -469,  1902,  1967,    25,   963,
     963,   963,   963,   963,   963,   963,   963,   963,   963,   963,
     340,   963,    11,  2682,   290,  2877,  2877,  2877,  1837,   273,
    -469,  -469,   113,   144,  -469,  -469,  -469,  -469,  -469,  -469,
    -469,  -469,  -469,  -469,  -469,  -469,  -469,  -469,  2422,  -469,
    -469,    25,  -469,  -469,  -469,  2682,  2487,  1746,   292,    13,
    2682,   291,   306,    25,   101,    25,  -469,    25,   297,  1746,
      25,    25,   298,   299,  -469,   304,   307,  -469,  2682,     5,
      25,    25,   308,  2682,  2682,   312,   301,   321,  1746,   144,
    2682,   313,  2682,   314,  2682,  -469,   144,   309,  -469,  -469,
    -469,   144,  -469,  -469,  -469,  -469,  2682,   316,  2682,  -469,
      25,   319,  -469,  2032,  2682,  2682,  -469,   320,    93,   318,
     325,   328,    42,  -469,  2682,   322,   329,  -469,    65,  -469,
     327,  -469,    12,   333,  -469,  -469,  -469,  -469,  -469,    91,
      91,   155,   155,   216,   112,    71,  -469,    11,  -469,  2682,
      44,   211,  -469,  -469,  1837,  -469,  -469,  -469,  -469,   323,
    -469,  -469,   337,  -469,  1746,   332,   339,   334,  -469,   291,
      25,    35,   291,  -469,    25,   310,  -469,   338,    21,    25,
     352,  -469,   100,   341,  -469,   344,  -469,   117,  -469,   345,
    1653,  2552,   346,   213,  -469,   378,   348,  -469,  2682,   347,
    2682,   353,    47,  -469,    52,  -469,  2682,  -469,  -469,    25,
     357,   125,   313,   354,  -469,  -469,  2682,  -469,   355,   111,
     261,    25,   358,   360,   363,  -469,  -469,  -469,  1967,   364,
    -469,  2682,  2682,  -469,  -469,  2682,  -469,   188,  -469,  -469,
    1746,   362,  1746,    32,    25,    25,   366,  -469,  2682,   365,
     315,   298,    25,    26,    25,  -469,   100,   382,  2682,  1193,
    1746,   135,  1746,   368,  2617,   369,   373,  2682,  2682,  2682,
    2877,  2747,  -469,  -469,  -469,   386,   384,   395,  -469,  -469,
    2682,  2682,   320,   385,  2682,  2682,  -469,    25,  -469,  2682,
    -469,   381,   383,  1967,  -469,  -469,  -469,  -469,   387,   390,
    -469,  1746,   451,    25,  -469,    16,   167,   389,   464,    25,
     391,  1746,  2682,   394,  -469,    25,  -469,  -469,    25,  -469,
    -469,  -469,   144,  1746,  -469,  1746,  1746,   141,  1746,  1746,
    -469,  -469,    45,   128,   237,   398,   450,  -469,  -469,   410,
    2682,   402,  -469,   274,   417,  -469,  -469,  -469,  1746,   415,
    -469,   416,   181,  -469,  -469,    17,   366,    25,   491,  1746,
    -469,   418,  1746,  -469,  -469,   419,  -469,   485,  -469,   144,
    1746,  -469,  -469,  2747,  -469,  -469,  -469,  2747,   423,  2747,
    -469,  -469,  -469,  2747,   427,  -469,  -469,   440,  2682,  2682,
     441,  -469,  1746,  1746,  -469,    95,   186,  -469,  -469,    25,
    -469,  1746,  -469,  1746,   428,   430,  -469,   248,  -469,  2682,
     237,  -469,  2747,  2682,   434,  -469,  2682,  -469,  -469,  -469,
    -469,    98,  -469,  -469,  -469,  1746,  1746,  -469,  -469,  -469,
    -469,  -469,   447,  -469,  -469,  -469,  -469,  2682,  -469
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -469,   285,  -469,  -469,  -469,  -469,  -469,  -469,  -469,  -469,
    -469,  -469,  -469,   335,  -469,  -469,   -86,  -469,  -469,  -163,
     -82,  -469,  -469,  -469,  -278,  -469,  -469,  -469,   -28,    -2,
     594,   813,   961,  -469,  -469,  -469,  -369,  -469,  -469,   326,
    -469,  -469,    97,  -469,  -469,  -469,   214,  -469,   115,  -366,
    -469,  -469,     6,   142,   138,   324,   317,   311,     0,  -469,
    -469,   439,    -1,  -468,  -469,  -214,   331,    -3,  -469,  -469,
      -7,  -150,  -204,  -469,  -469,  -469,  -469,    19,    37,  -469,
    -469,  -469,  -469,  -469,  -469,  -469,  -469,  -469,  -469,  -469,
      -4,  -469,  -469,  -469,   160,  -416,  -411,  -469,  -469,  -469,
    -469,  -182,  -107,   148,     3,  -469,  -469,  -469,  -469,  -469,
    -469,  -469,  -469,  -469,  -469,  -469,  -469,   407,  -469,  -469,
    -247,   375,  -469,  -469,  -145,  -469,   295,  -469,  -469,  -469,
    -469,  -469
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -357
static const yytype_int16 yytable[] =
{
     134,   340,   356,   114,   139,   139,   239,   151,   175,   150,
     266,   165,   163,   287,   343,   169,   164,   496,   395,   167,
     168,   283,   171,   497,   172,   140,   142,   260,   442,   177,
     182,   504,   188,   505,   279,   176,   181,   187,   284,   493,
     173,   241,   434,   141,   141,   476,   189,   190,   191,   480,
      25,    25,   286,    25,    25,   178,   183,   291,   252,   425,
     286,   215,    25,   286,   152,   353,   563,   216,   220,   250,
     460,   216,   216,   141,   141,   461,   246,   365,   153,   154,
    -351,   546,   542,   247,   212,   166,  -351,   155,   355,   221,
     213,   543,   587,   -92,   553,   597,   385,   143,   261,   598,
     175,   600,   209,   253,   253,   601,   209,   494,   280,   253,
     495,   536,   213,   435,   537,   222,   114,   213,   462,   253,
     388,   177,   182,    25,   223,   223,   586,   176,   181,    50,
     223,   389,    25,   141,   620,    25,   588,    25,    25,   251,
     426,   196,   420,   197,   194,   195,   421,   223,    25,   413,
     198,   153,   154,   224,   289,   267,   199,   223,   200,   201,
     155,   208,   414,    12,    13,    25,   210,   156,   407,   281,
     609,   408,   429,   624,   155,   360,   470,   471,   612,   202,
     489,    25,    26,    27,    28,    29,    30,    31,    32,    33,
     323,   223,  -356,   153,   154,   312,   322,   345,  -356,   302,
     465,   207,   155,   466,   303,   325,   326,   327,   328,   567,
     347,   337,   338,   512,   342,   213,   513,   217,    36,   559,
      37,   139,   560,    38,   244,    25,    39,   445,   453,   454,
     455,   348,    43,    44,    45,    46,    47,    48,    49,   352,
     203,   204,   544,   357,   350,   545,   522,   526,   490,   359,
     492,   362,   414,   153,   154,   291,   584,   368,   569,   585,
     346,   610,   155,   488,   611,   218,   286,   374,   511,   563,
     514,   240,   378,   379,   205,   206,   568,   139,    25,   387,
     249,   338,   245,   391,   139,    51,   294,   223,   135,   139,
     137,    51,    51,   144,   149,   187,   144,   397,   243,   157,
     223,   507,   402,   403,   405,   392,   270,   271,   254,   540,
     394,   404,   257,   416,   255,   155,   386,   381,   382,   550,
     259,    51,    51,   141,   438,   439,   474,   475,   141,   502,
     503,   556,   256,   557,   558,   192,   561,   562,   424,   578,
     579,   268,   239,   331,   332,   329,   330,   269,   273,   526,
     274,   278,   285,   526,   282,   526,   581,   288,   290,   526,
     293,   298,   300,   336,   295,   443,   296,   590,   339,   299,
     592,   358,   344,   354,   253,   364,   369,   370,   596,   371,
     451,    51,   380,   114,   393,   372,   377,   338,   526,   424,
     384,   388,   390,   456,   396,   187,   409,   427,    51,   417,
     607,   608,   399,   410,   406,   468,   411,   418,   422,   613,
     423,   614,   428,   430,   431,   432,   261,   482,   444,   446,
     485,   416,   447,   448,   487,   458,   464,   452,   144,   457,
     469,   459,   467,   625,   626,   478,   477,   500,   263,   264,
     157,   479,   483,   491,   499,   157,   501,   509,   508,   515,
     518,    51,   114,   517,   519,   528,   520,   424,   521,   529,
    -207,   530,   421,   533,   -92,   539,   541,   435,   538,   531,
     532,   547,   549,   534,   535,   552,   573,   216,   424,   575,
     577,   307,   482,   324,  -207,  -207,  -207,  -207,  -207,  -207,
    -207,  -207,  -207,  -207,  -207,   580,   582,   583,   589,   591,
     593,   551,   594,    51,   599,   602,   603,   606,    51,   615,
     139,   616,   622,   627,   619,   617,   292,   401,  -207,   486,
     335,  -207,   211,   318,   473,   334,   137,   441,   449,   576,
     242,   333,    51,     0,   157,   272,   349,     0,   144,   361,
     144,     0,   363,     0,    51,   366,   144,   341,     0,   555,
       0,     0,     0,     0,     0,   375,   376,   139,     0,     0,
       0,     0,     0,    51,    51,     0,     0,     0,     0,     0,
       0,    51,     0,     0,     0,     0,    51,   604,   605,     0,
       0,     0,  -210,     0,     0,   398,     0,     0,   307,     0,
       0,     0,     0,     0,    68,     0,   595,     0,   618,     0,
      68,    68,   621,     0,     0,   623,  -210,  -210,  -210,  -210,
    -210,  -210,  -210,  -210,  -210,  -210,  -210,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   628,     0,     0,    51,
      68,    68,     0,     0,     0,     0,     0,     0,     0,    51,
    -210,     0,  -211,  -210,     0,   433,     0,     0,     0,   437,
       0,     0,     0,     0,   144,     0,     0,   157,     0,     0,
       0,     0,     0,     0,     0,    51,  -211,  -211,  -211,  -211,
    -211,  -211,  -211,  -211,  -211,  -211,  -211,     0,     0,     0,
       0,     0,     0,     0,   463,     0,     0,     0,     0,     0,
      68,     0,     0,     0,   472,     0,   472,     0,     0,     0,
    -211,     0,     0,  -211,     0,     0,     0,    68,     0,     0,
       0,     0,   157,     0,  -212,    51,     0,    51,     0,   366,
     498,     0,     0,     0,     0,     0,     0,   366,     0,   506,
       0,   157,     0,     0,    51,    51,     0,    51,  -212,  -212,
    -212,  -212,  -212,  -212,  -212,  -212,  -212,  -212,  -212,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      68,     0,   472,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -212,     0,     0,  -212,    51,     0,   366,     0,
     498,     0,     0,     0,   548,     0,    51,     0,     0,     0,
     366,     0,     0,   554,     0,     0,     0,    51,    51,     0,
      51,    51,     0,    51,    51,     0,     0,     0,   157,     0,
       0,     0,    68,    69,     0,     0,     0,    68,     0,    69,
      69,     0,     0,    51,     0,     0,     0,     0,     0,     0,
     548,     0,   366,     0,    51,     0,     0,    51,     0,     0,
       0,    68,     0,     0,    51,    51,     0,     0,     0,    69,
      69,     0,     0,    68,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,    51,    51,     0,
     498,     0,    68,    68,   366,     0,    51,     0,    51,     0,
      68,     0,     0,     0,     0,    68,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   548,     0,     0,     0,
      51,    51,     0,     0,     0,     0,     0,     0,     0,    69,
       0,     0,     0,    12,    13,    14,    15,     0,     0,     0,
       0,     0,     0,     0,    22,     0,    69,    25,    26,    27,
      28,    29,    30,    31,    32,    33,     0,     0,    68,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    68,     0,
       0,     0,     0,     0,     0,     0,    34,     0,     0,     0,
       0,    70,     0,     0,    36,   174,    37,    70,    70,    38,
       0,     0,    39,     0,    68,    40,    41,    42,     0,    69,
       0,     0,    43,    44,    45,    46,    47,    48,    49,     0,
       0,     0,     0,     0,     0,     0,     0,    70,    70,     0,
      25,    26,    27,    28,    29,    30,    31,    32,    33,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    68,     0,    68,     0,     0,    34,
       0,    69,     0,     0,     0,     0,    69,   128,     0,   129,
       0,     0,    38,    68,    68,    39,    68,     0,    40,    41,
      42,     0,     0,     0,     0,     0,     0,    70,     0,     0,
      69,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    69,     0,    70,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    68,     0,     0,     0,     0,
       0,    69,    69,     0,     0,    68,     0,     0,     0,    69,
       0,     0,     0,     0,    69,     0,    68,    68,     0,    68,
      68,     0,    68,    68,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    70,     0,     0,
       0,     0,    68,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    68,     0,     0,    68,     0,     0,     0,
       0,     0,     0,    68,    68,     0,     0,    69,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    69,     0,     0,
       0,     0,     0,     0,     0,     0,    68,    68,     0,    70,
       0,     0,     0,     0,    70,    68,     0,    68,     0,     0,
       0,     0,     0,    69,     0,     0,     0,     0,     0,     0,
       0,     1,     2,     3,     4,     5,     6,     0,    70,    68,
      68,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      70,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    70,
      70,     0,     0,    69,     0,    69,     0,    70,     0,     0,
       0,     0,    70,     0,     0,     0,     0,     0,     0,    34,
       0,     0,    69,    69,   510,    69,     0,    36,     0,    37,
       0,     0,    38,     0,     0,    39,     0,     0,    40,    41,
      42,     0,     0,     0,     0,    43,    44,    45,    46,    47,
      48,    49,     0,    50,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    69,    70,     0,     0,     0,     0,
       0,     0,     0,     0,    69,    70,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    69,    69,     0,    69,    69,
       0,    69,    69,     0,     0,     0,     0,     0,     0,     0,
       0,    70,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    69,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    69,     0,     0,    69,     0,     0,     0,     0,
       0,     0,    69,    69,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    70,     0,    70,     0,    69,    69,     0,     0,     0,
       0,     0,     0,     0,    69,     0,    69,     0,     0,     0,
      70,    70,     0,    70,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    69,    69,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    70,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    70,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    70,    70,     0,    70,    70,     0,    70,
      70,     0,     0,     0,     0,     0,    12,    13,    14,    15,
       0,     0,     0,     0,     0,     0,     0,    22,     0,    70,
      25,    26,    27,    28,    29,    30,    31,    32,    33,     0,
      70,     0,     0,    70,     0,     0,     0,     0,     0,     0,
      70,    70,     0,     0,     0,     0,     0,     0,     0,    34,
       0,     0,     0,     0,     0,     0,     0,   128,   174,   129,
       0,     0,    38,    70,    70,    39,     0,     0,    40,    41,
      42,     0,    70,     0,    70,    43,    44,    45,    46,    47,
      48,    49,     0,     0,     0,     0,     0,     0,     1,     2,
       3,     4,     5,     6,     0,     0,    70,    70,     7,     8,
       9,    10,    11,    12,    13,    14,    15,     0,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    34,     0,     0,    35,
       0,     0,     0,     0,    36,     0,    37,     0,     0,    38,
       0,     0,    39,     0,     0,    40,    41,    42,     0,     0,
       0,     0,    43,    44,    45,    46,    47,    48,    49,     0,
      50,     1,     2,     3,     4,     5,     6,     0,     0,     0,
       0,     7,     8,     9,    10,    11,    12,    13,    14,    15,
       0,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    34,
       0,     0,     0,     0,     0,     0,     0,    36,     0,    37,
       0,     0,    38,     0,     0,    39,     0,     0,    40,    41,
      42,     0,     0,     0,     0,    43,    44,    45,    46,    47,
      48,    49,     0,    50,     1,     2,     0,     4,     0,     6,
       0,     0,     0,     0,     0,     8,     9,     0,    11,    12,
      13,    14,    15,     0,    16,    17,    18,     0,     0,     0,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    34,     0,     0,   275,     0,     0,     0,     0,
      36,     0,    37,     0,     0,    38,     0,     0,    39,     0,
       0,    40,    41,    42,     0,     0,     0,     0,    43,    44,
      45,    46,    47,    48,    49,     1,     2,     0,     4,     0,
       6,     0,     0,     0,     0,     0,     8,     9,     0,    11,
      12,    13,    14,    15,     0,    16,    17,    18,     0,     0,
       0,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    34,     0,     0,     0,     0,     0,     0,
       0,    36,     0,    37,     0,     0,    38,     0,     0,    39,
       0,     0,    40,    41,    42,    12,    13,    14,    15,    43,
      44,    45,    46,    47,    48,    49,     0,     0,     0,    25,
      26,    27,    28,    29,    30,    31,    32,    33,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   304,   305,     0,
       0,     0,     0,     0,     0,     0,   128,   306,   129,     0,
       0,    38,     0,     0,    39,     0,     0,    40,    41,    42,
      12,    13,    14,    15,    43,    44,    45,    46,    47,    48,
      49,     0,     0,     0,    25,    26,    27,    28,    29,    30,
      31,    32,    33,   313,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    34,     0,     0,     0,     0,     0,     0,
       0,   128,     0,   129,     0,     0,    38,     0,   314,    39,
       0,     0,    40,    41,    42,    12,    13,    14,    15,    43,
      44,    45,    46,    47,    48,    49,     0,     0,     0,    25,
      26,    27,    28,    29,    30,    31,    32,    33,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   304,   305,     0,
       0,     0,     0,     0,     0,     0,   128,   400,   129,     0,
       0,    38,     0,     0,    39,     0,     0,    40,    41,    42,
      12,    13,    14,    15,    43,    44,    45,    46,    47,    48,
      49,     0,     0,     0,    25,    26,    27,    28,    29,    30,
      31,    32,    33,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   170,     0,     0,     0,     0,
       0,     0,     0,    34,     0,     0,     0,     0,     0,     0,
       0,   128,     0,   129,     0,     0,    38,     0,     0,    39,
       0,     0,    40,    41,    42,    12,    13,    14,    15,    43,
      44,    45,    46,    47,    48,    49,     0,     0,     0,    25,
      26,    27,    28,    29,    30,    31,    32,    33,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    34,     0,
       0,     0,     0,     0,     0,     0,    36,     0,    37,   179,
       0,    38,     0,     0,    39,     0,     0,    40,    41,    42,
      12,    13,    14,    15,    43,    44,    45,    46,    47,    48,
      49,     0,     0,     0,    25,    26,    27,    28,    29,    30,
      31,    32,    33,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    34,     0,     0,     0,     0,     0,     0,
       0,   128,     0,   129,     0,     0,    38,   184,     0,    39,
       0,     0,    40,    41,    42,    12,    13,    14,    15,    43,
      44,    45,    46,    47,    48,    49,    22,     0,     0,    25,
      26,    27,    28,    29,    30,    31,    32,    33,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    34,     0,
       0,     0,     0,     0,     0,     0,    36,     0,    37,     0,
       0,    38,     0,     0,    39,     0,     0,    40,    41,    42,
      12,    13,    14,    15,    43,    44,    45,    46,    47,    48,
      49,     0,     0,     0,    25,    26,    27,    28,    29,    30,
      31,    32,    33,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    34,     0,     0,     0,     0,     0,     0,
       0,   128,     0,   129,   179,     0,    38,     0,     0,    39,
       0,     0,    40,    41,    42,    12,    13,    14,    15,    43,
      44,    45,    46,    47,    48,    49,    22,     0,     0,    25,
      26,    27,    28,    29,    30,    31,    32,    33,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    34,     0,
       0,     0,     0,     0,     0,     0,   128,     0,   129,     0,
       0,    38,     0,     0,    39,     0,     0,    40,    41,    42,
      12,    13,    14,    15,    43,    44,    45,    46,    47,    48,
      49,     0,     0,     0,    25,    26,    27,    28,    29,    30,
      31,    32,    33,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    34,     0,     0,     0,     0,     0,     0,
       0,   128,   351,   129,     0,     0,    38,     0,     0,    39,
       0,     0,    40,    41,    42,    12,    13,    14,    15,    43,
      44,    45,    46,    47,    48,    49,     0,     0,     0,    25,
      26,    27,    28,    29,    30,    31,    32,    33,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    34,     0,
       0,     0,     0,     0,     0,     0,   128,     0,   129,     0,
       0,    38,     0,   450,    39,     0,     0,    40,    41,    42,
      12,    13,    14,    15,    43,    44,    45,    46,    47,    48,
      49,     0,     0,     0,    25,    26,    27,    28,    29,    30,
      31,    32,    33,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    34,     0,     0,     0,     0,     0,     0,
       0,   128,     0,   129,     0,     0,    38,     0,   516,    39,
       0,     0,    40,    41,    42,    12,    13,    14,    15,    43,
      44,    45,    46,    47,    48,    49,     0,     0,     0,    25,
      26,    27,    28,    29,    30,    31,    32,    33,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    34,     0,
       0,     0,     0,     0,     0,     0,   128,     0,   129,     0,
       0,    38,     0,     0,    39,     0,     0,    40,    41,    42,
      12,    13,   523,    15,    43,    44,    45,    46,    47,    48,
      49,     0,     0,     0,    25,    26,    27,    28,    29,    30,
      31,    32,    33,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    34,     0,     0,     0,     0,     0,     0,
       0,   128,     0,   129,     0,     0,    38,     0,     0,    39,
       0,     0,    40,    41,    42,   162,    13,     0,    15,    43,
      44,    45,    46,    47,    48,    49,     0,     0,     0,    25,
      26,    27,    28,    29,    30,    31,    32,    33,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    34,     0,
       0,     0,     0,     0,     0,     0,   128,     0,   129,     0,
       0,    38,     0,     0,    39,     0,     0,    40,    41,    42,
      12,    13,     0,    15,    43,    44,    45,    46,    47,    48,
      49,     0,     0,     0,    25,    26,    27,    28,    29,    30,
      31,    32,    33,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    34,     0,     0,     0,     0,     0,     0,
       0,   128,     0,   129,     0,     0,    38,     0,     0,    39,
       0,     0,    40,    41,    42,     0,     0,     0,     0,    43,
      44,    45,    46,    47,    48,    49
};

static const yytype_int16 yycheck[] =
{
       1,   215,   249,     0,     6,     7,   113,    11,    36,    10,
     155,    18,    15,   176,   218,    22,    17,   433,   296,    20,
      21,   171,    23,   434,    24,     6,     7,     7,     7,    36,
      37,   442,    39,     7,     7,    36,    37,    38,    23,     7,
      34,    12,     7,     6,     7,   411,    40,    41,    42,   418,
      37,    37,    18,    37,    37,    36,    37,    18,    22,    15,
      18,    21,    37,    18,    26,   247,    21,    27,    96,    23,
      23,    27,    27,    36,    37,    23,    74,   259,    65,    66,
      75,   497,   493,    81,    84,    81,    81,    74,    75,    96,
      78,    75,    75,    81,   505,   563,   278,    83,    78,   567,
     128,   569,    91,    83,    83,   573,    91,    75,    81,    83,
      78,   477,    78,    78,   483,    96,   113,    78,   396,    83,
      78,   128,   129,    37,    78,    78,   542,   128,   129,   100,
      78,   281,    37,    96,   602,    37,   547,    37,    37,   143,
     344,    74,    77,    76,    72,    73,    81,    78,    37,   312,
      83,    65,    66,    84,    75,   156,    65,    78,    67,    68,
      74,    90,   312,    23,    24,    37,    26,    81,    75,   170,
      75,    78,   354,    75,    74,    74,    65,    66,   589,    88,
     427,    37,    38,    39,    40,    41,    42,    43,    44,    45,
     197,    78,    75,    65,    66,   196,   197,    84,    81,    69,
      75,    89,    74,    78,    74,   199,   200,   201,   202,    81,
     238,   211,   213,    78,   217,    78,    81,     6,    74,    78,
      76,   223,    81,    79,     0,    37,    82,   372,    15,    16,
      17,   238,    92,    93,    94,    95,    96,    97,    98,   246,
      85,    86,    75,   250,   245,    78,   460,   461,   430,   253,
     432,   255,   402,    65,    66,    18,    75,   261,    21,    78,
     223,    75,    74,    75,    78,    99,    18,   268,   450,    21,
     452,    69,   273,   274,    58,    59,   523,   279,    37,   280,
      74,   282,    78,   284,   286,     0,    77,    78,     3,   291,
       5,     6,     7,     8,     9,   296,    11,   298,    69,    14,
      78,   446,   303,   304,   305,   286,    65,    66,    22,   491,
     291,   305,    78,   314,    83,    74,   279,    16,    17,   501,
      81,    36,    37,   286,    14,    15,    65,    66,   291,    14,
      15,   513,    83,   515,   516,    50,   518,   519,   339,    65,
      66,    81,   449,   205,   206,   203,   204,    78,    84,   563,
      78,    81,    75,   567,    78,   569,   538,    75,    77,   573,
      77,    81,    83,    23,    80,   369,    78,   549,    78,    82,
     552,    65,    99,    81,    83,    78,    78,    78,   560,    75,
     381,    96,    70,   380,    75,    78,    78,   388,   602,   390,
      69,    78,    78,    15,    78,   396,    78,    74,   113,    77,
     582,   583,    83,    78,    84,   406,    78,    78,    81,   591,
      77,   593,    75,    81,    75,    81,    78,   418,    66,    78,
     421,   422,    78,    78,   425,    78,    69,    81,   143,    81,
      75,    78,    78,   615,   616,    75,    78,   438,   153,   154,
     155,    78,    78,    81,    78,   160,    81,   448,    66,    81,
      81,   166,   449,   454,    81,    69,   457,   458,   459,    75,
      23,    66,    81,    78,    81,    75,    15,    78,    81,   470,
     471,     7,    81,   474,   475,    81,    78,    27,   479,    69,
      78,   196,   483,   198,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    78,    81,    81,     7,    81,
      81,   502,    17,   218,    81,    78,    66,    66,   223,    81,
     512,    81,    78,    66,   600,   597,   181,   303,    81,   422,
     209,    84,    83,   197,   409,   208,   241,   367,   380,   530,
     123,   207,   247,    -1,   249,   160,   241,    -1,   253,   254,
     255,    -1,   257,    -1,   259,   260,   261,   216,    -1,   512,
      -1,    -1,    -1,    -1,    -1,   270,   271,   559,    -1,    -1,
      -1,    -1,    -1,   278,   279,    -1,    -1,    -1,    -1,    -1,
      -1,   286,    -1,    -1,    -1,    -1,   291,   578,   579,    -1,
      -1,    -1,    23,    -1,    -1,   300,    -1,    -1,   303,    -1,
      -1,    -1,    -1,    -1,     0,    -1,   559,    -1,   599,    -1,
       6,     7,   603,    -1,    -1,   606,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   627,    -1,    -1,   344,
      36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   354,
      81,    -1,    23,    84,    -1,   360,    -1,    -1,    -1,   364,
      -1,    -1,    -1,    -1,   369,    -1,    -1,   372,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   380,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   399,    -1,    -1,    -1,    -1,    -1,
      96,    -1,    -1,    -1,   409,    -1,   411,    -1,    -1,    -1,
      81,    -1,    -1,    84,    -1,    -1,    -1,   113,    -1,    -1,
      -1,    -1,   427,    -1,    23,   430,    -1,   432,    -1,   434,
     435,    -1,    -1,    -1,    -1,    -1,    -1,   442,    -1,   444,
      -1,   446,    -1,    -1,   449,   450,    -1,   452,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     166,    -1,   477,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    81,    -1,    -1,    84,   491,    -1,   493,    -1,
     495,    -1,    -1,    -1,   499,    -1,   501,    -1,    -1,    -1,
     505,    -1,    -1,   508,    -1,    -1,    -1,   512,   513,    -1,
     515,   516,    -1,   518,   519,    -1,    -1,    -1,   523,    -1,
      -1,    -1,   218,     0,    -1,    -1,    -1,   223,    -1,     6,
       7,    -1,    -1,   538,    -1,    -1,    -1,    -1,    -1,    -1,
     545,    -1,   547,    -1,   549,    -1,    -1,   552,    -1,    -1,
      -1,   247,    -1,    -1,   559,   560,    -1,    -1,    -1,    36,
      37,    -1,    -1,   259,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,   582,   583,    -1,
     585,    -1,   278,   279,   589,    -1,   591,    -1,   593,    -1,
     286,    -1,    -1,    -1,    -1,   291,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   611,    -1,    -1,    -1,
     615,   616,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,
      -1,    -1,    -1,    23,    24,    25,    26,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    34,    -1,   113,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    -1,    -1,   344,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   354,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,
      -1,     0,    -1,    -1,    74,    75,    76,     6,     7,    79,
      -1,    -1,    82,    -1,   380,    85,    86,    87,    -1,   166,
      -1,    -1,    92,    93,    94,    95,    96,    97,    98,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    36,    37,    -1,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   430,    -1,   432,    -1,    -1,    66,
      -1,   218,    -1,    -1,    -1,    -1,   223,    74,    -1,    76,
      -1,    -1,    79,   449,   450,    82,   452,    -1,    85,    86,
      87,    -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,    -1,
     247,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   259,    -1,   113,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   491,    -1,    -1,    -1,    -1,
      -1,   278,   279,    -1,    -1,   501,    -1,    -1,    -1,   286,
      -1,    -1,    -1,    -1,   291,    -1,   512,   513,    -1,   515,
     516,    -1,   518,   519,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   166,    -1,    -1,
      -1,    -1,   538,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   549,    -1,    -1,   552,    -1,    -1,    -1,
      -1,    -1,    -1,   559,   560,    -1,    -1,   344,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   354,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   582,   583,    -1,   218,
      -1,    -1,    -1,    -1,   223,   591,    -1,   593,    -1,    -1,
      -1,    -1,    -1,   380,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     8,     9,    10,    11,    12,    13,    -1,   247,   615,
     616,    18,    19,    20,    21,    22,    23,    24,    25,    26,
     259,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,   278,
     279,    -1,    -1,   430,    -1,   432,    -1,   286,    -1,    -1,
      -1,    -1,   291,    -1,    -1,    -1,    -1,    -1,    -1,    66,
      -1,    -1,   449,   450,    71,   452,    -1,    74,    -1,    76,
      -1,    -1,    79,    -1,    -1,    82,    -1,    -1,    85,    86,
      87,    -1,    -1,    -1,    -1,    92,    93,    94,    95,    96,
      97,    98,    -1,   100,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   491,   344,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   501,   354,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   512,   513,    -1,   515,   516,
      -1,   518,   519,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   380,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   538,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   549,    -1,    -1,   552,    -1,    -1,    -1,    -1,
      -1,    -1,   559,   560,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   430,    -1,   432,    -1,   582,   583,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   591,    -1,   593,    -1,    -1,    -1,
     449,   450,    -1,   452,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   615,   616,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   491,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   501,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   512,   513,    -1,   515,   516,    -1,   518,
     519,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,    26,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,   538,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    -1,
     549,    -1,    -1,   552,    -1,    -1,    -1,    -1,    -1,    -1,
     559,   560,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,    75,    76,
      -1,    -1,    79,   582,   583,    82,    -1,    -1,    85,    86,
      87,    -1,   591,    -1,   593,    92,    93,    94,    95,    96,
      97,    98,    -1,    -1,    -1,    -1,    -1,    -1,     8,     9,
      10,    11,    12,    13,    -1,    -1,   615,   616,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    -1,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,    -1,    69,
      -1,    -1,    -1,    -1,    74,    -1,    76,    -1,    -1,    79,
      -1,    -1,    82,    -1,    -1,    85,    86,    87,    -1,    -1,
      -1,    -1,    92,    93,    94,    95,    96,    97,    98,    -1,
     100,     8,     9,    10,    11,    12,    13,    -1,    -1,    -1,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      -1,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,    -1,    76,
      -1,    -1,    79,    -1,    -1,    82,    -1,    -1,    85,    86,
      87,    -1,    -1,    -1,    -1,    92,    93,    94,    95,    96,
      97,    98,    -1,   100,     8,     9,    -1,    11,    -1,    13,
      -1,    -1,    -1,    -1,    -1,    19,    20,    -1,    22,    23,
      24,    25,    26,    -1,    28,    29,    30,    -1,    -1,    -1,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    66,    -1,    -1,    69,    -1,    -1,    -1,    -1,
      74,    -1,    76,    -1,    -1,    79,    -1,    -1,    82,    -1,
      -1,    85,    86,    87,    -1,    -1,    -1,    -1,    92,    93,
      94,    95,    96,    97,    98,     8,     9,    -1,    11,    -1,
      13,    -1,    -1,    -1,    -1,    -1,    19,    20,    -1,    22,
      23,    24,    25,    26,    -1,    28,    29,    30,    -1,    -1,
      -1,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    74,    -1,    76,    -1,    -1,    79,    -1,    -1,    82,
      -1,    -1,    85,    86,    87,    23,    24,    25,    26,    92,
      93,    94,    95,    96,    97,    98,    -1,    -1,    -1,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    66,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    74,    75,    76,    -1,
      -1,    79,    -1,    -1,    82,    -1,    -1,    85,    86,    87,
      23,    24,    25,    26,    92,    93,    94,    95,    96,    97,
      98,    -1,    -1,    -1,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    74,    -1,    76,    -1,    -1,    79,    -1,    81,    82,
      -1,    -1,    85,    86,    87,    23,    24,    25,    26,    92,
      93,    94,    95,    96,    97,    98,    -1,    -1,    -1,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    66,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    74,    75,    76,    -1,
      -1,    79,    -1,    -1,    82,    -1,    -1,    85,    86,    87,
      23,    24,    25,    26,    92,    93,    94,    95,    96,    97,
      98,    -1,    -1,    -1,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    58,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    74,    -1,    76,    -1,    -1,    79,    -1,    -1,    82,
      -1,    -1,    85,    86,    87,    23,    24,    25,    26,    92,
      93,    94,    95,    96,    97,    98,    -1,    -1,    -1,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    74,    -1,    76,    77,
      -1,    79,    -1,    -1,    82,    -1,    -1,    85,    86,    87,
      23,    24,    25,    26,    92,    93,    94,    95,    96,    97,
      98,    -1,    -1,    -1,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    74,    -1,    76,    -1,    -1,    79,    80,    -1,    82,
      -1,    -1,    85,    86,    87,    23,    24,    25,    26,    92,
      93,    94,    95,    96,    97,    98,    34,    -1,    -1,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    74,    -1,    76,    -1,
      -1,    79,    -1,    -1,    82,    -1,    -1,    85,    86,    87,
      23,    24,    25,    26,    92,    93,    94,    95,    96,    97,
      98,    -1,    -1,    -1,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    74,    -1,    76,    77,    -1,    79,    -1,    -1,    82,
      -1,    -1,    85,    86,    87,    23,    24,    25,    26,    92,
      93,    94,    95,    96,    97,    98,    34,    -1,    -1,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    74,    -1,    76,    -1,
      -1,    79,    -1,    -1,    82,    -1,    -1,    85,    86,    87,
      23,    24,    25,    26,    92,    93,    94,    95,    96,    97,
      98,    -1,    -1,    -1,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    74,    75,    76,    -1,    -1,    79,    -1,    -1,    82,
      -1,    -1,    85,    86,    87,    23,    24,    25,    26,    92,
      93,    94,    95,    96,    97,    98,    -1,    -1,    -1,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    74,    -1,    76,    -1,
      -1,    79,    -1,    81,    82,    -1,    -1,    85,    86,    87,
      23,    24,    25,    26,    92,    93,    94,    95,    96,    97,
      98,    -1,    -1,    -1,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    74,    -1,    76,    -1,    -1,    79,    -1,    81,    82,
      -1,    -1,    85,    86,    87,    23,    24,    25,    26,    92,
      93,    94,    95,    96,    97,    98,    -1,    -1,    -1,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    74,    -1,    76,    -1,
      -1,    79,    -1,    -1,    82,    -1,    -1,    85,    86,    87,
      23,    24,    25,    26,    92,    93,    94,    95,    96,    97,
      98,    -1,    -1,    -1,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    74,    -1,    76,    -1,    -1,    79,    -1,    -1,    82,
      -1,    -1,    85,    86,    87,    23,    24,    -1,    26,    92,
      93,    94,    95,    96,    97,    98,    -1,    -1,    -1,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    74,    -1,    76,    -1,
      -1,    79,    -1,    -1,    82,    -1,    -1,    85,    86,    87,
      23,    24,    -1,    26,    92,    93,    94,    95,    96,    97,
      98,    -1,    -1,    -1,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    74,    -1,    76,    -1,    -1,    79,    -1,    -1,    82,
      -1,    -1,    85,    86,    87,    -1,    -1,    -1,    -1,    92,
      93,    94,    95,    96,    97,    98
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     8,     9,    10,    11,    12,    13,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    66,    69,    74,    76,    79,    82,
      85,    86,    87,    92,    93,    94,    95,    96,    97,    98,
     100,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   119,   123,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   146,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   165,   166,   167,   168,
     169,   171,   173,   174,   175,   176,   177,   178,   179,   180,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   198,
     200,   201,   203,   204,   205,   207,   209,   210,   211,   212,
     214,   215,   216,   217,   218,   228,   231,   232,    74,    76,
     102,   131,   132,   133,   163,   102,   230,   102,   227,   130,
     178,   179,   178,    83,   102,   191,   192,   193,   194,   102,
     163,   191,    26,    65,    66,    74,    81,   102,   221,   222,
     223,   225,    23,   168,   163,   171,    81,   163,   163,   171,
      58,   163,   159,   153,    75,   129,   163,   171,   178,    77,
     113,   163,   171,   178,    80,   124,   125,   163,   171,   153,
     153,   153,   102,   219,    72,    73,    74,    76,    83,    65,
      67,    68,    88,    85,    86,    58,    59,    89,    90,    91,
      26,   162,   159,    78,   172,    21,    27,     6,    99,   206,
     129,   171,   178,    78,    84,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,   181,   203,
      69,    12,   218,    69,     0,    78,    74,    81,   229,    74,
      23,   191,    22,    83,    22,    83,    83,    78,   199,    81,
       7,    78,   195,   102,   102,   224,   225,   163,    81,    78,
      65,    66,   222,    84,    78,    69,   202,   205,    81,     7,
      81,   163,    78,   172,    23,    75,    18,   120,    75,    75,
      77,    18,   114,    77,    77,    80,    78,   126,    81,    82,
      83,   220,    69,    74,    65,    66,    75,   102,   147,   148,
     149,   150,   163,    46,    81,   136,   137,   139,   140,   141,
     142,   145,   163,   171,   102,   153,   153,   153,   153,   154,
     154,   155,   155,   156,   157,   158,    23,   159,   163,    78,
     166,   167,   168,   173,    99,    84,   179,   129,   171,   227,
     163,    75,   171,   202,    81,    75,   221,   171,    65,   191,
      74,   102,   191,   102,    78,   202,   102,   197,   191,    78,
      78,    75,    78,   226,   163,   102,   102,    78,   163,   163,
      70,    16,    17,   213,    69,   202,   179,   163,    78,   172,
      78,   163,   178,    75,   178,   125,    78,   163,   102,    83,
      75,   147,   163,   163,   153,   163,    84,    75,    78,    78,
      78,    78,   151,   120,   172,   143,   163,    77,    78,   138,
      77,    81,    81,    77,   163,    15,   173,    74,    75,   202,
      81,    75,    81,   102,     7,    78,   196,   102,    14,    15,
     208,   195,     7,   191,    66,   225,    78,    78,    78,   204,
      81,   163,    81,    15,    16,    17,    15,    81,    78,    78,
      23,    23,   125,   102,    69,    75,    78,    78,   163,    75,
      65,    66,   102,   149,    65,    66,   150,    78,    75,    78,
     137,   140,   163,    78,   144,   163,   143,   163,    75,   221,
     202,    81,   202,     7,    75,    78,   196,   197,   102,    78,
     163,    81,    14,    15,   197,     7,   102,   225,    66,   163,
      71,   202,    78,    81,   202,    81,    81,   163,    81,    81,
     163,   163,   166,    25,   115,   164,   166,   170,    69,    75,
      66,   163,   163,    78,   163,   163,   150,   137,    81,    75,
     202,    15,   197,    75,    75,    78,   196,     7,   102,    81,
     202,   163,    81,   197,   102,   179,   202,   202,   202,    78,
      81,   202,   202,    21,   120,   121,   122,    81,   221,    21,
     114,   117,   118,    78,   116,    69,   163,    78,    65,    66,
      78,   202,    81,    81,    75,    78,   196,    75,   197,     7,
     202,    81,   202,    81,    17,   179,   202,   164,   164,    81,
     164,   164,    78,    66,   163,   163,    66,   202,   202,    75,
      75,    78,   197,   202,   202,    81,    81,   121,   163,   117,
     164,   163,    78,   163,    75,   202,   202,    66,   163
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
#line 2592 "y.tab.c"
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
#line 701 "D:\\Testing\\Repos\\PythonGrammar\\PythonGrammar\\python_syntax.y"

