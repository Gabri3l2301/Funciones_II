#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void jugarRonda(int& usuarioGanadas, int& computadoraGanadas) {
    string opciones[3] = {"piedra", "papel", "tijeras"};
    string usuarioJugada, computadoraJugada;
    int computadoraEleccion = rand() % 3;

    cout << "Elige tu jugada (piedra, papel, tijeras): ";
    cin >> usuarioJugada;

    computadoraJugada = opciones[computadoraEleccion];
    cout << "La computadora eligio: " << computadoraJugada << endl;

    if (usuarioJugada == computadoraJugada) {
        cout << "Empate!" << endl;
    } else if ((usuarioJugada == "piedra" && computadoraJugada == "tijeras") ||
               (usuarioJugada == "papel" && computadoraJugada == "piedra") ||
               (usuarioJugada == "tijeras" && computadoraJugada == "papel")) {
        cout << "Ganaste esta ronda!" << endl;
        usuarioGanadas++;
    } else {
        cout << "La computadora gano esta ronda!" << endl;
        computadoraGanadas++;
    }
}

int main() {
    srand(time(0));
    int usuarioGanadas = 0, computadoraGanadas = 0;

    while (usuarioGanadas < 3 && computadoraGanadas < 3) {
        jugarRonda(usuarioGanadas, computadoraGanadas);
        cout << "Usuario: " << usuarioGanadas << " - Computadora: " << computadoraGanadas << endl;
    }

    if (usuarioGanadas == 3) {
        cout << "Felicidades! Ganaste el juego." << endl;
    } else {
        cout << "La computadora gano el juego. Mejor suerte la proxima vez!" << endl;
    }
    return 0;
}
