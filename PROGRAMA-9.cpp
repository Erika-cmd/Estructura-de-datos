#include <iostream>
using namespace std;

int main() {
    int a1[10];
    int a2[10];
    int iguales = 0;
    
    cout << "Ingrese 10 números para el primer arreglo:" << endl;
    for(int i = 0; i < 10; i++)
        cin >> a1[i];
    
    cout << "Ingrese 10 números para el segundo arreglo:" << endl;
    for(int i = 0; i < 10; i++)
        cin >> a2[i];
    
    for(int i = 0; i < 10; i++)
        if(a1[i] == a2[i]) iguales++;
    
    cout << "Elementos iguales en misma posición: " << iguales << endl;
    
    return 0;
}