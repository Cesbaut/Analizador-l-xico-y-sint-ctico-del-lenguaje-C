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
#define	ENUM	264
#define	UNION	265
#define	CASE	266
#define	BREAK	267
#define	DEFAULT	268
#define	MAS	269
#define	MENOS	270
#define	MULTIPLICACION	271
#define	DIVISION	272
#define	MODULO	273
#define	IGUAL	274
#define	MASIGUAL	275
#define	MENOSIGUAL	276
#define	MULTIPLICACIONIGUAL	277
#define	DIVISIONIGUAL	278
#define	MODULOIGUAL	279
#define	DECREMENTO	280
#define	INCREMENTO	281
#define	IGUALIGUAL	282
#define	DIFERENTE	283
#define	MAYOR	284
#define	MENOR	285
#define	MAYORIGUAL	286
#define	MENORIGUAL	287
#define	AND	288
#define	OR	289
#define	NOT	290
#define	INT	291
#define	FLOAT	292
#define	CHAR	293
#define	DOUBLE	294
#define	VOID	295
#define	SHORT	296
#define	LONG	297
#define	SIGNED	298
#define	UNSIGNED	299
#define	PUNTOCOMA	300
#define	COMA	301
#define	PUNTO	302
#define	DOSPUNTOS	303
#define	LLAVEABRIR	304
#define	LLAVECERRAR	305
#define	CORCHETEABRIR	306
#define	CORCHETECERRAR	307
#define	PARENTESISABRIR	308
#define	PARENTESISCERRAR	309
#define	COMILLAS	310
#define	COMILLASIMPLE	311
#define	NUMEROS	312
#define	VARIABLES	313
#define	CADENA	314


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
static const int ENUM;
static const int UNION;
static const int CASE;
static const int BREAK;
static const int DEFAULT;
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
	,ENUM=264
	,UNION=265
	,CASE=266
	,BREAK=267
	,DEFAULT=268
	,MAS=269
	,MENOS=270
	,MULTIPLICACION=271
	,DIVISION=272
	,MODULO=273
	,IGUAL=274
	,MASIGUAL=275
	,MENOSIGUAL=276
	,MULTIPLICACIONIGUAL=277
	,DIVISIONIGUAL=278
	,MODULOIGUAL=279
	,DECREMENTO=280
	,INCREMENTO=281
	,IGUALIGUAL=282
	,DIFERENTE=283
	,MAYOR=284
	,MENOR=285
	,MAYORIGUAL=286
	,MENORIGUAL=287
	,AND=288
	,OR=289
	,NOT=290
	,INT=291
	,FLOAT=292
	,CHAR=293
	,DOUBLE=294
	,VOID=295
	,SHORT=296
	,LONG=297
	,SIGNED=298
	,UNSIGNED=299
	,PUNTOCOMA=300
	,COMA=301
	,PUNTO=302
	,DOSPUNTOS=303
	,LLAVEABRIR=304
	,LLAVECERRAR=305
	,CORCHETEABRIR=306
	,CORCHETECERRAR=307
	,PARENTESISABRIR=308
	,PARENTESISCERRAR=309
	,COMILLAS=310
	,COMILLASIMPLE=311
	,NUMEROS=312
	,VARIABLES=313
	,CADENA=314


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
