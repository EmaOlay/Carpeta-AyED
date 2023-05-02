#include <iostream>

using namespace std;

int main() {
    //declaro variables
    char numero[4];
    //pido ingreso de datos
    cout << "Ingrese el numero entre 1000 y 9999: ";
    cin >> numero;
    for(int i =0;i<4;i++){
        cout<<numero[i]<<endl;
    }
    return 0;
}