
#include "Rectangulo.h"
#include <iostream>

using namespace std;

Rectangulo::Rectangulo(): 
	base(0), altura(0) //inicializar variables
	{ } //cuerpo de constructor vacio

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
		cout << "Error en valor de base\n";
}

void Rectangulo::setAltura(int a)
{
	if(a >= 0)
		altura = a;
	else
		cout << "Error en valor de altura\n";
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
	cout << "\nBase: " << base << "\nAltura: " << altura << endl;
}