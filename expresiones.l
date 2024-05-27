%{
#include "y.tab.h"
%}



%%


"for"               { return FOR; }
"if"                { return IF; }
"else"              { return ELSE; }
"while"             { return WHILE; }
"do"                { return DO; }
"switch"            { return SWITCH; }
"enum"              { return ENUM; }
"union"             { return UNION; }
"kks"


"+"                 { return MAS; }
"-"                 { return MENOS; }
"*"                 { return MULTIPLICACION; }
"/"                 { return DIVISION; }
"%"                 { return MODULO; }


"="                 { return IGUAL; }
"+="                { return MASIGAUL; }
"-="                { return MENOSIGUAL; }
"*="                { return MULTIPLICACIONIGUAL; }
"/="                { return DIVISIONIGUAL; }
"%="                { return MODULOIGUAL; }


"--"                { return DECREMENTO; }
"++"                { return INCREMENTO; }


"=="                { return IGUAL; }
"!="                { return DIFERENTE; }
">"                 { return MAYOR; }
"<"                 { return MENOR; }
">="                { return MENORIGUAL; }
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
")"                 { return PARENSISCERRAR; }


'"'                 { return COMILLAS; }
"'"                 { return COMILLASIMPLE; }


[0-9]+                      { yylval = atoi(yytext); return NUMEROS; }
[a-zA-Z_][a-zA-Z0-9_]*      { return VARIABLES; }
\"(\\.|[^\"\\])*\"          { return CADENA; }


%%

int yywrap() {
    return 1;
}
