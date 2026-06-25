// EJERCICIO 8:
// Escribir un programa que busque el menor y el mayor elemento ingresado en una matriz de m x n

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
            cout << "elemento[" << i << "][" << j << "] = ";
            cin >> elemento[i][j];
        }
    }

    // La matriz ingresada:
    cout << "\nSu matriz es:\n";
    for(int i = 0; i < m; i++) {
        cout << "fila[" << i << "]:\t"; 
        for(int j = 0; j < n; j++) {
            cout << elemento[i][j] << "\t";
        }
        cout << endl; 
    }

    // Hallando el menor y mayor elemento:
    int minimo = elemento[0][0];
    int maximo = elemento[0][0];

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(elemento[i][j] < minimo) minimo = elemento[i][j];
            if(elemento[i][j] > maximo) maximo = elemento[i][j];
        }
    }
    
    cout << "\nResultados:\n";
    cout << "\nElemento Minimo: " << minimo << " | Elemento Maximo: " << maximo << endl;
    return 0;
}
