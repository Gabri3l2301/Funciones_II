#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void generarNumerosAleatorios(int cant, int max) {
    srand(time(0));
    for (int i = 1; i <= cant; ++i) {
        int numeroAleatorio = rand() % (max + 1);
        cout << numeroAleatorio << " ";
    }
}

int main() {
    int cantidad, maximo;
    cout << "Ingrese la cantidad de numeros aleatorios a generar: ";
    cin >> cantidad;
    cout << "Ingrese el valor maximo permitido: ";
    cin >> maximo;
    generarNumerosAleatorios(cantidad, maximo);

    return 0;
}