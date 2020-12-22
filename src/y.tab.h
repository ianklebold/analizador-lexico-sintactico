
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

/* Line 1676 of yacc.c  */
#line 18 "parser.y"





/* Line 1676 of yacc.c  */
#line 224 "y.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


