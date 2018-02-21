#include "TrianguloRectangulo.h"

#include <cmath>
#include <iostream>

using namespace std;

TrianguloRectangulo::TrianguloRectangulo():base(1), altura(1)
{}

TrianguloRectangulo::TrianguloRectangulo(float base, float altura)
{
	setBase(base);
	setAltura(altura);
}

void TrianguloRectangulo::setBase(float base)
{
	if(base > 0)
		this->base = base;
	else 
		this->base = 1;
}

void TrianguloRectangulo::setAltura(float altura)
{
	if(altura > 0)
		this->altura = altura;
	else
		this->altura = 1;
}

float TrianguloRectangulo::getBase()
{
	return base;
}

float TrianguloRectangulo::getAltura()
{
	return altura;
}

float TrianguloRectangulo::getArea()
{
	return (base * altura)/2;
}

float TrianguloRectangulo::getPerimetro()
{
	return altura + base + sqrt(base * base + altura * altura);
}

float TrianguloRectangulo::getHipotenusa()
{
	return sqrt(base * base + altura * altura);
}

void TrianguloRectangulo::imprimir()
{
	cout << "TrianguloRectangulo{base:" << getBase() << ",altura:" << getAltura() 
		<< "} area: " << getArea() << ",perimetro:" << getPerimetro() << endl;
}

int TrianguloRectangulo::getTipo()
{
	return 2;
}