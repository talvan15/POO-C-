#include <iostream>
using namespace std;

class Veiculo{
    public:
        string Marca;
        string Modelo;

        Veiculo(string marca, string modelo){
            Marca = marca;
            Modelo = modelo;
        }
        void Exibir(){
            cout << "Marca: " << Marca << "\nModelo: " << Modelo << endl;
        }

};

class Carro : public Veiculo{
    public:
        int qtd_portas;

        Carro(string marca, string modelo, int portas): Veiculo(marca,modelo){
            qtd_portas = portas;
        }

        void Exibir(){
            cout << "Marca: " << Marca << "\nModelo: " << Modelo << "\nPortas: " << qtd_portas << endl;
        }
};
int main()
{
    cout << "Veiculo" << endl;
    Veiculo veiculo1("Mercedes", "Audi M1");
    veiculo1.Exibir();

    cout << "\nCarro" << endl;
    Carro carro1("BMW", "URUS", 4);
    carro1.Exibir();


}