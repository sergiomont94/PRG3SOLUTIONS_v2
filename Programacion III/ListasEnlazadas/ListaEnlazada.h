#ifndef LISTAENLAZADA_H

#define LISTAENLAZADA_H

#include "Nodo.h"

class ListaEnlazada
{
public:
	ListaEnlazada();
	bool esVacia();
	Nodo* getPrimero();
	int getTamano();
	void agregar(int);
	//int valor, int posicion
	void insertar(int, int);
	Nodo* buscar(int);
	void borrar(int);
	void imprimir();

private:
	Nodo *primero, *ultimo;
};

#endif // !LISTAENLAZADA_H
