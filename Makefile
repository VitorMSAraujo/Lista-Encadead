# Nome do compilador
CXX = g++

# Opções de compilação
CXXFLAGS = -Wall -Wextra -std=c++11

# Arquivos-fonte
SRC = lista_encadeada.cpp main.cpp
TEST_SRC = lista_encadeada.cpp testa_lista.cpp

# Nome do executável
EXEC = programa
TEST_EXEC = testes

# Regra padrão: compilar o programa principal
all: $(EXEC)

$(EXEC): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(EXEC) $(SRC)

# Regra para rodar o programa
run: $(EXEC)
	./$(EXEC)

# Regra para compilar e rodar os testes
test: $(TEST_EXEC)
	./$(TEST_EXEC)

$(TEST_EXEC): $(TEST_SRC)
	$(CXX) $(CXXFLAGS) -o $(TEST_EXEC) $(TEST_SRC)

# Limpeza dos arquivos compilados
clean:
	rm -f $(EXEC) $(TEST_EXEC)
