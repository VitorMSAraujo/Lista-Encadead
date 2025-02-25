#include "lista_encadeada.hpp"

int main() {
    ListaEncadeada lista;

    // Verificando se a lista está vazia
    if (lista.estaVazia()) {
        std::cout << "Lista vazia.\n";
    } else {
        std::cout << "Lista com elementos.\n";
    }

    // Inserindo elementos
    lista.inserirElemento(1, 10);
    lista.inserirElemento(2, 20);
    lista.inserirElemento(2, 30);

    lista.imprimirLista();

    // Obtendo tamanho da lista
    std::cout << "Tamanho da lista: " << lista.obterTamanho() << "\n";

    // Modificando um elemento
    lista.modificarElemento(2, 25);
    lista.imprimirLista();

    // Obtendo um valor específico
    int valor = lista.obterValor(2);
    if (valor != -1) {
        std::cout << "Valor na posicao 2: " << valor << "\n";
    }

    // Removendo um elemento
    lista.retirarElemento(1);
    lista.imprimirLista();

    return 0;
}
