%{
#include <stdio.h>
#include <stdlib.h>

void yyerror(const char *s);
int yylex(void);
%}



%token FOR IF ELSE WHILE DO SWITCH CASE BREAK DEFAULT ENUM UNION
%token MAS MENOS MULTIPLICACION DIVISION MODULO
%token IGUAL MASIGUAL MENOSIGUAL MULTIPLICACIONIGUAL DIVISIONIGUAL MODULOIGUAL
%token DECREMENTO INCREMENTO
%token IGUALIGUAL DIFERENTE MAYOR MENOR MAYORIGUAL MENORIGUAL 
%token AND OR NOT
%token INT FLOAT CHAR DOUBLE VOID SHORT LONG SIGNED UNSIGNED
%token PUNTOCOMA COMA PUNTO DOSPUNTOS
%token LLAVEABRIR LLAVECERRAR CORCHETEABRIR CORCHETECERRAR PARENTESISABRIR PARENTESISCERRAR
%token COMILLAS COMILLASIMPLE
%token NUMEROS VARIABLES CADENA




%%




programa:
    /* Regla inicial */
    | programa sentencia
    ;

sentencia:
    if_statement
    ;

if_statement:
    IF PARENTESISABRIR condicional PARENTESISCERRAR LLAVEABRIR contenido LLAVECERRAR PUNTOCOMA
    {
        printf("Sentencia if encontrada y correcta");
    }
    ;
for_statement:
    FOR PARENTESISABRIR inicializacion PUNTOCOMA condicion PUNTOCOMA incremento PARENSISCERRAR LLAVEABRIR contenido LLAVECERRAR PUNTOCOMA
    {
        printf("Sentencia for encontrada y correcta");
    }
    ;

while_statement:
    WHILE PARENTESISABRIR condicional PARENSISCERRAR LLAVEABRIR contenido LLAVECERRAR
    {
        printf("Sentencia while encontrada y correcta");
    }
    ;

do_while_statement:
    DO LLAVEABRIR contenido LLAVECERRAR WHILE PARENTESISABRIR condicional PARENTESISCERRAR PUNTOCOMA
    {
        printf("Sentencia do while encontrada y correcta");
    }

switch_statement:
    SWITCH PARENTESISABRIR VARIABLES PARENTESISCERRAR LLAVEABRIR [CASE NUMEROS DOSPUNTOS CONTENIDO BREAK PUNTOCOMA]+ [DEFAULT DOSPUNTOS CONTENIDO BREAK PUNTOCOMA] LLAVECERRAR
    {
        printf("Sentencia switch encontrada y correcta");
    }

inicializacion:
    tipoDeDato VARIABLES 
    ;

condicional:
    NUMEROS IGUALIGUAL NUMEROS
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
