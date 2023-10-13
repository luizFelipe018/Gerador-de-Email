#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int gerarNumeroAleatorio() {
    return rand() % 10;  
}

int main() {
    srand(static_cast<unsigned>(time(NULL)));

    string numerosGerados , nome ,sobrenome;

    cout<<"Digite o  nome: ";
    cin>>nome;

    cout<<"Digite o  sobrenome: ";
    cin>>sobrenome;

    for (int i = 0; i <  6; i++) {
        int numero = gerarNumeroAleatorio();
        numerosGerados += to_string(numero);
    }
    


    cout<< nome <<sobrenome <<numerosGerados <<"@gmail.com" ;

    return 0;

}