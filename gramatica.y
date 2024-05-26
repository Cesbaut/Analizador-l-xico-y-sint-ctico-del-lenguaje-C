%{
#include <stdio.h>
#include <stdlib.h>

void yyerror(const char *s);
int yylex(void);
%}

%token NUMEROS
%token IF IGUAL PARENTESISABRIR PARENSISCERRAR CORCHETEABRIR CORCHETECERRAR


%%

programa:
    /* Regla inicial */
    | programa sentencia
    ;

sentencia:
    if_statement
    ;

if_statement:
    IF PARENTESISABRIR condicional PARENSISCERRAR CORCHETEABRIR contenido CORCHETECERRAR
    {
        printf("Sentencia if encontrada y correcta");
    }
    ;
condicional:
    NUMEROS IGUAL NUMEROS
    ;
contenido:
    NUMEROS
    ;








//     IF PARENTESISABRIR comparacion PARENSISCERRAR CORCHETEABRIR cuerpo CORCHETECERRAR
//     {
//         printf("Sentencia if encontrada\n");
//     }
//     ;

// comparacion:
//     expresion IGUAL expresion
//     ;

// expresion:
//     NUMEROS
//     ;

// cuerpo:
//     /* Puedes definir más reglas para el cuerpo del if si es necesario */
//     ;

%%

void yyerror(const char *s) {
    fprintf(stderr, "Error: %s\n", s);
}

int main(void) {
    return yyparse();
}
