#include <iostream>
#include <cmath>
using namespace std;

void calcularAreaCirculo(double rad){
	double area = M_PI *	 pow(rad, 2);
	cout << "El area del circulo es: " << area << " unidades cuadradas" << endl;
}

int main (){
	double radio;
	cout << "Introduce el radio del circulo: " << endl;
	cin >> radio;
	calcularAreaCirculo (radio);
	return 0;
}