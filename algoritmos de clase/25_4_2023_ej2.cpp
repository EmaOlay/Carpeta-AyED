#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    //declaro variables
    int dia, mes, anio;
    //pido ingreso de datos
    cout << "Ingrese el dia: ";
    cin >> dia;
    cout << "Ingrese el mes: ";
    cin >> mes;
    cout << "Ingrese el anio: ";
    cin >> anio;
    //valido ingreso
    if ( dia<0 || mes<0 || anio<1000 ){//podria validar menor a 0 como los otros pero fiaca de hacer fill y todo eso
        cout << "Numeros frutas";
        return -1;
    }
    if ( dia>31 || mes>12 || anio>9999 ){//podria juntar en un solo if pero fiaca
        cout << "Numeros frutas";
        return -1;
    }
    // Concatenar los números de día, mes y anio para formar el número de 8 dígitos
    int fecha = anio * 10000 + mes * 100 + dia;
    cout << "La fecha en formato AAAAMMDD es: " << fecha << endl;
    // Usando la biblioteca <string> para formatear la fecha
    string fecha_formateada = to_string(anio) +
                  (mes < 10 ? "0" + to_string(mes) : to_string(mes)) +
                  (dia < 10 ? "0" + to_string(dia) : to_string(dia));

    cout << "La fecha en formato AAAAMMDD con string es: " << fecha << endl;
    //Usando la biblioteca <iomanip> para formatear la fecha
    cout<< "La fecha en formato AAAAMMDD como viene es: " << anio << setw(2) << setfill('0') << mes << setw(2) << setfill('0') << dia;
    //return 0 como que se termino correctamente la ejecucion
    return 0;
}
