
#include "ListaEnlazada.h"

#include <iostream>

ListaEnlazada::ListaEnlazada(): primero(0), ultimo(0)
{}

bool ListaEnlazada::esVacia()
{
	return primero == 0;
}

void ListaEnlazada::agregar(int valor)
{
	Nodo *tmp = new Nodo;
	tmp->setValor(valor);

	if(esVacia())
		ultimo = primero = tmp;
	else
	{
		//Lista Doblemente Enlazada

		ultimo->setSig(tmp);
		tmp->setAnt(ultimo);
		ultimo = tmp;

		//ListaEnlazada Simple
		/*ultimo->setSig(tmp);
		ultimo = tmp;*/
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

	std::cout << std::endl;
}

void ListaEnlazada::insertar(int posicion, int valor)
{
	Nodo *tmp = primero;
	Nodo *ant = 0;
	
	Nodo *nuevo = new Nodo;
	nuevo->setValor(valor);
	
	int cont = 0;

	if(posicion > getTamano())
	{
		std::cout << "Posicion incorrecta!...\n";
		return;
	}
	else
	{
		while(tmp != 0)
		{
			cont++;
			if(cont == posicion)
			{
				if(tmp == primero)
				{
					//Lista Doblemente Enlazada
					nuevo->setSig(primero);
					primero->setAnt(nuevo);
					primero = nuevo;

					//Lista Enlazada Simple
					/*nuevo->setSig(primero);
					ultimo = primero;
					primero = nuevo;*/
				}else if(tmp == ultimo)
				{
					//Lista Doblemente Enlazada
					ultimo->setSig(nuevo);
					nuevo->setAnt(ultimo);
					ultimo = nuevo;

					//Lista Enlazada Simple
					/*ant->setSig(nuevo);
					nuevo->setSig(ultimo);*/
				}else
				{
					//Lista Doblemente Enlazada
					ant->setSig(nuevo);
					nuevo->setAnt(ant);
					nuevo->setSig(tmp);
					tmp->setAnt(nuevo);

					//Lista Enlazada Simple
					/*ant->setSig(nuevo);
					nuevo->setSig(tmp);*/
				}
			}

			ant = tmp;
			tmp = tmp->getSig();
		}
	}

}

int ListaEnlazada::getTamano()
{
	Nodo *tmp = primero;
	int cont = 0;

	while(tmp != 0)
	{
		cont++;
		tmp = tmp->getSig();
	}

	return cont;
}

bool ListaEnlazada::borrar(int valor)
{
	Nodo *actual = primero;
	Nodo *anterior = 0;

	while(actual != 0)
	{
		if(actual->getValor() == valor)
		{
			if(actual == primero)
			{
				//Lista Doblemente Enlazada
				primero = actual->getSig();
				primero->setAnt(0);

				delete actual;

				//Lista Enlazada Simple
				//primero = actual->getSig();
			}else if(actual == ultimo)
			{
				//Lista Doblemente Enlazada
				ultimo = actual->getAnt();
				ultimo->setSig(0);

				delete actual;

				//Lista Enlazada Simple
				//ultimo = anterior;
			}else
			{
				//Lista Doblemente Enlazada
				actual->getAnt()->setSig(actual->getSig());
				actual->getSig()->setAnt(actual->getAnt());

				delete actual;

				//Lista Enlazada Simple
				//anterior->setSig(actual->getSig());
			}

			return true;
		}
		anterior = actual;
		actual = actual->getSig();
	}

	return false;
}

int ListaEnlazada::buscar(int valor)
{
	Nodo *tmp = primero;
	int posicion = 0;

	while(tmp != 0)
	{
		posicion++;
		if(tmp->getValor() == valor)
			return posicion;

		tmp = tmp->getSig();
	}

	return -1;
}

void ListaEnlazada::imprimirReversa()
{
	Nodo *tmp = ultimo;

	while( tmp != 0 )
	{
		std::cout << tmp->getValor() << " ";
		tmp = tmp->getAnt();
	}

}