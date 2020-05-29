#include "iostream"

using namespace std;

int main(void){

    int x;

    cout << endl << "Ingrese numero: ";
    cin>>x;

    if( x > 0 ){
        cout << endl << "El numero es positivo" << endl;
    }else if( x < 0){
        cout << endl << "El numero es negativo" << endl;
    }else{
        cout << endl << "El numero es cero" << endl;
    }
    
    return 0;

}