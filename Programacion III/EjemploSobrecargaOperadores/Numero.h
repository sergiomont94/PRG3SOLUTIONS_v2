#ifndef NUMERO_H

#define NUMERO_H

#include <iostream>


class Numero
{
	friend std::ostream &operator<<( std::ostream &, const  Numero &a);
	friend std::istream &operator>>( std::istream &, Numero &a);
	friend Numero operator+( const Numero &, const Numero & );
	friend Numero operator-( const Numero &, const Numero & );
	friend Numero operator*( const Numero &, const Numero & );
	friend Numero operator/( const Numero &, const Numero & );
	friend Numero operator+(const Numero &, const double &);
public:

	Numero();
	void setNumero(double);
	double getNumero();

	Numero &operator++(); //preincremento
	Numero operator++(int); //postincremento
	Numero &operator+=(const Numero &);
	Numero &operator+=(const int&);

private:
	double n;
};


#endif // !1
