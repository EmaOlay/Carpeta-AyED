/* Tatuense esto si debuggean a mano:
__LINE__
__FILE__
__func__
__DATE__ //Fecha de compilacion
__TIME__ //Hora de compilacion*/

#include <iostream>

using namespace std;
//no acepto argumentos en el main porque me pinto
int main() {
    //Declaro lso dos enteros a ingresar
    int num1, num2;
    //Pido ingreso de datos
    cout << "Ingrese el primer numero entero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero entero: ";
    cin >> num2;
    //Declaro las vars de resultados
    int suma = num1 + num2;
    int resta = num1 - num2;
    int producto = num1 * num2;
    float division = static_cast<float>(num1) / num2;
    if (num2==0) {
        //Aviso del error
        cout << "Division por cero...";
        //Me voy por error
        return -1;
    }
    //Muestro los resultados obtenidos ejemplificando el endl
    cout << "La suma de los numeros es: " << suma << endl;
    cout << "La resta de los numeros es: " << resta << endl;
    cout << "El producto de los numeros es: " << producto << endl;
    cout << "La division de los numeros es: " << division << endl;
    //return 0 como que se termino correctamente la ejecucion
    return 0;
}
