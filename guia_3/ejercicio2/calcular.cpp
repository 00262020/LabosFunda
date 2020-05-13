#include "iostream"
#include "cmath"

using namespace std;

int main(void){

    double radio, pe, area;

    cout << endl << "Ingrese el radio del circulo: ";
    cin >> radio;

    area = M_PI * pow(radio, 2);

    pe = 2 * M_PI * radio;

    cout << endl << "El area del circulo es: " << area;
    cout << endl << "El perimetro del circulo es: " << pe << endl;

    return 0;

}