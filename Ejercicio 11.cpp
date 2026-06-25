// EJERCICIO 11:
// Escribir un programa que sume los elementos de la diagonal que va de izquierda a derecha en una matriz de m x n

#include <iostream>
using namespace std;

int main() {
    int m, n;
    cout << "Ingrese numero de filas (m): "; cin >> m;
    cout << "Ingrese numero de columnas (n): "; cin >> n;
    
    int elemento[m][n];

    cout << "\nElementos de la diagonal\n";
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cout << "Elemento[" << i << "][" << j << "] = ";
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

    // Mostrar los números y calcular suma
    int sumaDiagonal = 0; 
    
    // Calculamos el límite (la diagonal termina cuando se acaban las filas o las columnas)
    int limite = (m < n) ? m : n; 

    cout << "\nElementos de la diagonal principal: ";
    for(int i = 0; i < limite; i++) {
        cout << elemento[i][i]; // Imprime el número actual de la diagonal
        
        if (i < limite - 1) {
            cout << " + "; // Imprime el símbolo "+" si no es el último número
        }
        
        sumaDiagonal += elemento[i][i];
    }
    
    cout << "\nSuma de la diagonal principal: " << sumaDiagonal << endl;
    
    return 0;
}
