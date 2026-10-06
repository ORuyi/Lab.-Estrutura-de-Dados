#include <iostream>

// fstream permite carregar o arquivo na memória.

// sstream é como se fosse um 'getline' na linha inteira da string,
// separando cada conteúdo como se fosse um split do python.

#include <fstream>
#include <sstream>

#define TAM 27

#include "Hash.h"

using namespace std;

int main()
{
    Hash *tabela[TAM], obj;
    int totais[TAM];

    string linha, coluna1, nome, plataforma, genero, ano;
    int pos, i;

    // Para inicializar, vamos colocar os 27 pontos da tabela como NULO.

    for(i = 0; i < TAM; i++) {
        tabela[i] = NULL;
        totais[i] = 0;
    }

    // Passo 2: Carregando o arquivo

    ifstream arquivo("VideoGames.csv");
    if (!arquivo.is_open()) {
        cout << "Erro ao abrir arquivo!\n"; // Caso não consiga abrir o arquivo
        return 1;
    }

    getline(arquivo, linha);

    while (getline(arquivo, linha)) {
        stringstream ss(linha); // Isso é a variável da linha, abaixo vamos quebrá-la em diferentes variáveis
        getline (ss, coluna1, ','); // O 'split' que vai permitir quebrar a string. Os parâmetros são: A linha, a variavel que vai ser atribuida e o caractére de separação
        getline(ss, nome, ',');
        getline(ss, plataforma, ',');
        getline(ss, ano, ',');
        getline(ss, genero, ',');

        pos = obj.funcao_hashing(genero);
        obj.Inserir(tabela, pos, nome, plataforma, genero, ano);
        totais[pos]++;
    }

    arquivo.close();
    cout << "\n:------------Tabela Hash Carregada------------:\n";
    obj.mostrar_hash(tabela, totais, TAM);



    return 0;
}
