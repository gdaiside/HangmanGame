#include<fstream>
#include<iostream>
#include "arquivo.hpp"

std::vector<std::string> arquivo(){
    std::ifstream texto;
    texto.open("palavras.txt");

    if(texto.is_open()){   

        int quantidade_palavras;
        texto >> quantidade_palavras;

            std::vector<std::string> palavras_arquivo;

            for(int i = 0; i < quantidade_palavras; i++){
                std::string palavra_lida;
                texto >> palavra_lida;
                palavras_arquivo.push_back(palavra_lida);
            }

            texto.close();
            return palavras_arquivo;
    } else{
        std::cout << "Não foi possível acessar o banco de palavras." << std::endl;
        exit(0);
    }
}