%{
#include "y.tab.h"
%}



%%

[0-9]+              { yylval = atoi(yytext); return NUMEROS; }
"if"                { return IF; }
"=="                { return IGUAL; }
"("                 { return PARENTESISABRIR; }
")"                 { return PARENSISCERRAR; }
"{"                 { return CORCHETEABRIR; }
"}"                 { return CORCHETECERRAR; }




%%

int yywrap() {
    return 1;
}
