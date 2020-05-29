#include "iostream"

using namespace std;

int main(void){

    int x;

    cout << endl << "Ingrese numero: ";
    cin>>x;

    if( x % 2 == 0){

        cout << endl << "El numero es par" << endl;

    }else{
        
        cout << endl << "El numero es impar" << endl;
    }

    return 0;

}