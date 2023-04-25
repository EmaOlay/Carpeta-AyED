/* Tatuense esto si debuggean a mano:
__LINE__
__FILE__
__func__
__DATE__ //Fecha de compilacion
__TIME__ //Hora de compilacion*/

#include <iostream>

using namespace std;

void Script18_4_2023(){
    cout << "Script de clase del 18/4/2023" << endl;
}

void calculos(int arr[], int cant) {
    int cant_zeros = 0;
    int cant_positivos = 0;
    int sum_positivos = 0;
    int sum_negativos = 0;
    
    for (int i = 0; i < cant; i++) {
        if (arr[i] == 0) {
            cant_zeros++;
        } else if (arr[i] > 0) {
            cant_positivos++;
            sum_positivos += arr[i];
        } else {
            sum_negativos += arr[i];
        }
    }
    
    double prom_positivos = 0.0;
    if (cant_positivos > 0) {
        prom_positivos = static_cast<double>(sum_positivos) / cant_positivos;
    }
    
    cout << "cant_zeros: " << cant_zeros << endl;
    cout << "prom_positivos: " << prom_positivos << endl;
    cout << "sum_negativos: " << sum_negativos << endl;
}

void cant_triangulos(float arr[],int cant){
    int cant_equi = 0;
    int cant_iso = 0;
    int cant_esca = 0;
    if(cant%3!=0) return;
    for (int i =0;i<cant;i+=3){
        if(arr[i]==arr[i+1] && arr[i+1]==arr[i+2]){
            cant_equi+=1;
        }else if(arr[i]==arr[i+1] || arr[i+1]==arr[i+2] || arr[i]==arr[i+2]){//creo que esta bien
            cant_iso+=1;
        }else{
            cant_esca+=1;
        }
    }
    cout << "cant_equi: " << cant_equi << endl;
    cout << "cant_iso: " << cant_iso << endl;
    cout << "cant_esca: " << cant_esca << endl;
}

int main() {
    Script18_4_2023();
    //Ejemplo de operador ternario
    int Fruta=1;
    (Fruta) ? cout << "True" << endl : cout << "False" << endl;
    Fruta=0;
    (Fruta) ? cout << "True" << endl : cout << "False" << endl;
    int arreglo[6]={-1,0,-1,1,1,1};
    int N = sizeof(arreglo) / sizeof(arreglo[0]);
    calculos(arreglo,N);
    float arreglo_tri[9]={1.0,1.0,1.0,2.0,2.0,1.0,7.2,4.5,9.8};//Supongo que se pueden hacer triangulos
    int N_tri = sizeof(arreglo_tri) / sizeof(arreglo_tri[0]);
    cant_triangulos(arreglo_tri,N_tri);
    return 0;
}
