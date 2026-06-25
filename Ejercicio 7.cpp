// EJERCICIO 7:
// Escribir un programa que devuelva el máximo de los elementos de un vector.


#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese el tamano del vector: ";
    cin >> n;
    
    float numero[n];
    
    cout << "\nVECTOR:\n";
    // Pedimos el primer dato y lo asumimos como el maximo
    cout << "numero[0] = "; 
    cin >> numero[0];
    
    float maximo = numero[0];

    for(int i = 1; i < n; i++) {
        cout << "numero[" << i << "] = "; 
        cin >> numero[i];
        
        if(numero[i] > maximo) {
            maximo = numero[i];
        }
    }
    
    cout << "\nEl mayor elemento es: " << maximo << endl;
    return 0;
}

