#include <iostream>
#include <cmath>
#include <complex>
using namespace std;

void calcularRaices(double a, double b, double c, complex<double>& raiz1, complex<double>& raiz2, bool& sonReales) {
    double discriminante = pow(b, 2) - 4 * a * c;
    if (discriminante >= 0) {
        sonReales = true;
        raiz1 = (-b + sqrt(discriminante)) / (2 * a);
        raiz2 = (-b - sqrt(discriminante)) / (2 * a);
    } else {
        sonReales = false;
        raiz1 = (-b + sqrt(complex<double>(discriminante))) / (2.0 * a);
        raiz2 = (-b - sqrt(complex<double>(discriminante))) / (2.0 * a);
    }
}

int main() {
    double coeficiente1, coeficiente2, coeficiente3;
    complex<double> raiz1, raiz2;
    bool sonReales;
    cout << "Introduce el coeficiente a: ";
    cin >> coeficiente1;
    cout << "Introduce el coeficiente b: ";
    cin >> coeficiente2;
    cout << "Introduce el coeficiente c: ";
    cin >> coeficiente3;

    calcularRaices(coeficiente1, coeficiente2, coeficiente3, raiz1, raiz2, sonReales);

    if (sonReales) {
        cout << "Las raices son reales." << endl;
        cout << "Raiz 1: " << raiz1 << endl;
        cout << "Raiz 2: " << raiz2 << endl;
    } else {
        cout << "Las raices son complejas." << endl;
        cout << "Raiz 1: " << raiz1 << endl;
        cout << "Raiz 2: " << raiz2 << endl;
    }
    return 0;
}