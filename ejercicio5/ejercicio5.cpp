#include <iostream>

using namespace std;

string obtenerData(int a, int b, string c){
    string data = "";
    double promedio = (a + b)/2;
    if (promedio >= 0 && promedio<= 10){
        data = c +" tiene un promedio insuficiente"+ "\n";
    }else{
        if (promedio >= 10.1 && promedio <= 14){
                data = c +" tiene un promedio regular"+ "\n";
        }else{
            if (promedio >= 14.1 && promedio<= 16){
            data = c +" tiene un promedio bueno"+ "\n";
            }else{
                if (promedio >= 16.1 && promedio<= 18.5){
                data = c +" tiene un promedio muy bueno"+ "\n";
                }else{
                    if (promedio >= 18.6 && promedio<= 20){
                    data = c +" tiene un promedio muy bueno" + "\n";
                    }
                }
            }
        }
    }
    return data;
}

int main()
{
    int bimestre1[] = {20, 15, 16, 19};
    int bimestre2[] = {20, 18, 10, 10};
    string nombres[] = {"Alex", "Monica", "Alexander", "Sandra"};

    for(int i = 0; i<4; i++){
        string data = obtenerData(bimestre1[i], bimestre2[i], nombres[i]);
        cout << data;
    }
    return 0;
}
