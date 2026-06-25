// EJERCICIO 9:
// Escribir un programa que sume los elementos de cada fila de una matriz de m x n


#include <iostream>
using namespace std;

int main() {
    int m, n;
    cout << "Ingrese numero de filas (m): "; cin >> m;
    cout << "Ingrese numero de columnas (n): "; cin >> n;
    
    int elemento[m][n];

    cout << "\nElementos de la Matriz:\n";
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cout << "Elemento[" << i << "][" << j << "] = ";
            cin >> elemento[i][j];
        }
    }

    // Matriz ingresada 
    cout << "\nSU MATRIZ ES:\n";
    for(int i = 0; i < m; i++) {
        
        cout << "fila[" << i << "]:\t"; 
        
        for(int j = 0; j < n; j++) {
            cout << elemento[i][j] << "\t"; 
        }
        
        cout << endl; 
    }

    // Calculando las Sumas:
    cout << "\nSUMAS POR FILAS:\n" << endl;
    for(int i = 0; i < m; i++) {
        int sumaFila = 0;
        for(int j = 0; j < n; j++) {
            sumaFila += elemento[i][j];
        }
        cout << "Suma de la fila[" << i << "]: " << sumaFila << endl;
    }
    
    return 0;
}
