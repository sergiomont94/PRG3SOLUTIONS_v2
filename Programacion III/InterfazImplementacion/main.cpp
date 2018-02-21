

#include "Rectangulo.h"
#include <iostream>

using namespace std;

int main()
{
	int base, altura;
	cout << "Ingrese base: ";
	cin >> base;
	cout << "Ingrese altura: ";
	cin >> altura;

	Rectangulo r(base, altura);
	cout << "\nArea: " << r.getArea() << "\n";
	cout << "\Perimetro: " << r.getPerimetro() << "\n"; 


	Rectangulo r2;
	r2.setBase(6);
	r2.setAltura(9);

	r2.imprimirRectangulo();
	cout << "\nArea: " << r2.getArea() << "\n";
	cout << "\Perimetro: " << r2.getPerimetro() << "\n"; 

	system("pause");
}