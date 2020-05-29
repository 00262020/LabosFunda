#include "iostream"
#include "string.h"

using namespace std;

int main(void){

    char palabra[50];
    int longi;

    cout << endl << "Ingrese palabra: ";
    cin.getline(palabra, 50, '\n');

   longi = strlen(palabra);

    cout << endl << "longitud: " << longi << endl;

    if(longi>=10){
        cout << "La palabra tiene 10 o mas caracteres";
    }else{
        cout << "La palabra tiene menos de 10 caracteres";
    }
    
    if(longi%2==0){
        cout << endl << "El numero es par" << endl;

    }else{
        
        cout << endl << "El numero es impar" << endl;
    }

    return 0;

}