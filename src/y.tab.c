
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
#line 1 "parser.y"

	#include <stdio.h>
	#include <stdlib.h>
	#include<time.h>
	#include <string.h>
  	extern int yylex(void);
  	extern char *yytext;
 	extern int linea;
 	extern FILE *yyin;
	extern int yylineno; 
  	void yyerror(char *s);
	#define YYDEBUG 1
	#include "y.tab.h"
 


/* Line 189 of yacc.c  */
#line 90 "y.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
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
     DOCTYPE = 258,
     HTML = 259,
     A_HEAD = 260,
     META_CHARSET = 261,
     METAS = 262,
     C_HEAD = 263,
     A_TITLE = 264,
     ENTRADA = 265,
     C_TITLE = 266,
     ID = 267,
     CLASS = 268,
     LC = 269,
     C_HTML = 270,
     A_BODY = 271,
     C_BODY = 272,
     A_SECCION = 273,
     A_DIV = 274,
     C_SECCION = 275,
     C_DIV = 276,
     H1 = 277,
     H2 = 278,
     H3 = 279,
     H4 = 280,
     H5 = 281,
     H6 = 282,
     C_H1 = 283,
     C_H2 = 284,
     C_H3 = 285,
     C_H4 = 286,
     C_H5 = 287,
     C_H6 = 288,
     A_P = 289,
     C_P = 290,
     A_EM = 291,
     C_EM = 292,
     A_STRONG = 293,
     C_STRONG = 294,
     A_MARK = 295,
     C_MARK = 296,
     A_BR = 297,
     C_BR = 298,
     A_HR = 299,
     C_HR = 300,
     A_UL = 301,
     C_UL = 302,
     A_LI = 303,
     C_LI = 304,
     A_OL = 305,
     C_OL = 306,
     VALUE = 307,
     TYPE = 308,
     A_TABLA = 309,
     C_TABLA = 310,
     BORDER = 311,
     RULES = 312,
     A_CAPTION = 313,
     C_CAPTION = 314,
     A_TBH = 315,
     A_TBB = 316,
     A_TBF = 317,
     C_TBH = 318,
     C_TBB = 319,
     C_TBF = 320,
     A_TR = 321,
     C_TR = 322,
     A_TH = 323,
     C_TH = 324,
     A_TD = 325,
     C_TD = 326,
     ENLACE = 327,
     BLANK = 328,
     PARENT = 329,
     SELF = 330,
     C_A = 331,
     A_A = 332,
     TOP = 333,
     A_IMG = 334,
     SRC = 335,
     ALT = 336,
     WIDTH = 337,
     HEIGHT = 338
   };
#endif
/* Tokens.  */
#define DOCTYPE 258
#define HTML 259
#define A_HEAD 260
#define META_CHARSET 261
#define METAS 262
#define C_HEAD 263
#define A_TITLE 264
#define ENTRADA 265
#define C_TITLE 266
#define ID 267
#define CLASS 268
#define LC 269
#define C_HTML 270
#define A_BODY 271
#define C_BODY 272
#define A_SECCION 273
#define A_DIV 274
#define C_SECCION 275
#define C_DIV 276
#define H1 277
#define H2 278
#define H3 279
#define H4 280
#define H5 281
#define H6 282
#define C_H1 283
#define C_H2 284
#define C_H3 285
#define C_H4 286
#define C_H5 287
#define C_H6 288
#define A_P 289
#define C_P 290
#define A_EM 291
#define C_EM 292
#define A_STRONG 293
#define C_STRONG 294
#define A_MARK 295
#define C_MARK 296
#define A_BR 297
#define C_BR 298
#define A_HR 299
#define C_HR 300
#define A_UL 301
#define C_UL 302
#define A_LI 303
#define C_LI 304
#define A_OL 305
#define C_OL 306
#define VALUE 307
#define TYPE 308
#define A_TABLA 309
#define C_TABLA 310
#define BORDER 311
#define RULES 312
#define A_CAPTION 313
#define C_CAPTION 314
#define A_TBH 315
#define A_TBB 316
#define A_TBF 317
#define C_TBH 318
#define C_TBB 319
#define C_TBF 320
#define A_TR 321
#define C_TR 322
#define A_TH 323
#define C_TH 324
#define A_TD 325
#define C_TD 326
#define ENLACE 327
#define BLANK 328
#define PARENT 329
#define SELF 330
#define C_A 331
#define A_A 332
#define TOP 333
#define A_IMG 334
#define SRC 335
#define ALT 336
#define WIDTH 337
#define HEIGHT 338




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 18 "parser.y"





/* Line 214 of yacc.c  */
#line 298 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 310 "y.tab.c"

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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1312

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  84
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  38
/* YYNRULES -- Number of rules.  */
#define YYNRULES  217
/* YYNRULES -- Number of states.  */
#define YYNSTATES  382

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   338

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     9,    12,    15,    18,    20,    26,    30,
      32,    34,    36,    38,    40,    46,    51,    57,    62,    64,
      66,    68,    70,    72,    74,    76,    78,    80,    82,    84,
      86,    88,    90,    94,    99,   104,   109,   114,   119,   124,
     129,   134,   138,   142,   146,   150,   153,   157,   161,   165,
     169,   173,   177,   180,   183,   186,   189,   192,   195,   197,
     199,   201,   206,   212,   217,   221,   226,   232,   237,   242,
     247,   252,   256,   260,   263,   266,   270,   274,   276,   281,
     287,   289,   293,   297,   300,   303,   309,   311,   313,   317,
     321,   325,   329,   333,   336,   339,   342,   345,   349,   353,
     357,   360,   365,   370,   374,   378,   381,   383,   390,   396,
     403,   409,   414,   420,   425,   431,   438,   444,   451,   457,
     462,   468,   473,   479,   486,   492,   499,   505,   510,   516,
     521,   527,   529,   532,   535,   539,   541,   544,   547,   551,
     553,   555,   558,   561,   564,   567,   571,   575,   577,   584,
     590,   597,   603,   608,   614,   619,   625,   632,   638,   645,
     651,   656,   662,   667,   673,   680,   686,   693,   699,   704,
     710,   715,   721,   728,   734,   741,   747,   752,   758,   763,
     769,   773,   778,   782,   787,   794,   799,   805,   812,   817,
     823,   830,   835,   841,   848,   853,   859,   866,   871,   877,
     884,   889,   895,   897,   899,   901,   903,   906,   909,   912,
     915,   918,   921,   925,   929,   933,   937,   941
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      85,     0,    -1,     3,     4,    86,    89,    15,    -1,     5,
      87,    -1,     7,    88,    -1,     6,    88,    -1,     8,    -1,
       9,   113,    10,    11,    88,    -1,    16,   113,    90,    -1,
      91,    -1,    92,    -1,    93,    -1,    10,    -1,    17,    -1,
      18,   113,    93,    20,    90,    -1,    18,   113,    93,    20,
      -1,    19,   113,    93,    21,    90,    -1,    19,   113,    93,
      21,    -1,   120,    -1,   114,    -1,   115,    -1,   116,    -1,
     117,    -1,   118,    -1,   119,    -1,   109,    -1,   100,    -1,
      98,    -1,    95,    -1,    94,    -1,    91,    -1,    92,    -1,
      79,    96,    90,    -1,    79,    96,    10,    90,    -1,   112,
      80,    97,    14,    -1,   112,    97,    80,    14,    -1,    80,
      97,   112,    14,    -1,    80,   112,    97,    14,    -1,    97,
      80,   112,    14,    -1,    97,    80,    97,    14,    -1,    97,
     112,    80,    14,    -1,    80,    97,    14,    -1,    97,    80,
      14,    -1,    80,   112,    14,    -1,   112,    80,    14,    -1,
      80,    14,    -1,    81,    82,    83,    -1,    81,    83,    82,
      -1,    82,    81,    83,    -1,    82,    83,    81,    -1,    83,
      81,    82,    -1,    83,    82,    81,    -1,    81,    82,    -1,
      82,    81,    -1,    81,    83,    -1,    83,    81,    -1,    83,
      82,    -1,    82,    83,    -1,    81,    -1,    83,    -1,    82,
      -1,    77,    99,    76,    90,    -1,    77,    99,    10,    76,
      90,    -1,    77,    99,    10,    76,    -1,    77,    99,    76,
      -1,    77,    99,    93,    76,    -1,    77,    99,    93,    76,
      90,    -1,   112,    72,   121,    14,    -1,    72,   112,   121,
      14,    -1,   121,    72,   112,    14,    -1,    72,   121,   112,
      14,    -1,    72,   121,    14,    -1,   121,    72,    14,    -1,
      72,    14,    -1,   121,    14,    -1,   112,    72,    14,    -1,
      72,   112,    14,    -1,    14,    -1,    54,   101,   102,    55,
      -1,    54,   101,   102,    55,    90,    -1,    14,    -1,    56,
      57,    14,    -1,    57,    56,    14,    -1,    57,    14,    -1,
      56,    14,    -1,    58,   113,    10,    59,   103,    -1,   103,
      -1,   107,    -1,   104,   105,   106,    -1,   105,   104,   106,
      -1,   105,   106,   104,    -1,   104,   106,   105,    -1,   106,
     104,   105,    -1,   104,   105,    -1,   104,   106,    -1,   105,
     104,    -1,   106,   104,    -1,    60,   107,    63,    -1,    61,
     107,    64,    -1,    62,   107,    65,    -1,    66,   108,    -1,
      68,    10,    69,   108,    -1,    70,    10,    71,   108,    -1,
      68,    69,   108,    -1,    70,    71,   108,    -1,    67,   107,
      -1,    67,    -1,    46,   113,    10,    93,    47,    90,    -1,
      46,   113,    10,    93,    47,    -1,    46,   113,    93,    10,
      47,    90,    -1,    46,   113,    93,    10,    47,    -1,    46,
     113,    10,    47,    -1,    46,   113,    10,    47,    90,    -1,
      46,   113,    93,    47,    -1,    46,   113,    93,    47,    90,
      -1,    48,   110,    10,    93,    49,    90,    -1,    48,   110,
      10,    93,    49,    -1,    48,   110,    93,    10,    49,    90,
      -1,    48,   110,    93,    10,    49,    -1,    48,   110,    10,
      49,    -1,    48,   110,    10,    49,    90,    -1,    48,   110,
      93,    49,    -1,    48,   110,    93,    49,    90,    -1,    50,
     111,    10,    93,    51,    90,    -1,    50,   111,    10,    93,
      51,    -1,    50,   111,    93,    10,    51,    90,    -1,    50,
     111,    93,    10,    51,    -1,    50,   111,    10,    51,    -1,
      50,   111,    10,    51,    90,    -1,    50,   111,    93,    51,
      -1,    50,   111,    93,    51,    90,    -1,    14,    -1,   112,
      14,    -1,    52,    14,    -1,   112,    52,    14,    -1,    14,
      -1,   112,    14,    -1,    53,    14,    -1,   112,    53,    14,
      -1,    12,    -1,    13,    -1,    12,    13,    -1,    13,    12,
      -1,    12,    14,    -1,    13,    14,    -1,    12,    13,    14,
      -1,    13,    12,    14,    -1,    14,    -1,    34,   113,    10,
      93,    35,    90,    -1,    34,   113,    10,    93,    35,    -1,
      34,   113,    93,    10,    35,    90,    -1,    34,   113,    93,
      10,    35,    -1,    34,   113,    10,    35,    -1,    34,   113,
      10,    35,    90,    -1,    34,   113,    93,    35,    -1,    34,
     113,    93,    35,    90,    -1,    36,   113,    10,    93,    37,
      90,    -1,    36,   113,    10,    93,    37,    -1,    36,   113,
      93,    10,    37,    90,    -1,    36,   113,    93,    10,    37,
      -1,    36,   113,    10,    37,    -1,    36,   113,    10,    37,
      90,    -1,    36,   113,    93,    37,    -1,    36,   113,    93,
      37,    90,    -1,    38,   113,    10,    93,    39,    90,    -1,
      38,   113,    10,    93,    39,    -1,    38,   113,    93,    10,
      39,    90,    -1,    38,   113,    93,    10,    39,    -1,    38,
     113,    10,    39,    -1,    38,   113,    10,    39,    90,    -1,
      38,   113,    93,    39,    -1,    38,   113,    93,    39,    90,
      -1,    40,   113,    10,    93,    41,    90,    -1,    40,   113,
      10,    93,    41,    -1,    40,   113,    93,    10,    41,    90,
      -1,    40,   113,    93,    10,    41,    -1,    40,   113,    10,
      41,    -1,    40,   113,    10,    41,    90,    -1,    40,   113,
      93,    41,    -1,    40,   113,    93,    41,    90,    -1,    42,
     113,    90,    -1,    42,   113,    90,    17,    -1,    44,   113,
      90,    -1,    44,   113,    90,    17,    -1,    22,   113,    10,
      28,    10,    90,    -1,    22,   113,    10,    28,    -1,    22,
     113,    10,    28,    90,    -1,    23,   113,    10,    29,    10,
      90,    -1,    23,   113,    10,    29,    -1,    23,   113,    10,
      29,    90,    -1,    24,   113,    10,    30,    10,    90,    -1,
      24,   113,    10,    30,    -1,    24,   113,    10,    30,    90,
      -1,    25,   113,    10,    31,    10,    90,    -1,    25,   113,
      10,    31,    -1,    25,   113,    10,    31,    90,    -1,    26,
     113,    10,    32,    10,    90,    -1,    26,   113,    10,    32,
      -1,    26,   113,    10,    32,    90,    -1,    27,   113,    10,
      33,    10,    90,    -1,    27,   113,    10,    33,    -1,    27,
     113,    10,    33,    90,    -1,    73,    -1,    74,    -1,    75,
      -1,    78,    -1,    73,    74,    -1,    74,    73,    -1,    73,
      75,    -1,    75,    73,    -1,    75,    74,    -1,    74,    75,
      -1,    73,    74,    75,    -1,    73,    75,    74,    -1,    74,
      73,    75,    -1,    74,    75,    73,    -1,    75,    73,    74,
      -1,    75,    74,    73,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    33,    33,    35,    37,    39,    39,    39,    41,    43,
      43,    43,    43,    43,    45,    46,    47,    48,    49,    49,
      49,    49,    49,    49,    49,    49,    49,    49,    49,    49,
      50,    50,    52,    52,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    83,    84,    85,    85,    86,    87,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   101,   102,
     104,   104,   104,   104,   104,   106,   106,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   119,   120,   121,
     123,   125,   126,   127,   128,   129,   130,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   157,   157,   157,   157,   158,   158,   158,   158,   160,
     160,   160,   160,   161,   161,   161,   161,   161,   163,   164,
     165,   166,   167,   168,   169,   170,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     197,   197,   198,   198,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "DOCTYPE", "HTML", "A_HEAD",
  "META_CHARSET", "METAS", "C_HEAD", "A_TITLE", "ENTRADA", "C_TITLE", "ID",
  "CLASS", "LC", "C_HTML", "A_BODY", "C_BODY", "A_SECCION", "A_DIV",
  "C_SECCION", "C_DIV", "H1", "H2", "H3", "H4", "H5", "H6", "C_H1", "C_H2",
  "C_H3", "C_H4", "C_H5", "C_H6", "A_P", "C_P", "A_EM", "C_EM", "A_STRONG",
  "C_STRONG", "A_MARK", "C_MARK", "A_BR", "C_BR", "A_HR", "C_HR", "A_UL",
  "C_UL", "A_LI", "C_LI", "A_OL", "C_OL", "VALUE", "TYPE", "A_TABLA",
  "C_TABLA", "BORDER", "RULES", "A_CAPTION", "C_CAPTION", "A_TBH", "A_TBB",
  "A_TBF", "C_TBH", "C_TBB", "C_TBF", "A_TR", "C_TR", "A_TH", "C_TH",
  "A_TD", "C_TD", "ENLACE", "BLANK", "PARENT", "SELF", "C_A", "A_A", "TOP",
  "A_IMG", "SRC", "ALT", "WIDTH", "HEIGHT", "$accept", "sigma", "head",
  "cont_cabeza", "enc", "cuerpo", "otrocuerpo", "seccion", "division",
  "funciones", "selector", "img", "cont_img", "atrib_img", "a",
  "cont_enlace", "tabla", "opciones_t", "elementos_t", "parte_tab",
  "t_cabeza", "t_cuerpo", "t_pies", "tabla_i", "tablas", "lista",
  "atribli", "atriblo", "atribglb", "atrib", "parrafo", "em", "strong",
  "mark", "br", "hr", "encabezado", "atrib_enlace", 0
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
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    84,    85,    86,    87,    88,    88,    88,    89,    90,
      90,    90,    90,    90,    91,    91,    92,    92,    93,    93,
      93,    93,    93,    93,    93,    93,    93,    93,    93,    93,
      94,    94,    95,    95,    96,    96,    96,    96,    96,    96,
      96,    96,    96,    96,    96,    96,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    98,    98,    98,    98,    98,    98,    99,    99,    99,
      99,    99,    99,    99,    99,    99,    99,    99,   100,   100,
     101,   101,   101,   101,   101,   102,   102,   103,   103,   103,
     103,   103,   103,   103,   103,   103,   103,   104,   105,   106,
     107,   108,   108,   108,   108,   108,   108,   109,   109,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   109,   109,
     109,   110,   110,   110,   110,   111,   111,   111,   111,   112,
     112,   112,   112,   113,   113,   113,   113,   113,   114,   114,
     114,   114,   114,   114,   114,   114,   115,   115,   115,   115,
     115,   115,   115,   115,   116,   116,   116,   116,   116,   116,
     116,   116,   117,   117,   117,   117,   117,   117,   117,   117,
     118,   118,   119,   119,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   121,   121,   121,   121,   121,   121,   121,   121,
     121,   121,   121,   121,   121,   121,   121,   121
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     5,     2,     2,     2,     1,     5,     3,     1,
       1,     1,     1,     1,     5,     4,     5,     4,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     4,     4,     4,     4,     4,     4,     4,
       4,     3,     3,     3,     3,     2,     3,     3,     3,     3,
       3,     3,     2,     2,     2,     2,     2,     2,     1,     1,
       1,     4,     5,     4,     3,     4,     5,     4,     4,     4,
       4,     3,     3,     2,     2,     3,     3,     1,     4,     5,
       1,     3,     3,     2,     2,     5,     1,     1,     3,     3,
       3,     3,     3,     2,     2,     2,     2,     3,     3,     3,
       2,     4,     4,     3,     3,     2,     1,     6,     5,     6,
       5,     4,     5,     4,     5,     6,     5,     6,     5,     4,
       5,     4,     5,     6,     5,     6,     5,     4,     5,     4,
       5,     1,     2,     2,     3,     1,     2,     2,     3,     1,
       1,     2,     2,     2,     2,     3,     3,     1,     6,     5,
       6,     5,     4,     5,     4,     5,     6,     5,     6,     5,
       4,     5,     4,     5,     6,     5,     6,     5,     4,     5,
       4,     5,     6,     5,     6,     5,     4,     5,     4,     5,
       3,     4,     3,     4,     6,     4,     5,     6,     4,     5,
       6,     4,     5,     6,     4,     5,     6,     4,     5,     6,
       4,     5,     1,     1,     1,     1,     2,     2,     2,     2,
       2,     2,     3,     3,     3,     3,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,     0,     0,     3,     0,
       0,     0,     6,     0,     4,     0,     0,   147,     0,     2,
       5,     0,     0,   143,     0,   144,    12,    13,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     8,     9,
      10,    11,    29,    28,    27,    26,    25,    19,    20,    21,
      22,    23,    24,    18,     0,   145,   146,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   139,   140,   131,     0,     0,     0,   135,     0,
       0,     0,    80,     0,     0,     0,    77,     0,   202,   203,
     204,   205,     0,     0,     0,     0,    58,    60,    59,     0,
       0,     0,     0,    30,    31,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   180,   182,     0,     0,   141,   142,   133,     0,     0,
     132,     0,   137,     0,     0,   136,     0,    84,     0,    83,
       0,     0,     0,     0,     0,     0,     0,    86,     0,     0,
       0,    87,    73,     0,     0,   206,   208,   207,   211,   209,
     210,     0,    64,     0,     0,    74,     0,    45,     0,     0,
      52,    54,    53,    57,    55,    56,    12,    32,     0,     0,
       0,     0,     7,    15,    17,   185,   188,   191,   194,   197,
     200,   152,     0,     0,   154,   160,     0,     0,   162,   168,
       0,     0,   170,   176,     0,     0,   178,   181,   183,   111,
       0,     0,   113,   119,     0,     0,   121,   134,   127,     0,
       0,   129,   138,    81,    82,     0,     0,     0,     0,   106,
       0,     0,   100,    78,    93,    94,    95,     0,    96,    76,
       0,    71,     0,   212,   213,   214,   215,   216,   217,    63,
      61,    65,    75,     0,    72,     0,    41,     0,    43,     0,
      46,    47,    48,    49,    50,    51,    33,    42,     0,     0,
       0,    44,     0,     0,    14,    16,    12,   186,    12,   189,
      12,   192,    12,   195,    12,   198,    12,   201,   153,   149,
     151,   155,   161,   157,   159,   163,   169,   165,   167,   171,
     177,   173,   175,   179,   112,   108,   110,   114,   120,   116,
     118,   122,   128,   124,   126,   130,     0,    97,    98,    99,
     105,     0,     0,     0,     0,    79,    88,    91,    89,    90,
      92,    68,    70,    62,    66,    67,    69,    36,    37,    39,
      38,    40,    34,    35,   184,   187,   190,   193,   196,   199,
     148,   150,   156,   158,   164,   166,   172,   174,   107,   109,
     115,   117,   123,   125,     0,     0,   103,     0,   104,    85,
     101,   102
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     6,     8,    14,    10,    48,    49,    50,    51,
      52,    53,   109,   110,    54,   102,    55,    95,   156,   157,
     158,   159,   160,   161,   242,    56,    86,    90,    87,    18,
      57,    58,    59,    60,    61,    62,    63,   104
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -182
static const yytype_int16 yypact[] =
{
      21,    55,    78,   126,  -182,   104,   112,    45,  -182,    49,
     148,    45,  -182,    49,  -182,   132,   127,  -182,   327,  -182,
    -182,   125,   128,  -182,   167,  -182,  -182,  -182,    49,    49,
      49,    49,    49,    49,    49,    49,    49,    49,    49,    49,
      49,    49,    49,   171,    60,    11,   284,     6,  -182,  -182,
    -182,  -182,  -182,  -182,  -182,  -182,  -182,  -182,  -182,  -182,
    -182,  -182,  -182,  -182,   179,  -182,  -182,  1233,  1233,   193,
     198,   202,   209,   212,   217,   709,   751,   793,   835,   327,
     327,   877,   225,   231,  -182,   232,   919,    98,  -182,   234,
     961,    13,  -182,    14,     8,   227,  -182,   311,    81,   120,
      93,  -182,   369,   178,     7,    92,   115,   123,   149,   415,
      43,   106,    45,  -182,  -182,   219,   233,   224,   239,   240,
     230,   247,   238,   995,    42,  1029,    39,  1063,    36,  1097,
      19,   267,   275,  1131,   122,  -182,  -182,  -182,  1165,    48,
    -182,   280,  -182,  1199,   117,  -182,   285,  -182,   286,  -182,
     290,    49,   248,   248,   248,   -20,   250,  -182,   173,   156,
     252,  -182,  -182,    87,   246,   241,   244,   245,   249,   253,
     256,   243,   327,   257,   228,  -182,   263,  -182,   296,     1,
     258,   254,   259,   266,   273,   279,   327,  -182,    96,   255,
      76,   260,  -182,   327,   327,   457,   499,   541,   583,   625,
     667,   327,   304,   329,   327,   327,   331,   333,   327,   327,
     335,   337,   327,   327,   325,   339,   327,  -182,  -182,   327,
     336,   343,   327,   327,   323,   348,   327,  -182,   327,   347,
     349,   327,  -182,  -182,  -182,   368,   319,   338,   334,   248,
      16,    10,  -182,   327,   346,   340,   346,   252,   340,  -182,
     396,  -182,   398,  -182,  -182,  -182,  -182,  -182,  -182,   327,
    -182,   327,  -182,   400,  -182,   402,  -182,   404,  -182,   406,
    -182,  -182,  -182,  -182,  -182,  -182,  -182,  -182,   407,   408,
     410,  -182,   412,   413,  -182,  -182,   327,  -182,   327,  -182,
     327,  -182,   327,  -182,   327,  -182,   327,  -182,  -182,   327,
     327,  -182,  -182,   327,   327,  -182,  -182,   327,   327,  -182,
    -182,   327,   327,  -182,  -182,   327,   327,  -182,  -182,   327,
     327,  -182,  -182,   327,   327,  -182,   370,  -182,  -182,  -182,
    -182,   359,   -20,   360,   -20,  -182,  -182,  -182,  -182,  -182,
    -182,  -182,  -182,  -182,  -182,  -182,  -182,  -182,  -182,  -182,
    -182,  -182,  -182,  -182,  -182,  -182,  -182,  -182,  -182,  -182,
    -182,  -182,  -182,  -182,  -182,  -182,  -182,  -182,  -182,  -182,
    -182,  -182,  -182,  -182,   110,   -20,  -182,   -20,  -182,  -182,
    -182,  -182
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -182,  -182,  -182,  -182,    -9,  -182,   -79,   124,   188,   205,
    -182,  -182,  -182,   -88,  -182,  -182,  -182,  -182,  -182,    56,
    -149,  -153,  -150,  -140,  -181,  -182,  -182,  -182,   -40,     3,
    -182,  -182,  -182,  -182,  -182,  -182,  -182,   -94
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
     131,   132,    20,   164,    91,   244,   103,   111,   245,   247,
     246,   248,   236,   237,   238,   268,    21,   178,    82,    83,
     333,   175,   149,   191,     1,    92,   331,   145,   147,   215,
     187,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,   211,   239,   240,   207,
     241,    11,   203,    12,    13,    82,    83,   163,   225,     3,
     216,    15,    16,    17,   150,   179,   146,    93,    94,   250,
     189,   148,    82,    83,    88,   212,   208,   204,     4,   176,
     263,   334,   106,   107,   108,   332,   105,   106,   107,   108,
     281,   269,   337,   260,   336,   340,   338,   226,   339,   330,
     278,   249,   282,   192,    82,    83,   177,   276,    82,    83,
     277,     7,   140,    89,   284,   285,   287,   289,   291,   293,
     295,   297,   298,   188,   252,   301,   302,   230,     9,   305,
     306,     5,   221,   309,   310,    64,   265,   313,   267,    24,
     314,    25,    65,   317,   318,    22,    23,   321,   279,   322,
     141,   376,   325,   378,   235,   165,   166,   106,   107,   108,
      98,    99,   100,    19,   335,   101,   169,   170,   231,   222,
     152,   153,   154,   106,   107,   108,   155,   106,   107,   108,
     343,    66,   344,    82,    83,    84,   190,   106,   107,   108,
     112,   113,   113,   167,   380,   168,   381,   180,   181,   113,
     113,   113,   113,   117,   182,   113,   183,   354,   118,   355,
     113,   356,   119,   357,   113,   358,   152,   359,   154,   120,
     360,   361,   121,    85,   362,   363,   113,   122,   364,   365,
     184,   185,   366,   367,   153,   154,   368,   369,   135,   193,
     370,   371,   262,   136,   372,   373,   137,   113,   142,   113,
     174,   113,   195,   113,   194,   114,   114,   113,    82,    83,
     251,   198,   113,   114,   114,   114,   114,   113,   196,   114,
     197,   200,   115,   116,   114,    82,    83,   264,   114,   199,
     124,   126,   128,   130,   217,   151,   134,   152,   153,   154,
     114,   139,   218,   155,   227,   144,    82,    83,    96,   232,
     233,    98,    99,   100,   234,   243,   101,   173,    82,    83,
     266,   114,   152,   114,   155,   114,   253,   114,   254,   259,
     255,   114,   256,    82,    83,   162,   114,   257,   202,   258,
     206,   114,   210,   261,   214,   280,   271,    26,   220,   299,
     283,   270,   272,   224,    27,    28,    29,   273,   229,    30,
      31,    32,    33,    34,    35,   274,    97,    98,    99,   100,
     275,    36,   101,    37,   300,    38,   311,    39,   303,    40,
     304,    41,   319,    42,   307,    43,   308,    44,   326,   171,
     312,    45,   327,   315,    98,    99,   100,    28,    29,   101,
     316,    30,    31,    32,    33,    34,    35,   320,   323,   329,
     324,   153,   328,    36,    46,    37,    47,    38,   154,    39,
     341,    40,   342,    41,   345,    42,   346,    43,   347,    44,
     348,   349,   350,    45,   351,   186,   352,   353,   375,   374,
     379,   377,    27,    28,    29,     0,     0,    30,    31,    32,
      33,    34,    35,     0,     0,   172,    46,     0,    47,    36,
       0,    37,     0,    38,     0,    39,     0,    40,     0,    41,
       0,    42,     0,    43,     0,    44,     0,   286,     0,    45,
       0,     0,     0,     0,    27,    28,    29,     0,     0,    30,
      31,    32,    33,    34,    35,     0,     0,     0,     0,     0,
       0,    36,    46,    37,    47,    38,     0,    39,     0,    40,
       0,    41,     0,    42,     0,    43,     0,    44,     0,   288,
       0,    45,     0,     0,     0,     0,    27,    28,    29,     0,
       0,    30,    31,    32,    33,    34,    35,     0,     0,     0,
       0,     0,     0,    36,    46,    37,    47,    38,     0,    39,
       0,    40,     0,    41,     0,    42,     0,    43,     0,    44,
       0,   290,     0,    45,     0,     0,     0,     0,    27,    28,
      29,     0,     0,    30,    31,    32,    33,    34,    35,     0,
       0,     0,     0,     0,     0,    36,    46,    37,    47,    38,
       0,    39,     0,    40,     0,    41,     0,    42,     0,    43,
       0,    44,     0,   292,     0,    45,     0,     0,     0,     0,
      27,    28,    29,     0,     0,    30,    31,    32,    33,    34,
      35,     0,     0,     0,     0,     0,     0,    36,    46,    37,
      47,    38,     0,    39,     0,    40,     0,    41,     0,    42,
       0,    43,     0,    44,     0,   294,     0,    45,     0,     0,
       0,     0,    27,    28,    29,     0,     0,    30,    31,    32,
      33,    34,    35,     0,     0,     0,     0,     0,     0,    36,
      46,    37,    47,    38,     0,    39,     0,    40,     0,    41,
       0,    42,     0,    43,     0,    44,     0,   296,     0,    45,
       0,     0,     0,     0,    27,    28,    29,     0,     0,    30,
      31,    32,    33,    34,    35,     0,     0,     0,     0,     0,
       0,    36,    46,    37,    47,    38,     0,    39,     0,    40,
       0,    41,     0,    42,     0,    43,     0,    44,     0,   123,
       0,    45,     0,     0,     0,     0,     0,    28,    29,     0,
       0,    30,    31,    32,    33,    34,    35,     0,     0,     0,
       0,     0,     0,    36,    46,    37,    47,    38,     0,    39,
       0,    40,     0,    41,     0,    42,     0,    43,     0,    44,
       0,   125,     0,    45,     0,     0,     0,     0,     0,    28,
      29,     0,     0,    30,    31,    32,    33,    34,    35,     0,
       0,     0,     0,     0,     0,    36,    46,    37,    47,    38,
       0,    39,     0,    40,     0,    41,     0,    42,     0,    43,
       0,    44,     0,   127,     0,    45,     0,     0,     0,     0,
       0,    28,    29,     0,     0,    30,    31,    32,    33,    34,
      35,     0,     0,     0,     0,     0,     0,    36,    46,    37,
      47,    38,     0,    39,     0,    40,     0,    41,     0,    42,
       0,    43,     0,    44,     0,   129,     0,    45,     0,     0,
       0,     0,     0,    28,    29,     0,     0,    30,    31,    32,
      33,    34,    35,     0,     0,     0,     0,     0,     0,    36,
      46,    37,    47,    38,     0,    39,     0,    40,     0,    41,
       0,    42,     0,    43,     0,    44,     0,   133,     0,    45,
       0,     0,     0,     0,     0,    28,    29,     0,     0,    30,
      31,    32,    33,    34,    35,     0,     0,     0,     0,     0,
       0,    36,    46,    37,    47,    38,     0,    39,     0,    40,
       0,    41,     0,    42,     0,    43,     0,    44,     0,   138,
       0,    45,     0,     0,     0,     0,     0,    28,    29,     0,
       0,    30,    31,    32,    33,    34,    35,     0,     0,     0,
       0,     0,     0,    36,    46,    37,    47,    38,     0,    39,
       0,    40,     0,    41,     0,    42,     0,    43,     0,    44,
       0,   143,     0,    45,     0,     0,     0,     0,     0,    28,
      29,     0,     0,    30,    31,    32,    33,    34,    35,     0,
       0,     0,     0,     0,     0,    36,    46,    37,    47,    38,
       0,    39,     0,    40,     0,    41,     0,    42,     0,    43,
       0,    44,     0,    28,    29,    45,     0,    30,    31,    32,
      33,    34,    35,     0,     0,     0,     0,     0,     0,    36,
     201,    37,     0,    38,     0,    39,     0,    40,    46,    41,
      47,    42,     0,    43,     0,    44,     0,    28,    29,    45,
       0,    30,    31,    32,    33,    34,    35,     0,     0,     0,
       0,     0,     0,    36,     0,    37,   205,    38,     0,    39,
       0,    40,    46,    41,    47,    42,     0,    43,     0,    44,
       0,    28,    29,    45,     0,    30,    31,    32,    33,    34,
      35,     0,     0,     0,     0,     0,     0,    36,     0,    37,
       0,    38,   209,    39,     0,    40,    46,    41,    47,    42,
       0,    43,     0,    44,     0,    28,    29,    45,     0,    30,
      31,    32,    33,    34,    35,     0,     0,     0,     0,     0,
       0,    36,     0,    37,     0,    38,     0,    39,   213,    40,
      46,    41,    47,    42,     0,    43,     0,    44,     0,    28,
      29,    45,     0,    30,    31,    32,    33,    34,    35,     0,
       0,     0,     0,     0,     0,    36,     0,    37,     0,    38,
       0,    39,     0,    40,    46,    41,    47,    42,   219,    43,
       0,    44,     0,    28,    29,    45,     0,    30,    31,    32,
      33,    34,    35,     0,     0,     0,     0,     0,     0,    36,
       0,    37,     0,    38,     0,    39,     0,    40,    46,    41,
      47,    42,     0,    43,   223,    44,     0,    28,    29,    45,
       0,    30,    31,    32,    33,    34,    35,     0,     0,     0,
       0,     0,     0,    36,     0,    37,     0,    38,     0,    39,
       0,    40,    46,    41,    47,    42,     0,    43,     0,    44,
     228,    28,    29,    45,     0,    30,    31,    32,    33,    34,
      35,     0,     0,     0,     0,     0,     0,    36,     0,    37,
       0,    38,     0,    39,     0,    40,    46,    41,    47,    42,
       0,    43,     0,    44,     0,     0,     0,    45,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      46,     0,    47
};

static const yytype_int16 yycheck[] =
{
      79,    80,    11,    97,    44,   158,    46,    47,   158,   159,
     159,   160,   152,   153,   154,    14,    13,   105,    12,    13,
      10,    14,    14,   111,     3,    14,    10,    14,    14,    10,
     109,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    10,    67,    68,    10,
      70,     6,    10,     8,     9,    12,    13,    97,    10,     4,
      41,    12,    13,    14,    56,   105,    53,    56,    57,   163,
     110,    57,    12,    13,    14,    39,    37,    35,     0,    72,
     174,    71,    81,    82,    83,    69,    80,    81,    82,    83,
      14,   179,   245,   172,   244,   248,   246,    49,   247,   239,
     188,    14,   190,   112,    12,    13,    14,   186,    12,    13,
      14,     7,    14,    53,   193,   194,   195,   196,   197,   198,
     199,   200,   201,    80,   164,   204,   205,    10,    16,   208,
     209,     5,    10,   212,   213,    10,   176,   216,   178,    12,
     219,    14,    14,   222,   223,    13,    14,   226,   188,   228,
      52,   332,   231,   334,   151,    74,    75,    81,    82,    83,
      73,    74,    75,    15,   243,    78,    73,    74,    51,    47,
      60,    61,    62,    81,    82,    83,    66,    81,    82,    83,
     259,    14,   261,    12,    13,    14,    80,    81,    82,    83,
      11,    67,    68,    73,   375,    75,   377,    82,    83,    75,
      76,    77,    78,    10,    81,    81,    83,   286,    10,   288,
      86,   290,    10,   292,    90,   294,    60,   296,    62,    10,
     299,   300,    10,    52,   303,   304,   102,    10,   307,   308,
      81,    82,   311,   312,    61,    62,   315,   316,    13,    20,
     319,   320,    14,    12,   323,   324,    14,   123,    14,   125,
      72,   127,    28,   129,    21,    67,    68,   133,    12,    13,
      14,    31,   138,    75,    76,    77,    78,   143,    29,    81,
      30,    33,    67,    68,    86,    12,    13,    14,    90,    32,
      75,    76,    77,    78,    17,    58,    81,    60,    61,    62,
     102,    86,    17,    66,    14,    90,    12,    13,    14,    14,
      14,    73,    74,    75,    14,    55,    78,   102,    12,    13,
      14,   123,    60,   125,    66,   127,    75,   129,    74,    76,
      75,   133,    73,    12,    13,    14,   138,    74,   123,    73,
     125,   143,   127,    76,   129,    80,    82,    10,   133,    35,
      80,    83,    83,   138,    17,    18,    19,    81,   143,    22,
      23,    24,    25,    26,    27,    82,    72,    73,    74,    75,
      81,    34,    78,    36,    35,    38,    41,    40,    37,    42,
      37,    44,    49,    46,    39,    48,    39,    50,    10,    10,
      41,    54,    63,    47,    73,    74,    75,    18,    19,    78,
      47,    22,    23,    24,    25,    26,    27,    49,    51,    65,
      51,    61,    64,    34,    77,    36,    79,    38,    62,    40,
      14,    42,    14,    44,    14,    46,    14,    48,    14,    50,
      14,    14,    14,    54,    14,    10,    14,    14,    69,    59,
     374,    71,    17,    18,    19,    -1,    -1,    22,    23,    24,
      25,    26,    27,    -1,    -1,    76,    77,    -1,    79,    34,
      -1,    36,    -1,    38,    -1,    40,    -1,    42,    -1,    44,
      -1,    46,    -1,    48,    -1,    50,    -1,    10,    -1,    54,
      -1,    -1,    -1,    -1,    17,    18,    19,    -1,    -1,    22,
      23,    24,    25,    26,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    34,    77,    36,    79,    38,    -1,    40,    -1,    42,
      -1,    44,    -1,    46,    -1,    48,    -1,    50,    -1,    10,
      -1,    54,    -1,    -1,    -1,    -1,    17,    18,    19,    -1,
      -1,    22,    23,    24,    25,    26,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    34,    77,    36,    79,    38,    -1,    40,
      -1,    42,    -1,    44,    -1,    46,    -1,    48,    -1,    50,
      -1,    10,    -1,    54,    -1,    -1,    -1,    -1,    17,    18,
      19,    -1,    -1,    22,    23,    24,    25,    26,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    34,    77,    36,    79,    38,
      -1,    40,    -1,    42,    -1,    44,    -1,    46,    -1,    48,
      -1,    50,    -1,    10,    -1,    54,    -1,    -1,    -1,    -1,
      17,    18,    19,    -1,    -1,    22,    23,    24,    25,    26,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    34,    77,    36,
      79,    38,    -1,    40,    -1,    42,    -1,    44,    -1,    46,
      -1,    48,    -1,    50,    -1,    10,    -1,    54,    -1,    -1,
      -1,    -1,    17,    18,    19,    -1,    -1,    22,    23,    24,
      25,    26,    27,    -1,    -1,    -1,    -1,    -1,    -1,    34,
      77,    36,    79,    38,    -1,    40,    -1,    42,    -1,    44,
      -1,    46,    -1,    48,    -1,    50,    -1,    10,    -1,    54,
      -1,    -1,    -1,    -1,    17,    18,    19,    -1,    -1,    22,
      23,    24,    25,    26,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    34,    77,    36,    79,    38,    -1,    40,    -1,    42,
      -1,    44,    -1,    46,    -1,    48,    -1,    50,    -1,    10,
      -1,    54,    -1,    -1,    -1,    -1,    -1,    18,    19,    -1,
      -1,    22,    23,    24,    25,    26,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    34,    77,    36,    79,    38,    -1,    40,
      -1,    42,    -1,    44,    -1,    46,    -1,    48,    -1,    50,
      -1,    10,    -1,    54,    -1,    -1,    -1,    -1,    -1,    18,
      19,    -1,    -1,    22,    23,    24,    25,    26,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    34,    77,    36,    79,    38,
      -1,    40,    -1,    42,    -1,    44,    -1,    46,    -1,    48,
      -1,    50,    -1,    10,    -1,    54,    -1,    -1,    -1,    -1,
      -1,    18,    19,    -1,    -1,    22,    23,    24,    25,    26,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    34,    77,    36,
      79,    38,    -1,    40,    -1,    42,    -1,    44,    -1,    46,
      -1,    48,    -1,    50,    -1,    10,    -1,    54,    -1,    -1,
      -1,    -1,    -1,    18,    19,    -1,    -1,    22,    23,    24,
      25,    26,    27,    -1,    -1,    -1,    -1,    -1,    -1,    34,
      77,    36,    79,    38,    -1,    40,    -1,    42,    -1,    44,
      -1,    46,    -1,    48,    -1,    50,    -1,    10,    -1,    54,
      -1,    -1,    -1,    -1,    -1,    18,    19,    -1,    -1,    22,
      23,    24,    25,    26,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    34,    77,    36,    79,    38,    -1,    40,    -1,    42,
      -1,    44,    -1,    46,    -1,    48,    -1,    50,    -1,    10,
      -1,    54,    -1,    -1,    -1,    -1,    -1,    18,    19,    -1,
      -1,    22,    23,    24,    25,    26,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    34,    77,    36,    79,    38,    -1,    40,
      -1,    42,    -1,    44,    -1,    46,    -1,    48,    -1,    50,
      -1,    10,    -1,    54,    -1,    -1,    -1,    -1,    -1,    18,
      19,    -1,    -1,    22,    23,    24,    25,    26,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    34,    77,    36,    79,    38,
      -1,    40,    -1,    42,    -1,    44,    -1,    46,    -1,    48,
      -1,    50,    -1,    18,    19,    54,    -1,    22,    23,    24,
      25,    26,    27,    -1,    -1,    -1,    -1,    -1,    -1,    34,
      35,    36,    -1,    38,    -1,    40,    -1,    42,    77,    44,
      79,    46,    -1,    48,    -1,    50,    -1,    18,    19,    54,
      -1,    22,    23,    24,    25,    26,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    34,    -1,    36,    37,    38,    -1,    40,
      -1,    42,    77,    44,    79,    46,    -1,    48,    -1,    50,
      -1,    18,    19,    54,    -1,    22,    23,    24,    25,    26,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    36,
      -1,    38,    39,    40,    -1,    42,    77,    44,    79,    46,
      -1,    48,    -1,    50,    -1,    18,    19,    54,    -1,    22,
      23,    24,    25,    26,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    34,    -1,    36,    -1,    38,    -1,    40,    41,    42,
      77,    44,    79,    46,    -1,    48,    -1,    50,    -1,    18,
      19,    54,    -1,    22,    23,    24,    25,    26,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    34,    -1,    36,    -1,    38,
      -1,    40,    -1,    42,    77,    44,    79,    46,    47,    48,
      -1,    50,    -1,    18,    19,    54,    -1,    22,    23,    24,
      25,    26,    27,    -1,    -1,    -1,    -1,    -1,    -1,    34,
      -1,    36,    -1,    38,    -1,    40,    -1,    42,    77,    44,
      79,    46,    -1,    48,    49,    50,    -1,    18,    19,    54,
      -1,    22,    23,    24,    25,    26,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    34,    -1,    36,    -1,    38,    -1,    40,
      -1,    42,    77,    44,    79,    46,    -1,    48,    -1,    50,
      51,    18,    19,    54,    -1,    22,    23,    24,    25,    26,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    36,
      -1,    38,    -1,    40,    -1,    42,    77,    44,    79,    46,
      -1,    48,    -1,    50,    -1,    -1,    -1,    54,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      77,    -1,    79
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    85,     4,     0,     5,    86,     7,    87,    16,
      89,     6,     8,     9,    88,    12,    13,    14,   113,    15,
      88,   113,    13,    14,    12,    14,    10,    17,    18,    19,
      22,    23,    24,    25,    26,    27,    34,    36,    38,    40,
      42,    44,    46,    48,    50,    54,    77,    79,    90,    91,
      92,    93,    94,    95,    98,   100,   109,   114,   115,   116,
     117,   118,   119,   120,    10,    14,    14,   113,   113,   113,
     113,   113,   113,   113,   113,   113,   113,   113,   113,   113,
     113,   113,    12,    13,    14,    52,   110,   112,    14,    53,
     111,   112,    14,    56,    57,   101,    14,    72,    73,    74,
      75,    78,    99,   112,   121,    80,    81,    82,    83,    96,
      97,   112,    11,    91,    92,    93,    93,    10,    10,    10,
      10,    10,    10,    10,    93,    10,    93,    10,    93,    10,
      93,    90,    90,    10,    93,    13,    12,    14,    10,    93,
      14,    52,    14,    10,    93,    14,    53,    14,    57,    14,
      56,    58,    60,    61,    62,    66,   102,   103,   104,   105,
     106,   107,    14,   112,   121,    74,    75,    73,    75,    73,
      74,    10,    76,    93,    72,    14,    72,    14,    97,   112,
      82,    83,    81,    83,    81,    82,    10,    90,    80,   112,
      80,    97,    88,    20,    21,    28,    29,    30,    31,    32,
      33,    35,    93,    10,    35,    37,    93,    10,    37,    39,
      93,    10,    39,    41,    93,    10,    41,    17,    17,    47,
      93,    10,    47,    49,    93,    10,    49,    14,    51,    93,
      10,    51,    14,    14,    14,   113,   107,   107,   107,    67,
      68,    70,   108,    55,   105,   106,   104,   106,   104,    14,
     121,    14,   112,    75,    74,    75,    73,    74,    73,    76,
      90,    76,    14,   121,    14,   112,    14,   112,    14,    97,
      83,    82,    83,    81,    82,    81,    90,    14,    97,   112,
      80,    14,    97,    80,    90,    90,    10,    90,    10,    90,
      10,    90,    10,    90,    10,    90,    10,    90,    90,    35,
      35,    90,    90,    37,    37,    90,    90,    39,    39,    90,
      90,    41,    41,    90,    90,    47,    47,    90,    90,    49,
      49,    90,    90,    51,    51,    90,    10,    63,    64,    65,
     107,    10,    69,    10,    71,    90,   106,   105,   106,   104,
     105,    14,    14,    90,    90,    14,    14,    14,    14,    14,
      14,    14,    14,    14,    90,    90,    90,    90,    90,    90,
      90,    90,    90,    90,    90,    90,    90,    90,    90,    90,
      90,    90,    90,    90,    59,    69,   108,    71,   108,   103,
     108,   108
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
#line 2078 "y.tab.c"
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
#line 238 "parser.y"

yyerror(char *msg)
{
}

int main(int argc, char *argv[])
{
	if (argc==2)
	{
		yyin=fopen(argv[1],"rt");
		if(yyin==NULL)
		printf("\nNo se puede leer el archivo");
		if( yyparse() == 0)
		{
			int valor;
			char salidas_serror[6][50]={"Todo bien por aqui :D ","Esto esta bien escrito :D  ","Excelente  ","Sin errores, muy bien ","Nada mal por aca  ","Un codigo excelente  "};
			srand(time(NULL));
			valor= rand() % 6 ;
			printf(salidas_serror[valor],"\n");
		}
		else
		{
			int valor;
			char salidas_error[6][50]={"Algo no va bien en esta linea : ","Uy hicimos macana en la linea : ","Se encontro un error : ","Hay algo que corregir en la linea : ","Error en linea : ","Tenes que corregir en : "};
			srand(time(NULL));
			valor= rand() % 6 ;
			printf(salidas_error[valor]," : \n");
			printf("%d\n",yylineno);
			fclose(yyin); 
			return 0; 
		}
		fclose(yyin);
		getchar();
	} else 
	
		{	
			yyin=stdin;
		
			
			if(yyparse() == 0)
			{
				int valor;
				char salidas_serror[6][50]={"Todo bien por aqui :D ","Esto esta bien escrito :D  ","Excelente  ","Sin errores, muy bien ","Nada mal por aca  ","Un codigo excelente  "};
				srand(time(NULL));
				valor= rand() % 6 ;
				printf(salidas_serror[valor],"\n");
			}
			else 
			{
				int valor;
				char salidas_error[6][50]={"Algo no va bien en esta linea : ","Uy hicimos macana en la linea : ","Se encontro un error : ","Hay algo que corregir en la linea : ","Error en linea : ","Tenes que corregir en : "};
				srand(time(NULL));
				valor= rand() % 6 ;
				printf(salidas_error[valor],": \n");
				printf("%i\n",yylineno); 
			}
			fclose(yyin);
	}
}
