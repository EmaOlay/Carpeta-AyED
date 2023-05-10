#include <iostream>

using namespace std;

int main()
{
    // declaro variables
    short int infra_id;
    float multa = 0, multa_L = 0, multa_M = 0, multa_G = 0;
    char gravedad_infra;
    int clausurar = 0;
    for (int i = 0; i < 10; i++)
    {
        // pido ingreso de datos
        cout << "Ingrese infra_id: ";
        cin >> infra_id;
        // valido dato
        if (infra_id < 0 || infra_id > 4)
        {
            cout << "infra_id Fruta" << endl;
            i--; // Le pifie entonces agrego una vuelta
            continue;
        }
        // pido ingreso de datos
        cout << "Ingrese multa: ";
        cin >> multa;
        // valido dato
        if (multa < 0)
        {
            cout << "multa Fruta" << endl;
            i--; // Le pifie entonces agrego una vuelta
            continue;
        }
        // pido ingreso de datos
        cout << "Ingrese gravedad_infra: ";
        cin >> gravedad_infra;
        // valido dato y sumo
        if ((infra_id == 3 || infra_id == 4) && gravedad_infra == 'G')
            clausurar += 1;
        if (gravedad_infra == 'L')
        {
            multa_L += multa;
        }
        else
        {
            if (gravedad_infra == 'M')
            {
                multa_M += multa;
            }
            else
            {
                if (gravedad_infra == 'G')
                {
                    multa_G += multa;
                }
                else
                {
                    cout << "Letra Fruta" << endl;
                    i--; // Le pifie entonces agrego una vuelta
                    continue;
                }
            }
        }
    }
    cout << "El total de la multa M= " << multa_M << endl;
    cout << "El total de la multa G= " << multa_G << endl;
    cout << "El total de la multa L= " << multa_L << endl;
    if (clausurar > 3)
    {
        cout << "Clausurar Fabrica" << endl;
    }
    return 0;
}