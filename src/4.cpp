//POLIMORFISMO
#include <iostream>
using namespace std;

class Forma{
    public:
        float AREA;
        Forma(float area){
            AREA = area;
        }
        void calcularArea(){

        }
};

class Circulo: Forma{
    public:
    float RAIO, PI;
        Circulo(float raio) : Forma(AREA){
            RAIO = raio;
            PI = 3.14;
        }

        void calcularArea(){
            AREA = PI * (RAIO*RAIO);
            cout << "Area do circulo: " << AREA << endl;
        }
};

class Retangulo : Forma {
    public: 
        float BASE, ALTURA;

        Retangulo(float base, float altura) : Forma(AREA){
            BASE = base;
            ALTURA = altura;
        }

        void calcularArea(){
            AREA = BASE * ALTURA;
            cout << "Area do retangulo: " << AREA << endl;
        }
};
int main()
{
    Circulo circulo1(2);
    circulo1.calcularArea();

    Retangulo retangulo1(6, 2);
    retangulo1.calcularArea();
}