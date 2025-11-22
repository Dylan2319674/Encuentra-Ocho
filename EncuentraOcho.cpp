#include <iostream>
using namespace std;

int main() {
    // Solicitar el número de elementos que se van a leer
    int n;
    cin >> n;

    // Variable para contar cuántas veces aparece el número 8
    int contador = 0;

    // Leer cada número ingresado por el usuario
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        // Si el número leído es un 8, aumentamos el contador
        if (x == 8) {
            contador++;
        }
    }

    // Mostrar cuántos números 8 se encontraron
    cout << contador;

    // Fin del programa
    return 0;
}
