#include "iostream"

using namespace std;

int main(void){

    int numero1, numero2, resultado;

    cout << endl << "Ingrese numero 1: ";
    cin>>numero1;
    cout << endl << "Ingrese numero 2: ";
    cin>>numero2;


    if(numero1 % numero2 == 0){

        cout << endl << "Los numeros son divisibles entre si" << endl; 

    }else{

        cout << endl << "Los numeros no son divisibles entre si" << endl; 

    }

    return 0;

}