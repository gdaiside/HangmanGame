#include<string>
#include<vector>
#include<iostream>
#include "arquivo.hpp"
#include "salva_arquivo.hpp"
#include "adiciona_palavra.hpp"

void adiciona_palavra(){
    std::cout << "Digite a nova palavra em letra maiúscula. " << std::endl;
    std::string nova_palavra;
    std::cin >> nova_palavra;

    std::vector<std::string> lista_palavras = arquivo();
    lista_palavras.push_back(nova_palavra);

    salva_arquivo(lista_palavras);
}