

#include "Numero.h"

//Numero::Numero(): n(0) { }

Numero::Numero()
{
	setNumero(0);
}

void Numero::setNumero(double n)
{
	this->n = n;
}

double Numero::getNumero()
{
	return this->n;
}

//dobrecarga de operadores mediante funciones friend

std::ostream &operator<<(std::ostream &out, const Numero& a)
{
	out << a.n;
	return out;
}

std::istream &operator>>( std::istream &in, Numero& a)
{
	in >> a.n;
	return in;
}

Numero operator+(const Numero &a, const Numero &b)
{
	Numero temporal;
	temporal.n = a.n + b.n;
	return temporal;
}


Numero operator-(const Numero &a, const Numero &b)
{
	Numero temporal;
	temporal.n = a.n - b.n;
	return temporal;
}

Numero operator*(const Numero &a, const Numero &b)
{
	Numero temporal;
	temporal.n = a.n * b.n;
	return temporal;
}

Numero operator/(const Numero &a, const Numero &b)
{
	if(b.n == 0)
	{
		std::cout << "Error de division por cero. Detiene ejecucion." << std::endl;
		exit(1);
	}
	Numero temporal;
	temporal.n = a.n / b.n;
	return temporal;
}

Numero &Numero::operator++()//preincremento
{
	this->n = n + 1;
	return *this;
}

Numero Numero::operator++(int) //postincremento
{
	Numero temporal = *this;
	this->n = n + 1;
	return temporal;
}

Numero &Numero::operator+=(const Numero &a)
{
	this->n = n + a.n;
	return *this;
}

Numero &Numero::operator+=(const int &a)
{
	this->n = n + a;
	return *this;
}

Numero operator+(const Numero &a, const double &b)
{
	Numero temporal;
	temporal.n = a.n + b;
	return temporal;
}