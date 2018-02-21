#include "ListaEnlazada.h"

#include <iostream>

ListaEnlazada::ListaEnlazada(): primero(0), ultimo(0)
{}

bool ListaEnlazada::esVacia()
{
	return primero == 0;
}

Nodo * ListaEnlazada::getPrimero()
{
	return this->primero;
}

int ListaEnlazada::getTamano()
{
	Nodo *tmp = primero;
	int cont = 0;

	while(tmp != 0)
	{
		tmp = tmp->getSig();
		cont++;
	}
	return cont;

}

void ListaEnlazada::agregar(int valor)
{
	Nodo *tmp = new Nodo;
	tmp->setValor(valor);

	if(esVacia())
		primero = ultimo = tmp;
	else
	{
		ultimo->setSig(tmp);
		//tmp->setAnt(ultimo);
		ultimo = tmp;
	}
}

void ListaEnlazada::insertar(int valor, int posicion)
{
	if(posicion > getTamano())
	{
		std::cout << "Posicion Incorrecta!\n";
		return;
	}else 
	{
		Nodo *tmp = new Nodo, *actual, *ant;
		tmp->setValor(valor);

		actual = primero;
		ant = 0;

		int cont = 0;

		while(actual != 0)
		{
			cont++;

			if(posicion == cont)
			{
				if(actual == primero)
				{
					tmp->setSig(primero);
					primero = tmp;
				}else if(actual == ultimo)
				{
					/*ultimo->getAnt()->setSig(tmp);
					tmp->setAnt(ultimo->getAnt());
					tmp->setSig(ultimo);
					ultimo->setAnt(tmp);*/

					//Lista enlazada simple
					ant->setSig(tmp);
					tmp->setSig(ultimo);
					
				}else
				{
					/*actual->getAnt()->setSig(tmp);
					tmp->setAnt(actual->getAnt());
					tmp->setSig(actual);
					actual->setAnt(tmp);*/

					//Lista enlazada simple
					ant->setSig(tmp);
					tmp->setSig(actual);

				}
			}
			ant = actual;
			actual = actual->getSig();

		}

	}
}

void ListaEnlazada::imprimir()
{
	Nodo *tmp = primero;
	while(tmp != 0)
	{
		std::cout << tmp->getValor() << " ";
		tmp = tmp->getSig();
	}
	std::cout << "\n";
}

Nodo* ListaEnlazada::buscar(int valor)
{
	Nodo *tmp = primero;

	while(tmp != 0)
	{
		if(tmp->getValor()==valor)
			return tmp;
		tmp = tmp->getSig();
	}
	return 0;
}

void ListaEnlazada::borrar(int valor)
{
	Nodo *tmp = primero,*ant;

	while(tmp != 0)
	{
		if(tmp->getValor() == valor)
		{
			if(tmp == primero && tmp == ultimo)
			{
				primero = primero->getSig();
				//delete tmp;
			}else if(tmp == ultimo)
			{
				ant->setSig(0);
				ultimo = ant;
				//delete tmp;
			}else
			{
				ant->setSig(tmp->getSig());
				//delete tmp;
			}
		}
		ant = tmp;
		tmp = tmp->getSig();

	}

}