#include <iostream>
#include <cmath>
#include <complex>
using namespace std;

void calcularRaices(double a, double b, double c) {
    double discriminante = pow(b, 2) - 4 * a * c;
    if (discriminante > 0) {
        double raiz1 = (-b + sqrt(discriminante)) / (2 * a);
        double raiz2 = (-b - sqrt(discriminante)) / (2 * a);
        cout << "Las raices son reales y diferentes." << endl;
        cout << "Raiz 1: " << raiz1 << endl;
        cout << "Raiz 2: " << raiz2 << endl;
    } else if (discriminante == 0) {
        double raiz = -b / (2 * a);
        cout << "Las raices son reales e iguales." << endl;
        cout << "Raiz: " << raiz << endl;
    } else {
        complex<double> raiz1 = (-b + sqrt(complex<double>(discriminante))) / (2.0 * a);
        complex<double> raiz2 = (-b - sqrt(complex<double>(discriminante))) / (2.0 * a);
        cout << "Las raices son complejas y diferentes." << endl;
        cout << "Raiz 1: " << raiz1 << endl;
        cout << "Raiz 2: " << raiz2 << endl;
    }
}

int main() {
    double coeficiente1, coeficiente2, coeficiente3;
    cout << "Introduce el coeficiente a: ";
    cin >> coeficiente1;
    cout << "Introduce el coeficiente b: ";
    cin >> coeficiente2;
    cout << "Introduce el coeficiente c: ";
    cin >> coeficiente3;

    calcularRaices(coeficiente1, coeficiente2, coeficiente3);

    return 0;
}
