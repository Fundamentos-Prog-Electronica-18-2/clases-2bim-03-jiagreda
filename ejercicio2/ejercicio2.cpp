#include <iostream>

using namespace std;

int main()
{
    int bimestre1[] = {19, 15, 16, 17};
    int bimestre2[] = {10, 15, 20, 10};
    string nombre[] = {"Luis", "Maria", "Jose", "Ana"};
    int suma = 0;

    for (int i = 0; i < 4; i++)
    {
            suma = bimestre1[i] + bimestre2[i];
            cout << nombre[i] << " tiene una calificacion final de " << suma << endl;
    }

    return 0;
}
