#pragma once

#include <list>
#include <set>

#include "Caballo.hpp"

using namespace std;

class Solucion
{
public:

	Solucion() = default;
	Solucion(const Solucion& other) = default;
	Solucion& operator=(const Solucion& other) = default;

	const list<Casilla>& getRecorrido() const { return _recorrido; }
	const set<Casilla>& getCasillasUsada() const { return _casillasUsadas; }

	void setRecorrido(list<Casilla> r) { _recorrido = r; }
	void setRecorrido(set<Casilla> c) { _casillasUsadas = c; }
	void setCasillaInicial(int filaInicial, int columnaInicial);

	void pushMovimiento(const Casilla& c);
	void popMovimiento(const Casilla& c);

	void mostrar();

private:

	list<Casilla> _recorrido;
	set<Casilla> _casillasUsadas;
};

