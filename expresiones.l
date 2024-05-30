%{
#include "y.tab.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern FILE *tokenFile;
extern void addString(char ***array, int *size, const char *newString);
extern char **arregloErrores;
extern int tamErrores;
extern char **arregloVariables;
extern int tamVariables;
extern char **arregloCadenas;
extern int tamCadenas;

void logToken(char *token, int id_clase, int id_tabla_clase, char *clase){
    if(tokenFile){
        fprintf(tokenFile, "%s\t\t(%d, %d)\t\t\t %s\n", token, id_clase, id_tabla_clase, clase);
    }
}

%}

%%


"for"               { logToken(yytext, 0, 0, "Palabras Reservadas"); return FOR; }
"if"                { logToken(yytext, 1, 0, "Palabras Reservadas"); return IF; }
"else"              { logToken(yytext, 2, 0, "Palabras Reservadas"); return ELSE; }
"while"             { logToken(yytext, 3, 0, "Palabras Reservadas"); return WHILE; }
"do"                { logToken(yytext, 4, 0, "Palabras Reservadas"); return DO; }
"switch"            { logToken(yytext, 5, 0, "Palabras Reservadas"); return SWITCH; }
"printf"            { logToken(yytext, 6, 0, "Palabras Reservadas"); return PRINTF; }
"case"              { logToken(yytext, 7, 0, "Palabras Reservadas"); return CASE; }
"break"             { logToken(yytext, 8, 0, "Palabras Reservadas"); return BREAK; }
"default"           { logToken(yytext, 9, 0, "Palabras Reservadas"); return DEFAULT; }



"+"                 { logToken(yytext, 0, 1, "Operadores"); return MAS; }
"-"                 { logToken(yytext, 1, 1, "Operadores"); return MENOS; }
"*"                 { logToken(yytext, 2, 1, "Operadores"); return MULTIPLICACION; }
"/"                 { logToken(yytext, 3, 1, "Operadores"); return DIVISION; }
"%"                 { logToken(yytext, 4, 1, "Operadores"); return MODULO; }


"="                 { logToken(yytext, 0, 2, "Operadores de asignacion"); return IGUAL; }
"+="                { logToken(yytext, 1, 2, "Operadores de asignacion"); return MASIGUAL; }
"-="                { logToken(yytext, 2, 2, "Operadores de asignacion"); return MENOSIGUAL; }
"*="                { logToken(yytext, 3, 2, "Operadores de asignacion"); return MULTIPLICACIONIGUAL; }
"/="                { logToken(yytext, 4, 2, "Operadores de asignacion"); return DIVISIONIGUAL; }
"%="                { logToken(yytext, 5, 2, "Operadores de asignacion"); return MODULOIGUAL; }


"--"                { logToken(yytext, 0, 3, "Incremento y decremento"); return DECREMENTO; }
"++"                { logToken(yytext, 1, 3, "Incremento y decremento"); return INCREMENTO; }


"=="                { logToken(yytext, 0, 4, "Operadores relacionales"); return IGUALIGUAL; }
"!="                { logToken(yytext, 1, 4, "Operadores relacionales"); return DIFERENTE; }
">"                 { logToken(yytext, 2, 4, "Operadores relacionales"); return MAYOR; }
"<"                 { logToken(yytext, 3, 4, "Operadores relacionales"); return MENOR; }
">="                { logToken(yytext, 5, 4, "Operadores relacionales"); return MAYORIGUAL; }
"<="                { logToken(yytext, 6, 4, "Operadores relacionales"); return MENORIGUAL; }


"&&"                { logToken(yytext, 0, 5, "Operadores logicos"); return AND; }
"||"                { logToken(yytext, 1, 5, "Operadores logicos"); return OR; }
"!"                 { logToken(yytext, 2, 5, "Operadores logicos"); return NOT; }


"int"               { logToken(yytext, 0, 6, "Tipos de variables"); return INT; }
"float"             { logToken(yytext, 1, 6, "Tipos de variables"); return FLOAT; }
"chaR"              { logToken(yytext, 2, 6, "Tipos de variables"); return CHAR; }
"double"            { logToken(yytext, 3, 6, "Tipos de variables"); return DOUBLE; }
"void"              { logToken(yytext, 4, 6, "Tipos de variables"); return VOID; }
"short"             { logToken(yytext, 5, 6, "Tipos de variables"); return SHORT; }
"long"              { logToken(yytext, 6, 6, "Tipos de variables"); return LONG; }
"signed"            { logToken(yytext, 7, 6, "Tipos de variables"); return SIGNED; }
"unsigned"          { logToken(yytext, 8, 6, "Tipos de variables"); return UNSIGNED; }


";"                 { logToken(yytext, 0, 7, "Puntuacion"); return PUNTOCOMA; }
","                 { logToken(yytext, 1, 7, "Puntuacion"); return COMA; }
"."                 { logToken(yytext, 2, 7, "Puntuacion"); return PUNTO; }
":"                 { logToken(yytext, 3, 7, "Puntuacion"); return DOSPUNTOS; }


"{"                 { logToken(yytext, 0, 8, "Delimitadores"); return LLAVEABRIR; }
"}"                 { logToken(yytext, 1, 8, "Delimitadores"); return LLAVECERRAR; }
"["                 { logToken(yytext, 2, 8, "Delimitadores"); return CORCHETEABRIR; }
"]"                 { logToken(yytext, 3, 8, "Delimitadores"); return CORCHETECERRAR; }
"("                 { logToken(yytext, 4, 8, "Delimitadores"); return PARENTESISABRIR; }
")"                 { logToken(yytext, 5, 8, "Delimitadores"); return PARENTESISCERRAR; }


\"                  { logToken(yytext, 0, 9, "Delimitadores de caracteres"); return COMILLAS; }
\'                  { logToken(yytext, 1, 9, "Delimitadores de caracteres"); return COMILLASIMPLE; }


[0-9]+                      { logToken(yytext, atoi(yytext), 12, "Numeros"); yylval = atoi(yytext); return NUMEROS; }
[a-zA-Z_][a-zA-Z0-9_]*      { logToken(yytext, 0, 10, "Variables"); addString(&arregloVariables, &tamVariables, yytext); return VARIABLES; }
\"(\\.|[^\"\\])*\"          { logToken(yytext, 0, 11, "Cadenas"); addString(&arregloCadenas, &tamCadenas, yytext); return CADENA; }
.                           { addString(&arregloErrores, &tamErrores, yytext); }


%%

int yywrap() {
    return 1;
}
