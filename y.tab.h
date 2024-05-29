#ifndef YY_parse_h_included
#define YY_parse_h_included
/*#define YY_USE_CLASS 
*/
#line 1 "/usr/share/bison++/bison.h"
/* before anything */
#ifdef c_plusplus
 #ifndef __cplusplus
  #define __cplusplus
 #endif
#endif


 #line 8 "/usr/share/bison++/bison.h"

#line 21 "/usr/share/bison++/bison.h"
 /* %{ and %header{ and %union, during decl */
#ifndef YY_parse_COMPATIBILITY
 #ifndef YY_USE_CLASS
  #define  YY_parse_COMPATIBILITY 1
 #else
  #define  YY_parse_COMPATIBILITY 0
 #endif
#endif

#if YY_parse_COMPATIBILITY != 0
/* backward compatibility */
 #ifdef YYLTYPE
  #ifndef YY_parse_LTYPE
   #define YY_parse_LTYPE YYLTYPE
/* WARNING obsolete !!! user defined YYLTYPE not reported into generated header */
/* use %define LTYPE */
  #endif
 #endif
/*#ifdef YYSTYPE*/
  #ifndef YY_parse_STYPE
   #define YY_parse_STYPE YYSTYPE
  /* WARNING obsolete !!! user defined YYSTYPE not reported into generated header */
   /* use %define STYPE */
  #endif
/*#endif*/
 #ifdef YYDEBUG
  #ifndef YY_parse_DEBUG
   #define  YY_parse_DEBUG YYDEBUG
   /* WARNING obsolete !!! user defined YYDEBUG not reported into generated header */
   /* use %define DEBUG */
  #endif
 #endif 
 /* use goto to be compatible */
 #ifndef YY_parse_USE_GOTO
  #define YY_parse_USE_GOTO 1
 #endif
#endif

/* use no goto to be clean in C++ */
#ifndef YY_parse_USE_GOTO
 #define YY_parse_USE_GOTO 0
#endif

#ifndef YY_parse_PURE

 #line 65 "/usr/share/bison++/bison.h"

#line 65 "/usr/share/bison++/bison.h"
/* YY_parse_PURE */
#endif


 #line 68 "/usr/share/bison++/bison.h"
#ifndef YY_USE_CLASS
# ifndef YYSTYPE
#  define YYSTYPE int
#  define YYSTYPE_IS_TRIVIAL 1
# endif
#endif

#line 68 "/usr/share/bison++/bison.h"
/* prefix */

#ifndef YY_parse_DEBUG

 #line 71 "/usr/share/bison++/bison.h"

#line 71 "/usr/share/bison++/bison.h"
/* YY_parse_DEBUG */
#endif

#ifndef YY_parse_LSP_NEEDED

 #line 75 "/usr/share/bison++/bison.h"

#line 75 "/usr/share/bison++/bison.h"
 /* YY_parse_LSP_NEEDED*/
#endif

/* DEFAULT LTYPE*/
#ifdef YY_parse_LSP_NEEDED
 #ifndef YY_parse_LTYPE
  #ifndef BISON_YYLTYPE_ISDECLARED
   #define BISON_YYLTYPE_ISDECLARED
typedef
  struct yyltype
    {
      int timestamp;
      int first_line;
      int first_column;
      int last_line;
      int last_column;
      char *text;
   }
  yyltype;
  #endif

  #define YY_parse_LTYPE yyltype
 #endif
#endif

/* DEFAULT STYPE*/
#ifndef YY_parse_STYPE
 #define YY_parse_STYPE int
#endif

/* DEFAULT MISCELANEOUS */
#ifndef YY_parse_PARSE
 #define YY_parse_PARSE yyparse
#endif

#ifndef YY_parse_LEX
 #define YY_parse_LEX yylex
#endif

#ifndef YY_parse_LVAL
 #define YY_parse_LVAL yylval
#endif

#ifndef YY_parse_LLOC
 #define YY_parse_LLOC yylloc
#endif

#ifndef YY_parse_CHAR
 #define YY_parse_CHAR yychar
#endif

#ifndef YY_parse_NERRS
 #define YY_parse_NERRS yynerrs
#endif

#ifndef YY_parse_DEBUG_FLAG
 #define YY_parse_DEBUG_FLAG yydebug
#endif

#ifndef YY_parse_ERROR
 #define YY_parse_ERROR yyerror
#endif

#ifndef YY_parse_PARSE_PARAM
 #ifndef __STDC__
  #ifndef __cplusplus
   #ifndef YY_USE_CLASS
    #define YY_parse_PARSE_PARAM
    #ifndef YY_parse_PARSE_PARAM_DEF
     #define YY_parse_PARSE_PARAM_DEF
    #endif
   #endif
  #endif
 #endif
 #ifndef YY_parse_PARSE_PARAM
  #define YY_parse_PARSE_PARAM void
 #endif
#endif

/* TOKEN C */
#ifndef YY_USE_CLASS

 #ifndef YY_parse_PURE
  #ifndef yylval
   extern YY_parse_STYPE YY_parse_LVAL;
  #else
   #if yylval != YY_parse_LVAL
    extern YY_parse_STYPE YY_parse_LVAL;
   #else
    #warning "Namespace conflict, disabling some functionality (bison++ only)"
   #endif
  #endif
 #endif


 #line 169 "/usr/share/bison++/bison.h"
#define	FOR	258
#define	IF	259
#define	ELSE	260
#define	WHILE	261
#define	DO	262
#define	SWITCH	263
#define	CASE	264
#define	BREAK	265
#define	DEFAULT	266
#define	PRINTF	267
#define	MAS	268
#define	MENOS	269
#define	MULTIPLICACION	270
#define	DIVISION	271
#define	MODULO	272
#define	IGUAL	273
#define	MASIGUAL	274
#define	MENOSIGUAL	275
#define	MULTIPLICACIONIGUAL	276
#define	DIVISIONIGUAL	277
#define	MODULOIGUAL	278
#define	DECREMENTO	279
#define	INCREMENTO	280
#define	IGUALIGUAL	281
#define	DIFERENTE	282
#define	MAYOR	283
#define	MENOR	284
#define	MAYORIGUAL	285
#define	MENORIGUAL	286
#define	AND	287
#define	OR	288
#define	NOT	289
#define	INT	290
#define	FLOAT	291
#define	CHAR	292
#define	DOUBLE	293
#define	VOID	294
#define	SHORT	295
#define	LONG	296
#define	SIGNED	297
#define	UNSIGNED	298
#define	PUNTOCOMA	299
#define	COMA	300
#define	PUNTO	301
#define	DOSPUNTOS	302
#define	LLAVEABRIR	303
#define	LLAVECERRAR	304
#define	CORCHETEABRIR	305
#define	CORCHETECERRAR	306
#define	PARENTESISABRIR	307
#define	PARENTESISCERRAR	308
#define	COMILLAS	309
#define	COMILLASIMPLE	310
#define	NUMEROS	311
#define	VARIABLES	312
#define	CADENA	313


#line 169 "/usr/share/bison++/bison.h"
 /* #defines token */
/* after #define tokens, before const tokens S5*/
#else
 #ifndef YY_parse_CLASS
  #define YY_parse_CLASS parse
 #endif

 #ifndef YY_parse_INHERIT
  #define YY_parse_INHERIT
 #endif

 #ifndef YY_parse_MEMBERS
  #define YY_parse_MEMBERS 
 #endif

 #ifndef YY_parse_LEX_BODY
  #define YY_parse_LEX_BODY  
 #endif

 #ifndef YY_parse_ERROR_BODY
  #define YY_parse_ERROR_BODY  
 #endif

 #ifndef YY_parse_CONSTRUCTOR_PARAM
  #define YY_parse_CONSTRUCTOR_PARAM
 #endif
 /* choose between enum and const */
 #ifndef YY_parse_USE_CONST_TOKEN
  #define YY_parse_USE_CONST_TOKEN 0
  /* yes enum is more compatible with flex,  */
  /* so by default we use it */ 
 #endif
 #if YY_parse_USE_CONST_TOKEN != 0
  #ifndef YY_parse_ENUM_TOKEN
   #define YY_parse_ENUM_TOKEN yy_parse_enum_token
  #endif
 #endif

class YY_parse_CLASS YY_parse_INHERIT
{
public: 
 #if YY_parse_USE_CONST_TOKEN != 0
  /* static const int token ... */
  
 #line 212 "/usr/share/bison++/bison.h"
static const int FOR;
static const int IF;
static const int ELSE;
static const int WHILE;
static const int DO;
static const int SWITCH;
static const int CASE;
static const int BREAK;
static const int DEFAULT;
static const int PRINTF;
static const int MAS;
static const int MENOS;
static const int MULTIPLICACION;
static const int DIVISION;
static const int MODULO;
static const int IGUAL;
static const int MASIGUAL;
static const int MENOSIGUAL;
static const int MULTIPLICACIONIGUAL;
static const int DIVISIONIGUAL;
static const int MODULOIGUAL;
static const int DECREMENTO;
static const int INCREMENTO;
static const int IGUALIGUAL;
static const int DIFERENTE;
static const int MAYOR;
static const int MENOR;
static const int MAYORIGUAL;
static const int MENORIGUAL;
static const int AND;
static const int OR;
static const int NOT;
static const int INT;
static const int FLOAT;
static const int CHAR;
static const int DOUBLE;
static const int VOID;
static const int SHORT;
static const int LONG;
static const int SIGNED;
static const int UNSIGNED;
static const int PUNTOCOMA;
static const int COMA;
static const int PUNTO;
static const int DOSPUNTOS;
static const int LLAVEABRIR;
static const int LLAVECERRAR;
static const int CORCHETEABRIR;
static const int CORCHETECERRAR;
static const int PARENTESISABRIR;
static const int PARENTESISCERRAR;
static const int COMILLAS;
static const int COMILLASIMPLE;
static const int NUMEROS;
static const int VARIABLES;
static const int CADENA;


#line 212 "/usr/share/bison++/bison.h"
 /* decl const */
 #else
  enum YY_parse_ENUM_TOKEN { YY_parse_NULL_TOKEN=0
  
 #line 215 "/usr/share/bison++/bison.h"
	,FOR=258
	,IF=259
	,ELSE=260
	,WHILE=261
	,DO=262
	,SWITCH=263
	,CASE=264
	,BREAK=265
	,DEFAULT=266
	,PRINTF=267
	,MAS=268
	,MENOS=269
	,MULTIPLICACION=270
	,DIVISION=271
	,MODULO=272
	,IGUAL=273
	,MASIGUAL=274
	,MENOSIGUAL=275
	,MULTIPLICACIONIGUAL=276
	,DIVISIONIGUAL=277
	,MODULOIGUAL=278
	,DECREMENTO=279
	,INCREMENTO=280
	,IGUALIGUAL=281
	,DIFERENTE=282
	,MAYOR=283
	,MENOR=284
	,MAYORIGUAL=285
	,MENORIGUAL=286
	,AND=287
	,OR=288
	,NOT=289
	,INT=290
	,FLOAT=291
	,CHAR=292
	,DOUBLE=293
	,VOID=294
	,SHORT=295
	,LONG=296
	,SIGNED=297
	,UNSIGNED=298
	,PUNTOCOMA=299
	,COMA=300
	,PUNTO=301
	,DOSPUNTOS=302
	,LLAVEABRIR=303
	,LLAVECERRAR=304
	,CORCHETEABRIR=305
	,CORCHETECERRAR=306
	,PARENTESISABRIR=307
	,PARENTESISCERRAR=308
	,COMILLAS=309
	,COMILLASIMPLE=310
	,NUMEROS=311
	,VARIABLES=312
	,CADENA=313


#line 215 "/usr/share/bison++/bison.h"
 /* enum token */
     }; /* end of enum declaration */
 #endif
public:
 int YY_parse_PARSE(YY_parse_PARSE_PARAM);
 virtual void YY_parse_ERROR(char *msg) YY_parse_ERROR_BODY;
 #ifdef YY_parse_PURE
  #ifdef YY_parse_LSP_NEEDED
   virtual int  YY_parse_LEX(YY_parse_STYPE *YY_parse_LVAL,YY_parse_LTYPE *YY_parse_LLOC) YY_parse_LEX_BODY;
  #else
   virtual int  YY_parse_LEX(YY_parse_STYPE *YY_parse_LVAL) YY_parse_LEX_BODY;
  #endif
 #else
  virtual int YY_parse_LEX() YY_parse_LEX_BODY;
  YY_parse_STYPE YY_parse_LVAL;
  #ifdef YY_parse_LSP_NEEDED
   YY_parse_LTYPE YY_parse_LLOC;
  #endif
  int YY_parse_NERRS;
  int YY_parse_CHAR;
 #endif
 #if YY_parse_DEBUG != 0
  public:
   int YY_parse_DEBUG_FLAG;	/*  nonzero means print parse trace	*/
 #endif
public:
 YY_parse_CLASS(YY_parse_CONSTRUCTOR_PARAM);
public:
 YY_parse_MEMBERS 
};
/* other declare folow */
#endif


#if YY_parse_COMPATIBILITY != 0
 /* backward compatibility */
 /* Removed due to bison problems
 /#ifndef YYSTYPE
 / #define YYSTYPE YY_parse_STYPE
 /#endif*/

 #ifndef YYLTYPE
  #define YYLTYPE YY_parse_LTYPE
 #endif
 #ifndef YYDEBUG
  #ifdef YY_parse_DEBUG 
   #define YYDEBUG YY_parse_DEBUG
  #endif
 #endif

#endif
/* END */

 #line 267 "/usr/share/bison++/bison.h"
#endif
