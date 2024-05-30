%{
#include "y.tab.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern void addString(char ***array, int *size, const char *newString);
extern char **arregloErrores;
extern int tamErrores;
extern char **arregloVariables;
extern int tamVariables;
extern char **arregloCadenas;
extern int tamCadenas;

%}

%%


"for"               { return FOR; }
"if"                { return IF; }
"else"              { return ELSE; }
"while"             { return WHILE; }
"do"                { return DO; }
"switch"            { return SWITCH; }
"printf"            { return PRINTF; }

"case"              { return CASE; }
"break"             { return BREAK; }
"default"           { return DEFAULT; }



"+"                 { return MAS; }
"-"                 { return MENOS; }
"*"                 { return MULTIPLICACION; }
"/"                 { return DIVISION; }
"%"                 { return MODULO; }


"="                 { return IGUAL; }
"+="                { return MASIGUAL; }
"-="                { return MENOSIGUAL; }
"*="                { return MULTIPLICACIONIGUAL; }
"/="                { return DIVISIONIGUAL; }
"%="                { return MODULOIGUAL; }


"--"                { return DECREMENTO; }
"++"                { return INCREMENTO; }


"=="                { return IGUALIGUAL; }
"!="                { return DIFERENTE; }
">"                 { return MAYOR; }
"<"                 { return MENOR; }
">="                { return MAYORIGUAL; }
"<="                { return MENORIGUAL; }


"&&"                { return AND; }
"||"                { return OR; }
"!"                 { return NOT; }


"int"               { return INT; }
"float"             { return FLOAT; }
"chaR"              { return CHAR; }
"double"            { return DOUBLE; }
"void"              { return VOID; }
"short"             { return SHORT; }
"long"              { return LONG; }
"signed"            { return SIGNED; }
"unsigned"          { return UNSIGNED; }


";"                 { return PUNTOCOMA; }
","                 { return COMA; }
"."                 { return PUNTO; }
":"                 { return DOSPUNTOS; }


"{"                 { return LLAVEABRIR; }
"}"                 { return LLAVECERRAR; }
"["                 { return CORCHETEABRIR; }
"]"                 { return CORCHETECERRAR; }
"("                 { return PARENTESISABRIR; }
")"                 { return PARENTESISCERRAR; }


\"                  { return COMILLAS; }
\'                  { return COMILLASIMPLE; }


[0-9]+                      { yylval = atoi(yytext); return NUMEROS; }
[a-zA-Z_][a-zA-Z0-9_]*      { addString(&arregloVariables, &tamVariables, yytext); return VARIABLES; }
\"(\\.|[^\"\\])*\"          { addString(&arregloCadenas, &tamCadenas, yytext); return CADENA; }
.                           { addString(&arregloErrores, &tamErrores, yytext); }


%%

int yywrap() {
    return 1;
}
