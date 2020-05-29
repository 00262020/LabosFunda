#include "iostream"
#include "string"

using namespace std;

int main(void){

    string palabra;
    int longi;

    cout << endl << "Ingrese palabra: ";
    cin>>palabra;

    string cad = palabra.substr(0,1);
    //string cad2 = palabra.find('\0'-1);


    cout << "es: " << cad << " y " << palabra.find(palabra); 

    return 0;

}