#include "iostream"

int calcular(int, int);

using namespace std;

int main(void){

    int a, b;

    cout << endl << "Ingrese el primer numero: ";
    cin >> a;
    cout << endl << "Ingrese el segundo numero: ";
    cin >> b;

    cout << endl << "El MCD es: " << calcular(a,b) << endl;

    return 0;
}

int calcular(int a, int b){

    if(a == 0){
        return b;
    }
    return calcular( b % a, a );

} 