
#include "Numero.h"

#include <iostream>
using namespace std;

int main()
{

	cout << "Ingrese tres numeros: " << endl;
	Numero A;
	cin >> A;
	Numero B;
	cin >> B;
	Numero C;
	cin >> C;

	cout << "A = " << A << ", B = " << B << ", C = " << C << endl;

	Numero resultado;
	resultado = A + B - C;

	cout << "Resultado = A + B - C = " << resultado << endl;


	cout << "Resultado = A++ = " << A++ << endl;

	C += A + 1;
	
	cout << "Resultado = C += A + 1 = " << C << endl;

	C += 9;

	cout << "Resultado = C += 9 = " << C << endl;

	system("pause");
}


