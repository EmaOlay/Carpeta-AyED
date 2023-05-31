//Desarrollar una funcion que reciba como aprametros
// Los aldos de un rectangulo y retorne la superficie y el perimetro

#include <iostream>
using namespace std;

struct tipo_registro {
    int superficie;
    int perimetro;
};

tipo_registro miFunci(int lado1,int lado2){
    tipo_registro aux;
    aux.superficie = lado1 * lado2;
    aux.perimetro = lado1*2 + lado2*2;
    return (aux);
}

int main(void) {
    tipo_registro b;
    b = miFunci(1,2);
    cout<< "La sueprcifie es: " << b.superficie << " m2"<< endl;
    cout<< "El perimetro es: " << b.perimetro << " m" << endl;
    return 0;
}