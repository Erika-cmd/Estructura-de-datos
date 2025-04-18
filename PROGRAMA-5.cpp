#include <iostream>
using namespace std;

int main() {
    double notas[30];
    double suma = 0, prom;
    int contador = 0;
    
    cout << "Ingrese 30 calificaciones:" << endl;
    for(int i = 0; i < 30; i++) {
        cin >> notas[i];
        suma += notas[i];
    }
    
    prom = suma / 30;
    
    for(int i = 0; i < 30; i++)
        if(notas[i] > prom) contador++;
    
    cout << "Promedio: " << prom << endl;
    cout << "Estudiantes arriba del promedio: " << contador << endl;
    
    return 0;
}
