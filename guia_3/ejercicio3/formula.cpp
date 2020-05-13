#include "iostream"
#include "cmath"

using namespace std;

int main(void){

    int a, b, c;
    double raiz, x1, x2;

    cout << endl << "Ingrese el valor de 'a': ";
    cin >> a;
    cout << endl << "Ingrese el valor de 'b': ";
    cin >> b;
    cout << endl << "Ingrese el valor de 'c': ";
    cin >> c;

    raiz = pow(b, 2) - 4*(a*c);

    if(raiz < 0){
        cout << endl << "La ecuacion no se encuentra dentro de los reales" << endl;
    }else{
        x1 = (-b+sqrt(raiz))/(2*a);
        x2 = (-b-sqrt(raiz))/(2*a);

        cout << endl << "La primera solucion 'X1' es: " << x1;
        cout << endl << "La segunda solucion 'X2' es: " << x2 << endl;
    }

    return 0;

}