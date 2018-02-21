
#ifndef LISTAENLAZADA_H

#define LISTAENLAZADA_H

#include "Nodo.h"

class ListaEnlazada
{
public:
	ListaEnlazada();
	
	bool esVacia();
	int getTamano();

	void agregar(int);
	void insertar(int, int);
	bool borrar(int);
	int buscar(int);

	void imprimir();
	void imprimirReversa();

private:
	Nodo *primero, *ultimo;
};

#endif // !1
