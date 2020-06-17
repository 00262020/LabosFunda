#include "iostream"

int hora(int, int, int);

using namespace std;

int main(void){

    int h, m, s;
    char d;

    cout << endl << " ..:: HORA EN FORMATO DE 24 HORAS ::.. " << endl;

    cout << endl << "Ingrese la hora: ";
    cin >> h;
    cout << endl << "Ingrese los minutos: ";
    cin >> m;
    cout << endl << "Ingrese los segundos: ";
    cin >> s;

    hora (h,m,s);

    return 0;
}

int hora(int h, int m, int s){

    s = s + 1;
    if (s >= 60){
        s = 0;
        m = m + 1;

        if(m >= 60){

            m = 0;
            h = h + 1;

            if (h >= 24 ){

                h = 0;

            }

        }

    }

    cout << endl ;
    cout << "Hora: " ;
    if ( h < 10) cout << "0";
    cout << h ;
    cout << ":" ;
    if( m < 10 ) cout << "0";
    cout << m ;
    cout << ":" ;
    if( s < 10 ) cout << "0";
    cout << s;
    cout << endl;

} 