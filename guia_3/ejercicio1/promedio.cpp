#include "iostream"

using namespace std;

int main(void){

    int num1, num2, num3, prom;

    cout << endl << "**PROMEDIO**" << endl;

    cout << "Ingrese el numero 1: ";
    cin >> num1;
    cout << endl << "Ingrese el numero 2: ";
    cin >> num2;
    cout << endl <<"Ingrese el numero 3: ";
    cin >> num3;

    prom = (num1+num2+num3)/3;

    cout << endl << "El promedio de los 3 numeros ingresados es: " << prom << endl;

    return 0;

}