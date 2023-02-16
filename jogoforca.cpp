#include <iostream>
#include <string>
#include <map>
#include <vector>
#include "errou.hpp"
#include "letra_existe.hpp"
#include "abertura.hpp"
#include "erros.hpp"
#include "mostra_palavra.hpp"
#include "chuta.hpp"
#include "arquivo.hpp"
#include "sorteia.hpp"
#include "salva_arquivo.hpp"
#include "adiciona_palavra.hpp"
using namespace std;

static string palavra_secreta;
static map<char, bool> chutou;
static vector<char> chutes_errados; 


int main(){

    abertura();

    palavra_secreta = sorteia();

    while(errou(palavra_secreta, chutou) && chutes_errados.size() < 5){

        erros(chutes_errados);

        mostra_palavra(palavra_secreta, chutou);        

        chuta(chutou, chutes_errados);

    }

    cout << "Fim de jogo!" << endl;

    if(errou(palavra_secreta, chutou)){
        cout << "Que pena, você perdeu! Jogue mais uma vez." << endl;
        cout << "A palavra era: " << palavra_secreta << ", mas não conta para ninguém!" << endl;
    } else{
        cout << "Parabéns,você ganhou! Jogue mais uma vez para ver se você ganha de novo." << endl;
        cout << "Você quer adicionar uma nova palavra ao nosso banco de palavras? (S/N) ";
        char resposta;
        cin >> resposta;
        if(resposta == 'S'){
            adiciona_palavra();
        }
    }

    cin.get();
}



