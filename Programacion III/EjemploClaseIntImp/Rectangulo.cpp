#include "Rectangulo.h"

#include <iostream>
using namespace std;

Rectangulo::Rectangulo():
	base(0), altura(0)
{}

Rectangulo::Rectangulo(int b, int a)
{
	setBase(b);
	setAltura(a);
}

void Rectangulo::setBase(int b)
{
	if(b >= 0)
		base = b;
	else
		cout << "Error en base" << endl;
}

void Rectangulo::setAltura(int a)
{
	if(a >= 0)
		altura = a;
	else
		cout << "Error en altura" << endl;
}

int Rectangulo::getBase()
{
	return base;
}

int Rectangulo::getAltura()
{
	return altura;
}

int Rectangulo::getArea()
{
	return base * altura;
}

int Rectangulo::getPerimetro()
{
	return 2*(base + altura);
}

void Rectangulo::imprimirRectangulo()
{
	cout << "Base: " << base << "\nAltura: " << altura << endl;
} 