#include "Solucion.hpp"

void Solucion::setCasillaInicial(int filaInicial, int columnaInicial)
{
	_casillasUsadas.emplace(filaInicial, columnaInicial);
	_recorrido.emplace_back(filaInicial, columnaInicial);
}

void Solucion::pushMovimiento(const Casilla& c)
{
	_recorrido.push_back(c);
	_casillasUsadas.insert(c);
}

void Solucion::popMovimiento(const Casilla& c)
{
	_recorrido.pop_back();
	_casillasUsadas.erase(c);
}

void Solucion::mostrar()
{
	for (Casilla& c : _recorrido)
		c.mostrar();
}
