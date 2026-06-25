// EJERCICIO 12:
// Escribir un programa que sume los elementos de la diagonal que va de derecha a izquierda en una matriz de m x n


#include <iostream>
using namespace std;

int main() {
    int m, n;
    cout << "Ingrese numero de filas (m): "; cin >> m;
    cout << "Ingrese numero de columnas (n): "; cin >> n;
    
    int elemento[m][n];

    cout << "\nElementos de la Matriz\n";
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cout << "elemento[" << i << "][" << j << "] = ";
            cin >> elemento[i][j];
        }
    }

    // Matriz ingresada
    cout << "\nSu matriz es:\n";
    for(int i = 0; i < m; i++) {
        cout << "fila[" << i << "]:\t"; 
        for(int j = 0; j < n; j++) {
            cout << elemento[i][j] << "\t";
        }
        cout << endl;
    }

    // Para mostrar números y calcular suma
    int sumaDiagonal = 0; 
    int limite = (m < n) ? m : n;

    cout << "\nElementos de la diagonal secundaria: ";
    for(int i = 0; i < limite; i++) {
        cout << elemento[i][n - 1 - i]; // Imprime el número actual
        
        if (i < limite - 1) {
            cout << " + "; // Imprime el símbolo "+" si no es el último número
        }
        
        sumaDiagonal += elemento[i][n - 1 - i];
    }
    
    cout << "\nSuma de la diagonal secundaria: " << sumaDiagonal << endl;
    
    return 0;
}

