
#ifndef ENTEROLARGO_H

#define tam 50

#include <iostream>

class EnteroLargo
{
	friend std::istream& operator>>(std::istream &, EnteroLargo &);
	friend std::ostream& operator<<(std::ostream &, const EnteroLargo &);
public:
	EnteroLargo();
	EnteroLargo operator+(const EnteroLargo &);

private:
	char *n;
	int *numero;
};

#endif