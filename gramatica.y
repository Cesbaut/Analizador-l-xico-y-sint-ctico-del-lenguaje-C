%{
#include <stdio.h>
#include <stdlib.h>

void yyerror(const char *s);
int yylex(void);
%}



%token FOR IF ELSE WHILE DO SWITCH CASE BREAK DEFAULT PRINTF
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
    |impresion          
    |asigancionVariable
    |operacion
    ;

if_statement:
    IF PARENTESISABRIR condicion PARENTESISCERRAR LLAVEABRIR contenido LLAVECERRAR 
    {
        printf("Sentencia if encontrada y correcta");
    }
    ;
for_statement:
    FOR PARENTESISABRIR inicializacion PUNTOCOMA condicion PUNTOCOMA incremento PARENTESISCERRAR LLAVEABRIR contenido LLAVECERRAR
    {
        printf("Sentencia for encontrada y correcta");
    }
    ;
while_statement:
    WHILE PARENTESISABRIR condicion PARENTESISCERRAR LLAVEABRIR contenido LLAVECERRAR
    {
        printf("Sentencia while encontrada y correcta");
    }
    ;


do_while_statement:
    DO LLAVEABRIR contenido LLAVECERRAR WHILE PARENTESISABRIR condicion PARENTESISCERRAR PUNTOCOMA
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
    tipoDeDato VARIABLES IGUAL opcion
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
    opcion operadorRelacional opcion
    | opcion operadorLogico opcion
    | NOT condicion
    | PARENTESISABRIR condicion PARENTESISCERRAR
    ;
operadorLogico:
    AND
    | OR
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
contenido:
    /* vacío */           /* Añadido para permitir vacío */
    | contenido sentencia /* Permitir múltiples sentencias */
    ;
impresion:
    PRINTF PARENTESISABRIR CADENA PARENTESISCERRAR PUNTOCOMA
    ;
asigancionVariable:
    tipoDeDato VARIABLES IGUAL opcion PUNTOCOMA
    |tipoDeDato VARIABLES IGUAL CADENA PUNTOCOMA
    ;
operacion:
    VARIABLES IGUAL opcion operador opcion PUNTOCOMA
    ;
opcion:
    NUMEROS
    | VARIABLES
    | opcion operador opcion
    | PARENTESISABRIR opcion PARENTESISCERRAR
    ;
operador:
    MAS
    |MENOS
    |MULTIPLICACION
    |DIVISION
    |MODULO
    ;
%%


void yyerror(const char *s) {
    fprintf(stderr, "Error: %s\n", s);
}

int main(void) {

    printf("\n---FOR---\n");
    printf("for(TIPO_DE_DATO VARIABLE IGUAL NUMERO; VARIABLE CONDICION NUMERO; VARIABLE INCREMENTO_DECREMENTO){\n");
    printf("    CONTENIDO\n");
    printf("}\n");
    printf("------\n\n");

    printf("---WHILE---\n");
    printf("while(CONDICION){\n");
    printf("    CONTENIDO\n");
    printf("}\n");
    printf("------\n\n");

    printf("---DO-WHILE---\n");
    printf("do {\n");
    printf("    CONTENIDO\n");
    printf("} while(CONDICION);\n");
    printf("------\n\n");

    printf("---IF---\n");
    printf("if(CONDICION){\n");
    printf("    CONTENIDO\n");
    printf("}\n");
    printf("------\n\n");

    printf("---IF-ELSE---\n");
    printf("if(CONDICION){\n");
    printf("    CONTENIDO\n");
    printf("} else {\n");
    printf("    CONTENIDO\n");
    printf("}\n");
    printf("------\n\n");

    printf("---SWITCH---\n");
    printf("switch(EXPRESION){\n");
    printf("    case VALOR1:\n");
    printf("        CONTENIDO\n");
    printf("        break;\n");
    printf("    case VALOR2:\n");
    printf("        CONTENIDO\n");
    printf("        break;\n");
    printf("    default:\n");
    printf("        CONTENIDO\n");
    printf("}\n");
    printf("------\n\n");

    printf("---OPERADORES---\n");
    printf("+\n");
    printf("-\n");
    printf("*\n");
    printf("/\n");
    printf("%%\n");

    printf("---OPERADORES DE ASIGNACION---\n");
    printf("=\n");
    printf("+=\n");
    printf("-=\n");
    printf("*=\n");
    printf("/=\n");
    printf("%%=\n");
    printf("------\n\n");

    printf("---INCREMENTO Y DECREMENTO---\n");
    printf("--\n");
    printf("++\n");
    printf("------\n\n");


    printf("---OPERADORES RELACIONALES---\n");
    printf("==\n");
    printf("!=\n");
    printf(">\n");
    printf("<\n");
    printf(">=\n");
    printf("<=\n");
    printf("------\n\n");

    printf("---OPERADORES LOGICOS---\n");
    printf("&&\n");
    printf("||\n");
    printf("!\n");
    printf("------\n\n");

    printf("---TIPOS DE VARIABLES---\n");
    printf("int\n");
    printf("float\n");
    printf("chart\n");
    printf("double\n");
    printf("void\n");
    printf("short\n");
    printf("long\n");
    printf("signed\n");
    printf("unsigned\n");
    printf("------\n\n");

    printf("---PUNTUACION---\n");
    printf(";\n");
    printf(",\n");
    printf(".\n");
    printf(":\n");
    printf("------\n\n");

    printf("---DELIMITADORES---\n");
    printf("{\n");
    printf("}\n");
    printf("[\n");
    printf("]\n");
    printf("(\n");
    printf(")\n");
    printf("------\n\n");

    printf("---DELIMITADORES DE CARACTERES---\n");
    printf("\"\n");
    printf("'\n");
    printf("------\n\n");

    return yyparse();
}
