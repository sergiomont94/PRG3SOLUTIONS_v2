
#include "Persona.h"
#include "Empleado.h"
#include "EmpleadoPrivado.h"

#include <iostream>

using namespace std;


int main()
{
	Empleado pe("Juan", 21, 'M' ,"Soltero", 100000, "CEO", "Apple");
	pe.setGenero('M');

	pe.imprimirEmpleado();

	//Ejemplo No. 2
	cout << "======================\n\n";

	EmpleadoPrivado ep;
	
	ep.setGenero('F');
	ep.setEmpresa("Microsoft");
	ep.setEdad(34);
	
	ep.imprimirEmpleado();

	//Ejemplo No. 3
	cout << "======================\n\n";

	Empleado *ep2 = new Empleado("Oscar", 21, 'M', "Soltero", 15000, "Programador Jr.", "Banco");
	Empleado *ep3 = ep2;

	ep3->imprimirEmpleado();
	
	

	system("pause");
}