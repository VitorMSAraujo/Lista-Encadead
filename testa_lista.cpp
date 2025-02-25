#include "lista_encadeada.hpp"
#include <cassert>
#include <iostream>

void testarListaEncadeada() {
    ListaEncadeada lista;

    // Teste 1: Lista deve começar vazia
    assert(lista.estaVazia() == true);
    assert(lista.obterTamanho() == 0);

    // Teste 2: Inserção de elementos
    lista.inserirElemento(1, 10);
    lista.inserirElemento(2, 20);
    lista.inserirElemento(2, 30); // Lista: [10, 30, 20]
    
    assert(lista.obterTamanho() == 3);
    assert(lista.obterValor(1) == 10);
    assert(lista.obterValor(2) == 30);
    assert(lista.obterValor(3) == 20);

    // Teste 3: Modificar elemento
    lista.modificarElemento(2, 25); // Lista: [10, 25, 20]
    assert(lista.obterValor(2) == 25);

    // Teste 4: Remover elementos
    lista.retirarElemento(1); // Remove 10 -> Lista: [25, 20]
    assert(lista.obterTamanho() == 2);
    assert(lista.obterValor(1) == 25);
    assert(lista.obterValor(2) == 20);

    // Teste 5: Acessar posição inválida
    assert(lista.obterValor(5) == -1);

    std::cout << "Todos os testes passaram!\n";
}

int main() {
    testarListaEncadeada();
    return 0;
}
