#include <iostream>
using namespace std;

//CLASSE
class contaBancaria{
    //MÉTODOS PRIVADOS
    private:
        int numeroConta;
        string nome;
        float saldo;
    //MÉTODOS PUBLICOS
    public:
        contaBancaria(string Nome, int NumeroConta, float Saldo){
            numeroConta = NumeroConta;
            nome = Nome;
            saldo = Saldo;
        }
        void depositar(float valor){
            saldo += valor;
        }

        void sacar(float valor){
            if(valor <= saldo) saldo -= valor;
            else cout << "Saldo insuficiete! " << endl;
        }

        void exibir(){
            cout << "Informacoes da conta: " << endl;
            cout << "Numero: "<< numeroConta << endl;
            cout << "Nome: "<< nome << endl;
            cout << "Saldo: "<< saldo << endl;
        }
};

int main()
{
    //OBJETO
    contaBancaria conta1("Talvan", 1234, 20000.00);
    conta1.depositar(200);
    conta1.sacar(3500.00);
    conta1.exibir();


}