#pragma once

#include "Solucion.hpp"

class Estado
{
public:
	Estado(int N, int filaInicial, int columnaInicial);

	Solucion getSolucion() const { return _solucion; }
	int getNumMovimientos() const { return _numMovimientos; }
	int getNumCasillas() const { return _numCasillas; }

	void setSolucion(const Solucion& s) { _solucion = s; }
	void setNumMovimientos(int nm) { _numMovimientos = nm; }
	void setNumCasillas(int nc) { _numCasillas = nc; }

	bool esFinal() const;
	list<Casilla> getAlternativas();
	void avanza(const Casilla& c);
	void retrocede(const Casilla& c);

	bool esCasillaValida(const Casilla& c) const;

private:

	Solucion _solucion;
	Caballo _caballo;

	int _N;
	int _numMovimientos;
	int _numCasillas;
	
};

