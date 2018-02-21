
#include "ListaEnlazada.h"
#include <iostream>


using namespace std;


int main()
{

	ListaEnlazada nuevo;
	nuevo.agregar(9);
	nuevo.agregar(1);
	nuevo.agregar(8);
	nuevo.agregar(2);

	nuevo.insertar(5, 3);

	nuevo.imprimir();

	//int valor;
	//cout << "Ingrese valor a buscar: ";
	//cin >> valor;
	//if(nuevo.buscar(valor) != 0)
	//	cout << "El valor fue encontrado!\n";
	//else
	//	cout << "El valor NO fue encontrado\n";

	

	nuevo.borrar(1);
	nuevo.imprimir();

	

	system("pause");
}