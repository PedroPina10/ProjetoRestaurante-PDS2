# Variáveis auxiliares
CXX = g++
CXXFLAGS = -std=c++17 -Wall
TARGET = vpl_execution

# Diretórios auxiliares
BUILD_DIR = obj
SRC_DIR = src
INCLUDE_DIR = include

# Lista de arquivos fonte e objetos
SOURCES = $(SRC_DIR)/Cardapio.cpp $(SRC_DIR)/Cliente.cpp $(SRC_DIR)/Cozinheiro.cpp $(SRC_DIR)/DonoRestaurante.cpp $(SRC_DIR)/Entregador.cpp $(SRC_DIR)/Fornecedor.cpp $(SRC_DIR)/Pedido.cpp $(SRC_DIR)/Relatorio.cpp $(SRC_DIR)/Utils.cpp $(SRC_DIR)/Main.cpp
OBJECTS = $(patsubst $(SRC_DIR)/%.cpp, $(BUILD_DIR)/%.o, $(SOURCES))

# Regra padrão
all: $(TARGET)

# Linkagem do executável
$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) $(OBJECTS) -o $@

# Compilação de cada arquivo .cpp em .o
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp
	@if not exist "$(BUILD_DIR)" mkdir "$(BUILD_DIR)"
	$(CXX) $(CXXFLAGS) -I$(INCLUDE_DIR) -c $< -o $@

# Limpeza dos arquivos gerados
clean:
	@if exist "$(BUILD_DIR)" rmdir /S /Q "$(BUILD_DIR)"
	@if exist "$(TARGET)" del "$(TARGET)"

run: $(TARGET)
	$(TARGET)