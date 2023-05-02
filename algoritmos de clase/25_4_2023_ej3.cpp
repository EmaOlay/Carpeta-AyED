#include <iostream>

using namespace std;

/*Dado un nnumero real que representa el importe de una compra informar por pantalla las 
posibles formas de pago, segun la siguiente tabla:
1 cuota de $
2 cuotas de $ total $ (5% de recargo)
6 cuotas de $ total $ (30% de recargo)
12 cuotas de $ total $ (50% de recargo)*/
int main() {
    //declaro variables
    float compra;
    //pido ingreso de datos
    cout << "Ingrese el monto de la compra: ";
    cin >> compra;

    /*Verifico que la compra sea por un monto valido*/
    if (compra > 0)
    {
        cout<< "Compra fruta"<<endl;
        return -1;
    }
    //calculo cuotas
    float cuotas_2 = compra * 1.05;
    float cuotas_6 = compra * 1.3;
    float cuotas_12 = compra * 1.5;

    cout << "1 cuota de $ "<< compra << endl;
    cout << "2 cuotas de $ "<< cuotas_2/2 << " total $ " << cuotas_2 << " (5\% de recargo)" << endl;
    cout << "6 cuotas de $ "<< cuotas_6/6 << " total $ " << cuotas_6 << " (30\% de recargo)" << endl;
    cout << "12 cuotas de $ "<< cuotas_12/12 << " total $ " << cuotas_12 << " (50\% de recargo)" << endl;
    return 0;
}