



#include <iostream>

using namespace std;

class Nota
{
private:
	double valor;
	static double notaMinima;
public:
	Nota()
	{
		valor = 0;
	}
	
	Nota(double v)
	{
		valor = v;
	}

	void setValor(double v)
	{
		if(v >= 0 && v <= 100 )
			valor = v;
		else
			cout << "Error de Ingreso en Nota..." << endl;
	}

	double getValor()
	{
		return valor;
	}

	bool isAprobado()
	{
		if(valor >= notaMinima)
			return true;
		else
			return false;
	}

	static void setNotaMinima(double n)
	{
		notaMinima = n;
	}

	
};

double Nota::notaMinima = 60;

int main()
{
	
	Nota n1, n2(59);

	n1.setValor(69);

	cout << "N1: " << (n1.isAprobado() ? "Aprobado" : "Reprobado") << endl;
	cout << "N2: " << (n2.isAprobado() ? "Aprobado" : "Reprobado") << endl;

	Nota::setNotaMinima(70);

	cout << "N1: " << (n1.isAprobado() ? "Aprobado" : "Reprobado") << endl;
	cout << "N2: " << (n2.isAprobado() ? "Aprobado" : "Reprobado") << endl;

	system("pause");
}