#include "lista_encadeada.hpp"

ListaEncadeada::ListaEncadeada() : comeco(nullptr), tamanho(0) {}

ListaEncadeada::~ListaEncadeada() {
    while (!estaVazia()) {
        retirarElemento(1);
    }
}

bool ListaEncadeada::estaVazia() const {
    return comeco == nullptr;
}

int ListaEncadeada::obterTamanho() const {
    return tamanho;
}

int ListaEncadeada::obterValor(int posicao) const {
    if (posicao < 1 || posicao > tamanho) {
        std::cerr << "Posicao invalida.\n";
        return -1;
    }

    No* aux = comeco;
    for (int i = 1; i < posicao; i++) {
        aux = aux->proximo;
    }
    return aux->conteudo;
}

void ListaEncadeada::modificarElemento(int posicao, int novoValor) {
    if (posicao < 1 || posicao > tamanho) {
        std::cerr << "Posicao invalida.\n";
        return;
    }

    No* aux = comeco;
    for (int i = 1; i < posicao; i++) {
        aux = aux->proximo;
    }
    aux->conteudo = novoValor;
}

void ListaEncadeada::inserirElemento(int posicao, int conteudo) {
    if (posicao < 1 || posicao > tamanho + 1) {
        std::cerr << "Posicao invalida.\n";
        return;
    }

    No* novoNo = new No{conteudo, nullptr};

    if (posicao == 1) {
        novoNo->proximo = comeco;
        comeco = novoNo;
    } else {
        No* aux = comeco;
        for (int i = 1; i < posicao - 1; i++) {
            aux = aux->proximo;
        }
        novoNo->proximo = aux->proximo;
        aux->proximo = novoNo;
    }

    tamanho++;
}

void ListaEncadeada::retirarElemento(int posicao) {
    if (posicao < 1 || posicao > tamanho) {
        std::cerr << "Posicao invalida.\n";
        return;
    }

    No* aux = comeco;

    if (posicao == 1) {
        comeco = aux->proximo;
        delete aux;
    } else {
        No* anterior = nullptr;
        for (int i = 1; i < posicao; i++) {
            anterior = aux;
            aux = aux->proximo;
        }
        anterior->proximo = aux->proximo;
        delete aux;
    }

    tamanho--;
}

void ListaEncadeada::imprimirLista() const {
    No* aux = comeco;
    std::cout << "Lista:\n";
    for (int i = 1; aux != nullptr; i++) {
        std::cout << i << " elemento: " << aux->conteudo << "\n";
        aux = aux->proximo;
    }
}
