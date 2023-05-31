/* Tatuense esto si debuggean a mano:
__LINE__
__FILE__
__func__
__DATE__ //Fecha de compilacion
__TIME__ //Hora de compilacion*/

#include <iostream>

// 5.	Desarrollar una función que dados tres valores enteros que representan
//  la fecha de nacimiento de una persona retorne un entero único con la fecha
//   con formato AAAAMMDD.
// Hacer un programa que dada la fecha de nacimiento de dos personas diga
// cual es mayor
using namespace std;

int formatNacimiento(int ano,int mes,int dia){
    return (ano*10000+mes*100+dia);
}

//no acepto argumentos en el main 
int main() {
    int a,b,c,d,e,f;
    cout<< "Ingrese año de Juan"<<endl;
    cin>>a;
    cout<< "Ingrese mes de Juan"<<endl;
    cin>>b;
    cout<< "Ingrese dia de Juan"<<endl;
    cin>>c;
    cout<< "Ingrese año de Pedro"<<endl;
    cin>>d;
    cout<< "Ingrese mes de Pedro"<<endl;
    cin>>e;
    cout<< "Ingrese dia de Pedro"<<endl;
    cin>>f;
    // cout<<"dia formateado = "<< formatNacimiento(a,b,c)<<endl;
    //2000 10 06
    //1900 10 06
    // int aux = formatNacimiento(a,b,c)-formatNacimiento(d,e,f);
    int EdadJuan = formatNacimiento(a,b,c);
    int EdadPedro = formatNacimiento(d,e,f);
    if(EdadJuan<EdadPedro){
        cout<<"Juan es mas grande"<<endl;
    }else if (EdadJuan>EdadPedro){
        cout<<"Pedro es mas grande"<<endl;
    }else{
        cout<<"Nacieron el mismo dia"<<endl;
    }
    //return 0 como que se termino correctamente la ejecucion
    return 0;
}