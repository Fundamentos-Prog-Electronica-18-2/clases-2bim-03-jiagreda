#include <iostream>

using namespace std;

int main()
{
    int promedios[] = {19, 15, 16, 17};
    string nombre[] = {"Luis", "Maria", "Jose", "Ana"};

    for (int i = 0; i < 4; i++)
    {
            cout << nombre[i] << " tiene una calificacion de " << promedios[i] << endl;
    }

    return 0;
}

