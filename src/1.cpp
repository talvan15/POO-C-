//Classe e Objetos
#include <iostream>
using namespace std;

//classe
class pessoa{
    //tipo público
    public:
        //Atributos
        string name;
        int idade;

        //Método construtor
        pessoa(){
            name = "Joao";
            idade = 20;
        }

        //Método
        void exibir(){
            cout <<"Nome: "<< name << endl;
            cout << "Idade: " << idade << endl;
        }

};
int main()
{
    //CRIANDO OBJETO:
    pessoa pessoa1;
    pessoa1.exibir();
}