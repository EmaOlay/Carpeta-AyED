#include <iostream>

using namespace std;

int main() {
    //declaro variables
    int numero;
    //pido ingreso de datos
    cout << "Ingrese la edad: ";
    cin >> numero;
    //ejemplo con if else
    if(numero<0){
        cout<< "Una edad no puede ser negativa"<<endl;
        return -1;
    }
    if(numero<=12){
        cout<< "Menor"<<endl;
    }else if (numero >=13 && numero <=18){
        cout<< "Cadete"<<endl;
    }else if (numero >18 && numero <26){
        cout<< "Juvenil"<<endl;
    }else if (numero >=26){
        cout<< "Mayor"<<endl;
    }
    return 0;
}