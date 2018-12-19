#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    int valores[4]; // arreglo de enteros, para 4 posiciones
    valores[0] = 20;
    valores[1] = 30;
    valores[2] = 40;
    valores[3] = 50;
    double promedio = 0;
    int suma = 0;
    cout << valores <<endl;

    for(int i = 0; i<=3; i++){
        suma = suma + valores[i];
        cout << valores[i] <<endl;
    }
    promedio = suma / 4;
    cout << "El promedio es: " << promedio << endl;
    return 0;
}
