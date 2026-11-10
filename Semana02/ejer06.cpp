//Crear un programa que almacene 10 números y calcule la suma total.

#include <iostream>
using namespace std;
int main() {

    int numeros[10];
    int suma = 0;
    for (int i = 0; i < 10; i++) {
        cout << "Ingrese el numero " << i + 1 << ": ";
        cin >> numeros[i];
    }
    for (int i = 0; i < 10; i++) {
        suma = suma + numeros[i];
    }
    cout << "La suma total es: " << suma << endl;
  
    return 0;
}