# Compilador y flags
CXX = g++
CXXFLAGS = -I./include -Wall -g

# Carpetas
SRC_DIR = src
OBJ_DIR = obj
LIB_DIR = lib

# Archivos fuente y objetos
SRC_FILES = $(SRC_DIR)/principal.cpp $(SRC_DIR)/calcularEstadisticas.cpp $(SRC_DIR)/cargarDatos.cpp $(SRC_DIR)/listarNotas.cpp $(SRC_DIR)/obtenerPromedioAlumno.cpp
OBJ_FILES = $(SRC_FILES:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)

# Nombre de la biblioteca estática y ejecutable
LIBRARY = $(LIB_DIR)/libfunciones.a
EXEC = program

# Regla para el ejecutable final
$(EXEC): $(OBJ_FILES) $(LIBRARY)
	$(CXX) $(OBJ_FILES) -L$(LIB_DIR) -lfunciones -o $(EXEC)

# Regla para la biblioteca estática
$(LIBRARY): $(OBJ_FILES)
	ar rcs $@ $^

# Regla para los archivos .o
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Limpiar los archivos generados
clean:
	rm -rf $(OBJ_DIR)/*.o $(LIB_DIR)/*.a $(EXEC)

# Regla por defecto
.PHONY: clean




















