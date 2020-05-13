#include "iostream"

using namespace std;

int main(void){

    string nombre;
    double pre, total;
    int cant;

    cout << endl << "Ingrese el nombre del producto: ";
    cin >> nombre;
    cout << endl << "Ingrese el precio del producto: ";
    cin >> pre;
    cout << endl << "cantidad comprada: ";
    cin >> cant;

    total = pre * cant;

    cout << endl << "Producto: " << nombre;
    cout << endl << "Precio: " << pre;
    cout << endl << "Cantidad: " << cant;
    cout << endl << endl << "Total dinero gastado: " << total << endl;

    return 0;

}