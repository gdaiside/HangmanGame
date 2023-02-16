#include<vector>
#include <ctime>
#include "arquivo.hpp"

 std::string sorteia(){
    std::vector<std::string> palavras = arquivo();

    std::srand(time(NULL));
    
    int sorteado = std::rand() % palavras.size();

    return palavras[sorteado];
}