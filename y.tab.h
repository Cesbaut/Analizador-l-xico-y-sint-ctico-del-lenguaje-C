/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
     FOR = 258,
     IF = 259,
     ELSE = 260,
     WHILE = 261,
     DO = 262,
     SWITCH = 263,
     CASE = 264,
     BREAK = 265,
     DEFAULT = 266,
     PRINTF = 267,
     MAS = 268,
     MENOS = 269,
     MULTIPLICACION = 270,
     DIVISION = 271,
     MODULO = 272,
     IGUAL = 273,
     MASIGUAL = 274,
     MENOSIGUAL = 275,
     MULTIPLICACIONIGUAL = 276,
     DIVISIONIGUAL = 277,
     MODULOIGUAL = 278,
     DECREMENTO = 279,
     INCREMENTO = 280,
     IGUALIGUAL = 281,
     DIFERENTE = 282,
     MAYOR = 283,
     MENOR = 284,
     MAYORIGUAL = 285,
     MENORIGUAL = 286,
     AND = 287,
     OR = 288,
     NOT = 289,
     INT = 290,
     FLOAT = 291,
     CHAR = 292,
     DOUBLE = 293,
     VOID = 294,
     SHORT = 295,
     LONG = 296,
     SIGNED = 297,
     UNSIGNED = 298,
     PUNTOCOMA = 299,
     COMA = 300,
     PUNTO = 301,
     DOSPUNTOS = 302,
     LLAVEABRIR = 303,
     LLAVECERRAR = 304,
     CORCHETEABRIR = 305,
     CORCHETECERRAR = 306,
     PARENTESISABRIR = 307,
     PARENTESISCERRAR = 308,
     COMILLAS = 309,
     COMILLASIMPLE = 310,
     NUMEROS = 311,
     VARIABLES = 312,
     CADENA = 313
   };
#endif
/* Tokens.  */
#define FOR 258
#define IF 259
#define ELSE 260
#define WHILE 261
#define DO 262
#define SWITCH 263
#define CASE 264
#define BREAK 265
#define DEFAULT 266
#define PRINTF 267
#define MAS 268
#define MENOS 269
#define MULTIPLICACION 270
#define DIVISION 271
#define MODULO 272
#define IGUAL 273
#define MASIGUAL 274
#define MENOSIGUAL 275
#define MULTIPLICACIONIGUAL 276
#define DIVISIONIGUAL 277
#define MODULOIGUAL 278
#define DECREMENTO 279
#define INCREMENTO 280
#define IGUALIGUAL 281
#define DIFERENTE 282
#define MAYOR 283
#define MENOR 284
#define MAYORIGUAL 285
#define MENORIGUAL 286
#define AND 287
#define OR 288
#define NOT 289
#define INT 290
#define FLOAT 291
#define CHAR 292
#define DOUBLE 293
#define VOID 294
#define SHORT 295
#define LONG 296
#define SIGNED 297
#define UNSIGNED 298
#define PUNTOCOMA 299
#define COMA 300
#define PUNTO 301
#define DOSPUNTOS 302
#define LLAVEABRIR 303
#define LLAVECERRAR 304
#define CORCHETEABRIR 305
#define CORCHETECERRAR 306
#define PARENTESISABRIR 307
#define PARENTESISCERRAR 308
#define COMILLAS 309
#define COMILLASIMPLE 310
#define NUMEROS 311
#define VARIABLES 312
#define CADENA 313




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

