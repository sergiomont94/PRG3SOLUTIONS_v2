
#include "Rectangulo.h"

#include <iostream>

using namespace std;

Rectangulo::Rectangulo():base(1), altura(1)
{}

Rectangulo::Rectangulo(float b, float a)
{
	setBase(b);
	setAltura(a);
}

void Rectangulo::setBase(float base)
{
	if(base > 0)
		this->base = base;
	else
		this->base = 1;
}

void Rectangulo::setAltura(float altura)
{
	if(altura > 0)
		this->altura = altura;
	else
		this->altura = 1;
}

float Rectangulo::getBase()
{
	return base;
}

float Rectangulo::getAltura()
{
	return altura;
}

float Rectangulo::getArea()
{
	return base * altura;
}

float Rectangulo::getPerimetro()
{
	return 2 * base + 2 * altura;
}

void Rectangulo::imprimir()
{
	cout << "Rectangulo{base:" << getBase() << ",altura:" << getAltura()
		<< "} area:" << getArea() << ",perimetro:" << getPerimetro() << endl;
}

int Rectangulo::getTipo()
{
	return 1;
}