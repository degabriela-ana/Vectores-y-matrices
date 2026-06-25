// EJERCICIO 14:
// Escribir un programa que sume e imprima cada elemento en una matriz de m x n, que forme en ella la letra “N” (como en el bingo)


#include <iostream>
using namespace std;

int main() {
    int m, n;
    cout << "Ingrese numero de filas (m): "; cin >> m;
    cout << "Ingrese numero de columnas (n): "; cin >> n;
    
    int elemento[m][n];
    int sumaN = 0;

    cout << "\nElementos de la Matriz:\n";
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cout << "elemento[" << i << "][" << j << "] = "; 
            cin >> elemento[i][j];
        }
    }

    // Matriz original completa
    cout << "\nSu matriz original es:\n";
    for(int i = 0; i < m; i++) {
        cout << "fila[" << i << "]:\t"; 
        for(int j = 0; j < n; j++) {
            cout << elemento[i][j] << "\t";
        }
        cout << endl;
    }

    // Dibujando SOLO la letra "N" para visualizarla
    cout << "\nVisualizacion de la letra 'N':\n";
    for(int i = 0; i < m; i++) {
        cout << "\t"; // Un pequeño espacio para centrar un poco el dibujo
        for(int j = 0; j < n; j++) {
            if(j == 0 || j == n - 1 || i == j) {
                cout << elemento[i][j] << "\t";
            } else {
                cout << " \t"; // Espacio en blanco si no es parte de la N
            }
        }
        cout << endl;
    }

    // Para capturar los números y sumarlos
    int elementosN[m * n]; // Un vector temporal para guardar los números que forman la N
    int cantidad = 0;

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(j == 0 || j == n - 1 || i == j) {
                elementosN[cantidad++] = elemento[i][j]; // Lo guardamos
                sumaN += elemento[i][j];                 // Lo sumamos
            }
        }
    }

    // Para mostrar qué números se están sumando
    cout << "\nElementos de la letra 'N' a sumar: ";
    for(int i = 0; i < cantidad; i++) {
        cout << elementosN[i];
        if (i < cantidad - 1) cout << " + "; // Imprime el + si no es el último
    }
    cout << endl;
    
    cout << "Suma de elemento que forman la letra 'N': " << sumaN << endl;
    return 0;
}
