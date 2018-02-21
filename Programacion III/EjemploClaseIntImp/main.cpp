


#include "Rectangulo.h"
#include <iostream>

using namespace std;

int main()
{
	int base, altura;

	cout << "Ingrese Base: ";
	cin >> base;
	cout << "Ingrese Altura: ";
	cin >> altura;

	Rectangulo r(base, altura);
	cout << "\nArea: " << r.getArea();
	cout << "\nPerimetro " << r.getPerimetro();

	cout << "\n\n";

	Rectangulo r2;
	r2.setBase(7);
	r2.setAltura(4);
	r2.imprimirRectangulo();
	cout << "\nArea: " << r2.getArea();
	cout << "\nPerimetro " << r2.getPerimetro() << endl;



	system("pause");
}