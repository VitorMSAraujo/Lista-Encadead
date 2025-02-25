#ifndef LISTA_ENCADEADA_HPP
#define LISTA_ENCADEADA_HPP

#include <iostream>

class ListaEncadeada {
private:
    struct No {
        int conteudo;
        No* proximo;
    };

    No* comeco;
    int tamanho;

public:
    ListaEncadeada();  
    ~ListaEncadeada();  

    bool estaVazia() const;
    int obterTamanho() const;
    int obterValor(int posicao) const;
    void modificarElemento(int posicao, int novoValor);
    void inserirElemento(int posicao, int conteudo);
    void retirarElemento(int posicao);
    void imprimirLista() const;
};

#endif