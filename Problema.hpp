#pragma once

#include <list>
#include <iostream>

#include "Estado.hpp"

using namespace std;

class Problema
{
public:
	Problema(int N, int filaInicial, int columnaInicial)
		: _N(N), _filaInicial(filaInicial), _columnaInicial(columnaInicial)
	{}

	const list<Solucion>& getSoluciones() const { return _soluciones; }

	void ejecutaBackTracking();
	void bt(Estado& e);

	void actualizarSoluciones(Estado& e);

private:	

	int _N;
	int _filaInicial;
	int _columnaInicial;
	list <Solucion> _soluciones;

};

