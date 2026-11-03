#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

class Pilha {
private:
    std::vector<int> elementos;

public:
    void Inserir(int N);
    void Remover();
    void Mostrar() const;
    int Somar() const;
    bool Vazia() const;
    void Inverter() const;
};
