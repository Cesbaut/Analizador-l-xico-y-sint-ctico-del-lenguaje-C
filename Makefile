# Definir los nombres de los archivos fuente
LEX_FILE = expresiones.l
YACC_FILE = gramatica.y

# Definir los nombres de los archivos generados por flex y yacc
LEX_OUTPUT = lex.yy.c
YACC_OUTPUT = y.tab.c
YACC_HEADER = y.tab.h

# Nombre del ejecutable
EXECUTABLE = parser

# Definir los comandos
FLEX = flex
YACC = yacc
GCC = gcc

# Opciones adicionales
YACC_FLAGS = -d
GCC_FLAGS = -lfl

# Regla principal (lo que se ejecuta al llamar a 'make' sin argumentos)
all: $(EXECUTABLE)

# Regla para construir el ejecutable
$(EXECUTABLE): $(YACC_OUTPUT) $(LEX_OUTPUT)
	$(GCC) -o $(EXECUTABLE) $(YACC_OUTPUT) $(LEX_OUTPUT) $(GCC_FLAGS)

# Regla para generar el archivo C de yacc
$(YACC_OUTPUT): $(YACC_FILE)
	$(YACC) $(YACC_FLAGS) $(YACC_FILE)

# Regla para generar el archivo C de flex
$(LEX_OUTPUT): $(LEX_FILE)
	$(FLEX) $(LEX_FILE)

# Regla de limpieza
clean:
	rm -f $(LEX_OUTPUT) $(YACC_OUTPUT) $(YACC_HEADER) $(EXECUTABLE)

# Ejecutar el programa
run: $(EXECUTABLE)
	./$(EXECUTABLE)
