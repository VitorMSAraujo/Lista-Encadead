# Lista Encadeada em C++

Este repositório contém uma implementação de uma **Lista Encadeada Simples** em C++, utilizando **orientação a objetos**.  
O código inclui uma classe `ListaEncadeada`, testes automatizados e um **Makefile** para facilitar a compilação e execução.

---

## 🛠️ **Funcionalidades**
✔️ Criar uma lista vazia  
✔️ Verificar se a lista está vazia  
✔️ Obter o tamanho da lista  
✔️ Obter e modificar elementos em uma posição específica  
✔️ Inserir um elemento em uma posição específica  
✔️ Remover um elemento de uma posição específica  
✔️ Imprimir todos os elementos da lista  

---

## 💁️ **Estrutura do Projeto**
```
📂 lista_encadeada/
├── 📝 lista_encadeada.hpp    # Declaração da classe ListaEncadeada
├── 📝 lista_encadeada.cpp    # Implementação da classe ListaEncadeada
├── 📝 main.cpp               # Programa principal que utiliza a lista
├── 📝 testa_lista.cpp        # Arquivo de testes automatizados
├── 📝 Makefile               # Arquivo para compilar e executar o código
└── 📝 README.md              # Documentação do projeto
```

---

## 🚀 **Compilação e Execução**
O projeto inclui um **Makefile** para facilitar a compilação.  
Para usá-lo, basta rodar os comandos abaixo no terminal:

### **1️⃣ Compilar e rodar o programa principal**
```bash
make run
```
🔹 Isso compila os arquivos `lista_encadeada.cpp` e `main.cpp`, gerando o executável `programa` e rodando-o automaticamente.

---

### **2️⃣ Executar os testes automatizados**
```bash
make test
```
🔹 Isso compila e executa `testa_lista.cpp`, garantindo que todas as funcionalidades da lista estão corretas.

---

### **3️⃣ Limpar arquivos compilados**
```bash
make clean
```
🔹 Remove os arquivos executáveis (`programa` e `testes`), deixando o diretório limpo.

---

## 📌 **Exemplo de Uso**
Aqui está um exemplo básico de como usar a lista encadeada:

```cpp
#include "lista_encadeada.hpp"

int main() {
    ListaEncadeada lista;

    lista.inserirElemento(1, 10);
    lista.inserirElemento(2, 20);
    lista.inserirElemento(2, 30);

    lista.imprimirLista();

    lista.retirarElemento(1);
    lista.imprimirLista();

    return 0;
}
```

Saída esperada:
```
Lista:
1 elemento: 10
2 elemento: 30
3 elemento: 20

Lista:
1 elemento: 30
2 elemento: 20
```

---

