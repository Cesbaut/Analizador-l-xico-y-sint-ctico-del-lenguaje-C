%{
#include <stdio.h>
#include <stdlib.h>

void yyerror(const char *s);
int yylex(void);
%}



%token FOR IF ELSE WHILE DO SWITCH ENUM UNION CASE BREAK DEFAULT
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
    |for_statement
    |while_statement
    |do_while_statement
    |switch_statement
    ;

if_statement:
    IF PARENTESISABRIR condicional PARENTESISCERRAR LLAVEABRIR contenido LLAVECERRAR PUNTOCOMA
    {
        printf("Sentencia if encontrada y correcta");
    }
    ;
for_statement:
    FOR PARENTESISABRIR inicializacion PUNTOCOMA condicion PUNTOCOMA incremento PARENTESISCERRAR LLAVEABRIR contenido LLAVECERRAR PUNTOCOMA
    {
        printf("Sentencia for encontrada y correcta");
    }
    ;
while_statement:
    WHILE PARENTESISABRIR condicional PARENTESISCERRAR LLAVEABRIR contenido LLAVECERRAR PUNTOCOMA
    {
        printf("Sentencia while encontrada y correcta");
    }
    ;


do_while_statement:
    DO LLAVEABRIR contenido LLAVECERRAR WHILE PARENTESISABRIR condicional PARENTESISCERRAR PUNTOCOMA
    {
        printf("Sentencia do while encontrada y correcta");
    }
    ;
switch_statement:
    SWITCH PARENTESISABRIR VARIABLES PARENTESISCERRAR LLAVEABRIR case_clauses default_clause_opt LLAVECERRAR
    {
        printf("Sentencia switch encontrada y correcta");
    }
    ;

case_clauses:
    case_clause
    | case_clauses case_clause
    ;

case_clause:
    CASE NUMEROS DOSPUNTOS contenido BREAK PUNTOCOMA
    ;

default_clause_opt:
    /* vacío */
    | DEFAULT DOSPUNTOS contenido BREAK PUNTOCOMA
    ;

inicializacion:
    tipoDeDato VARIABLES IGUAL NUMEROS
    ;
tipoDeDato:
    INT
    |FLOAT
    |CHAR
    |DOUBLE
    |VOID
    |SHORT
    |LONG
    |SIGNED
    |UNSIGNED
    ;
condicion:
    VARIABLES operadorRelacional NUMEROS
    ;

operadorRelacional:
    IGUALIGUAL
    |DIFERENTE
    |MAYOR
    |MENOR
    |MAYORIGUAL
    |MENORIGUAL
    ;

operadorAsignacion:
    IGUAL
    |MASIGUAL
    |MENOSIGUAL
    |MULTIPLICACIONIGUAL
    |DIVISIONIGUAL
    |MODULOIGUAL
    ;
incremento:
    VARIABLES INCREMENTO
    |VARIABLES DECREMENTO
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
