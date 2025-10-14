#include "Casilla.hpp"

bool Casilla::operator<(const Casilla& other) const
{
	if (_fil != other._fil)
		return _fil < other._fil;
	else
		return _col < other._col;
}

