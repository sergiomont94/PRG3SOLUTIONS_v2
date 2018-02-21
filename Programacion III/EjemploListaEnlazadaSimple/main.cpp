

#include <iostream>

using namespace std;

#include "ListaEnlazada.h"

int main()
{

	ListaEnlazada nuevo;

	nuevo.agregar(9);
	nuevo.agregar(2);
	nuevo.agregar(8);
	nuevo.agregar(3);

	nuevo.imprimir();


	nuevo.insertar(3, 5);
	nuevo.agregar(4);
	nuevo.imprimir();

	nuevo.imprimirReversa();


	nuevo.borrar(8);

	nuevo.imprimir();
	nuevo.imprimirReversa();

	/*cout << "Ingrese valor a buscar: ";
	int valorBusqueda;
	cin >> valorBusqueda;

	int busqueda = nuevo.buscar(valorBusqueda);

	if(busqueda != -1)
		cout << "Se encontro el elemento en la posicion " << busqueda << endl;
	else
		cout << "No se encontro el elemento\n";*/




	system("pause");
}