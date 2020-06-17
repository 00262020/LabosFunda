#include "iostream"

int hora(int, int, int);

using namespace std;

int main(void){

    int d, m, a;

    cout << endl << " ..:: FECHA ::.. " << endl;

    cout << endl << "Ingrese el dia (d): ";
    cin >> d;
    cout << endl << "Ingrese el mes (m): ";
    cin >> m;
    cout << endl << "Ingrese el ano (aaaa): ";
    cin >> a;

    hora (d,m,a);

    return 0;
}

int hora(int d, int m, int a){

    int si;

    si = a % 400;

    d = d + 1;
    if (d > 31){
        d = 1;
        m = m + 1;

        if(m > 12){

            m = 1;
            a = a + 1;

        }

    }
    
    if(m==2){

        if( a % 4==0 && a % 100 !=0 ){
            if (d > 29 || d < 1){
                cout << endl << "El dia sumado es incorrecto" << endl;
            }else{
                cout << endl << d << "-Febrero-" << a << endl;
            }
        }else if (si == 0){
            if (d > 29 || d < 1){
                cout << endl << "El dia sumado es incorrecto" << endl;
            }else{
                cout << endl << d << "-Febrero-" << a << endl;
            }
        }else{
            if (d > 28 || d < 1){
                cout << endl << "El dia sumado es incorrecto" << endl;
            }else{
                cout << endl << d << "-Febrero-" << a << endl;
            }
        }
    }
    
    

    if ( d > 31 || d < 1 || m > 12 || a < 0 ){
        cout << endl << "La fecha es incorrecta" << endl;
    }else if(m==1 || m==3 || m==5 || m==7 || m == 8 || m==10 || m==12){
        if ( d > 31 || d < 1 ){
            cout << endl << "El dia sumado es incorrecto" << endl;
        }else {
            switch (m){

                case 1:
                cout << endl << d << "-Enero-" << a << endl;
                break;

                case 3:
                cout << endl << d << "-Marzo-" << a << endl;
                break;

                case 5:
                cout << endl << d << "-Mayo-" << a << endl;
                break;

                case 7:
                cout << endl << d << "-Julio-" << a << endl;
                break;

                case 8:
                cout << endl << d << "-Agosto-" << a << endl;
                break;

                case 10:
                cout << endl << d << "-Octubre-" << a << endl;
                break;

                case 12:
                cout << endl << d << "-Diciembre-" << a << endl;
                break;

                default:
                break;

            }
        }
    }else if ( m==4 || m==6 || m==9 || m==11 ){

        switch (m){

                case 4:
                cout << endl << d << "-Abril-" << a << endl;
                break;

                case 6:
                cout << endl << d << "-Junio-" << a << endl;
                break;

                case 9:
                cout << endl << d << "-Septiembre-" << a << endl;
                break;

                case 11:
                cout << endl << d << "-Noviembre-" << a << endl;
                break;

                default:
                break;

            }

    }

} 