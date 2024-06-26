#include <iostream>
#include <cmath>
using namespace std;

void calcularHipotenusa(double a, double b) {
    double hipotenusa = sqrt(pow(a, 2) + pow(b, 2));
    cout << "La hipotenusa es: " << hipotenusa << endl;
}

int main() {
    double cateto1, cateto2;
    cout << "Introduce el valor del primer cateto: ";
    cin >> cateto1;
    cout << "Introduce el valor del segundo cateto: ";
    cin >> cateto2;
    calcularHipotenusa(cateto1, cateto2);
    return 0;
}