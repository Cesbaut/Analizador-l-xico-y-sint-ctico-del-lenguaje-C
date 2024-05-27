%{
#include <stdio.h>
#include <stdlib.h>

void yyerror(const char *s);
int yylex(void);
%}




%token NUMEROS
%token IF IGUAL PARENTESISABRIR PARENSISCERRAR CORCHETEABRIR CORCHETECERRAR PUNTOCOMA




ERIIIIIIIKKKKKKKKK
AQUI PONER TODOS LOS TOKENS
ES DECIR 
LOS NOMBRES DE LOS RETURN QUE ESTAN EN FLEX PASARLOS CON EL MISMO TOKEN


POR EJEMPLO 
{ return PARENSISCERRAR; } //FLEX
%token PARENSISCERRAR








%%




programa:
    /* Regla inicial */
    | programa sentencia
    ;

sentencia:
    if_statement
    ;

if_statement:
    IF PARENTESISABRIR condicional PARENSISCERRAR CORCHETEABRIR contenido CORCHETECERRAR PUNTOCOMA
    {
        printf("Sentencia if encontrada y correcta");
    }
    ;
condicional:
    NUMEROS IGUAL NUMEROS
    ;
contenido:
    NUMEROS PUNTOCOMA
    ;


%%




void yyerror(const char *s) {
    fprintf(stderr, "Error: %s\n", s);
}

int main(void) {
    return yyparse();
}
