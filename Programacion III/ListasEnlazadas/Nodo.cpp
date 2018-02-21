
#include "Nodo.h"

Nodo::Nodo(): sig(0) { }

void Nodo::setSig(Nodo *sig)
{
	this->sig = sig;
}

void Nodo::setValor(int valor)
{
	this->valor = valor;
}

Nodo* Nodo::getSig()
{
	return this->sig;
}

int Nodo::getValor()
{
	return this->valor;
}

Nodo* Nodo::getAnt()
{
	return this->ant;
}

void Nodo::setAnt(Nodo *ant)
{
	this->ant = ant;
}