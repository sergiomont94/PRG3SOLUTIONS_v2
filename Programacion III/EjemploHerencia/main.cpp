


#include "EmpleadoPrivado.h"


#include <iostream>

using namespace std;

#include <array>

int main()
{
	Empleado pe("Juan", 21, 'M' ,"Soltero", 100000, "CEO", "Apple");
	pe.setGenero('M');

	pe.imprimirEmpleado();
	
	cout << "\n\nEmpleado NO. 2 " << endl;

	Empleado p;
	p.setSalario(10000);
	p.setPuesto("CEO");
	p.setEmpresa("Apple");
	p.setGenero('M');

	p.setEdad(24);
	p.setEstadoCivil("Soltero");
	p.setNombre("Julio");
	p.imprimirEmpleado();


	cout << "\n\nEmpleado NO. 3 " << endl;

	EmpleadoPrivado priv;
	priv.setGenero('F');
	priv.imprimirEmpleado();

	cout << "\n\nEmpleado NO. 4 " << endl;

	Empleado *empleadoPtr = new Empleado("Mengano", 26, 'F', "Viuda", 200000, "Project Manager", "Microsoft");
	Empleado *empleadoPtr2 = empleadoPtr;
	//empleadoPtr2->imprimirEmpleado();
	(*empleadoPtr2).imprimirEmpleado();
	delete empleadoPtr;

	system("pause");
}