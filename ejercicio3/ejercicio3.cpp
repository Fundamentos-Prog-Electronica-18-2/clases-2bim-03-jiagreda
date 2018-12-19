#include <iostream>
#include <sstream>

using namespace std;

string convertir(int v){
    // proceso para convertir un entero a cadena
    stringstream ss;
    ss << v;
    string valor = ss.str();
    return valor;

}

string obtenerData(int a, int b, string c){
    int suma = a + b;
    string data = c +" tiene una calificacion final de " + convertir(suma) + "\n";
    return data;

}

int main()
{
    int bimestre1[] = {19, 15, 16, 17};
    int bimestre2[] = {10, 15, 20, 10};
    string nombre[] = {"Luis", "Maria", "Jose", "Ana"};

    for (int i = 0; i < 4; i++)
    {
            string data = obtenerData(bimestre1[i], bimestre2[i], nombre[i]);
            cout << data;
    }

    return 0;
}
