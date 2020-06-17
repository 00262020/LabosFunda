#include "iostream"
#include "stdbool.h"

using namespace std;

bool bisiesto(int);

int main(void){

    int n;
    bool r=0;
    
    cout << endl << "..:: Ano bisiesto ::.." << endl;
    cout << endl << "Ingrese un ano: ";
    cin >> n;

    bisiesto(n);

    r = bisiesto(n);

    if(r == true){
        cout << endl << "SI ES BISIESTO" << endl;
    }else{
        cout << endl << "NO ES BISIESTO" << endl;
    }

    return 0;
}

bool bisiesto (int n){

    int si;

    si = n % 400;
    
    if( n % 4==0 && n % 100 !=0){
        return true;

    }else if (si == 0){
        return true;
        
    }else{
        return false;
    }

}