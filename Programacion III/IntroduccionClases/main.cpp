



#include <iostream>
//#include <cstdlib>
using namespace std;

class Nota {
private:
	double valor;
	static double NotaMinima;
public:
	Nota() {
		valor=0;
	}

	Nota(double v) {
		setValor(v);
	}

	void setValor(double v) {
		if(v>=0 && v<=100)
			valor=v;
		else
			cout <<"Error en la nota...";
	}

	double getValor() {
		return valor;
	}

	static void setNotaMinima(double n) {
		NotaMinima=n;
	}

	bool isAprobado() {
		if(valor>=NotaMinima)
			return true;
		else 
			return false;
	}

};

double Nota::NotaMinima=60;

int main() {
	Nota n1,n2(60);
	n1.setValor(80);
	cout <<n1.isAprobado()<<" / "<<n2.isAprobado()<<"\n";
	Nota::setNotaMinima(70);
	cout <<n1.isAprobado()<<" / "<<n2.isAprobado()<<"\n";
	system("pause");
	return 0;
}
