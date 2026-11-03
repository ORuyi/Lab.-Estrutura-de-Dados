#include "Pilha.h"

void Pilha::Inserir(int N) {
    elementos.push_back(N);
}

void Pilha::Remover() {
    if (!elementos.empty()) {
        elementos.pop_back();
    }
}

void Pilha::Mostrar() const {
    // Usando const_reverse_iterator para exibir do topo para a base
    for (std::vector<int>::const_reverse_iterator it = elementos.rbegin(); it != elementos.rend(); ++it) {
        std::cout << *it << " * ";
    }
    std::cout << "\n";
}

void Pilha::Inverter() const {
    for (std::vector<int>::const_iterator it = elementos.begin(); it != elementos.end(); ++it) {
        std::cout << *it << " * ";
    }
    std::cout << "\n";

}

int Pilha::Somar() const {
    // A função accumulate requer a biblioteca <numeric>
    return accumulate(elementos.begin(), elementos.end(), 0);
}

bool Pilha::Vazia() const {
    return elementos.empty();
}
