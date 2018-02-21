

#include "EnteroLargo.h"

EnteroLargo::EnteroLargo()
{
	n = new char[tam];
	numero = new int[tam];

	for(int i = 0; i < tam; i++)
	{
		n[i] = 'a';
		numero[i] = '0';
	}

}

std::istream& operator>>(std::istream &in, EnteroLargo &numero)
{
	in >> numero.n;
	int longitud = strlen(numero.n);

	int final_array = tam - 1;

	for(int i = longitud - 1; i >= 0; i--)
	{
		switch(numero.n[i])
		{
			case '0':
			numero.numero[final_array] = 0;
			break;
			case '1':
			numero.numero[final_array] = 1;
			break;
			case '2':
			numero.numero[final_array] = 2;
			break;
			case '3':
			numero.numero[final_array] = 3;
			break;
			case '4':
			numero.numero[final_array] = 4;
			break;
			case '5':
			numero.numero[final_array] = 5;
			break;
			case '6':
			numero.numero[final_array] = 6;
			break;
			case '7':
			numero.numero[final_array] = 7;
			break;
			case '8':
			numero.numero[final_array] = 8;
			break;
			case '9':
			numero.numero[final_array] = 9;
			break;
		}
		final_array--;
	}

	return in;
}

std::ostream& operator<<(std::ostream &out, const EnteroLargo &numero)
{
	int final_array = tam - 1;
	for(int i = 0; i < strlen(numero.n); i++)
	{

		//if(numero.n[i] != 'a')
			out << numero.numero[tam - strlen(numero.n) + i];
	}
	return out;
}