// EJERCICIO 10:
// Escribir un programa que sume los elementos de cada columna de una matriz de mx n



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

    // La matriz ingresada
    cout << "\nSu matriz es:\n";
    for(int i = 0; i < m; i++) {
        cout << "fila[" << i << "]:\t"; 
        for(int j = 0; j < n; j++) {
            cout << elemento[i][j] << "\t";
        }
        cout << endl;
    }

    // Calculando las sumas
    cout << "\nSUMA POR COLUMNAS\n" << endl;
    for(int j = 0; j < n; j++) {
        int sumaColumna = 0;
        for(int i = 0; i < m; i++) {
            sumaColumna += elemento[i][j];
        }
        cout << "Suma de la columna[" << j << "]: " << sumaColumna << endl;
    }
    
    return 0;
}
