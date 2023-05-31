/* Tatuense esto si debuggean a mano:
__LINE__
__FILE__
__func__
__DATE__ //Fecha de compilacion
__TIME__ //Hora de compilacion*/

#include <iostream>

// 1.	Desarrollar una función que reciba tres enteros de un digito
//  (Unidad, Decena, Centena)
//  en el rango [0..9] y retorne un entero de tres dígitos con la forma CDU.
//  Por ejemplo: Desarrolle un programa principal con invocaciones  a la funcion
// Que permita demostrar la propiedad de la reusabilidad

int my_func (int uni, int dec, int cent){
    return (cent*100 + dec * 10 + uni);
}

using namespace std;

//no acepto argumentos en el main 
int main() {
    int a,b,c,d=2,e=3,f=4;
    cout<< "Ingrese uni"<<endl;
    cin>>a;
    cout<< "Ingrese dec"<<endl;
    cin>>b;
    cout<< "Ingrese cent"<<endl;
    cin>>c;
    cout<<my_func(a,b,c)<<endl;
    cout<<my_func(3,4,5)<<endl;
    cout<<my_func(d,e,f)<<endl;
    //return 0 como que se termino correctamente la ejecucion
    return 0;
}