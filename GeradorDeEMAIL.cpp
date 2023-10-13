#include <iostream>
#include <cstdlib>
#include <ctime>
#include <map>
using namespace std;

int gerarNumeroAleatorio() {
    return rand() % 10;
}

int main() {
    srand(static_cast<unsigned>(time(NULL)));

    map<int, string> lista_de_valores;
    lista_de_valores[1] = "gmail.com";
    lista_de_valores[2] = "hotmail.com";
    lista_de_valores[3] = "yahoo.com";
    lista_de_valores[4] = "Outlook.com";

    string numerosGerados, nome, sobrenome;
    int escolhaDominio;

    cout << "=======================================================================================" << endl;
    cout << "Digite o nome: ";
    cin >> nome;
    cout << "Digite o sobrenome: ";
    cin >> sobrenome;
    
    cout<<endl;

    cout << "Escolha o dominio"<<endl<<"[1]gmail.com"<<endl<<"[2]hotmail.com"<<endl<<"[3]yahoo.com"<<endl<<"[4]Outlook.com"<<endl;
    cout<<endl;
    cout<<"Digite o valor do dominio: ";
    cin >> escolhaDominio;

        if (lista_de_valores.find(escolhaDominio) != lista_de_valores.end()) {
            string dominio = lista_de_valores[escolhaDominio];

            for (int i = 0; i < 6; i++) {
                int numero = gerarNumeroAleatorio();
                numerosGerados += to_string(numero);
            }

        cout << endl << "Email Gerado:" << endl << endl;
        cout << nome << sobrenome << numerosGerados << "@" << dominio << endl << endl;
            }else{
                cout << "Domínio inválido. Escolha um domínio válido." << endl;
            }

    cout << "=======================================================================================";

    return 0;
}
