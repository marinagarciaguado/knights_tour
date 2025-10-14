#pragma once

#include <iostream>

using namespace std;

class Casilla
{
public:
	Casilla() = default;
	Casilla(int fila, int columna)
		: _fil(fila), _col(columna) {};

	Casilla(const Casilla& other) = default;
	Casilla& operator=(const Casilla& other) = default;

	int getFila() const { return _fil; }
	int getColumna() const { return _col; }

	void setFila(int fila) { _fil = fila; }
	void setColumna(int columna) { _col = columna; }

	bool operator<(const Casilla& other) const;

	void mostrar() const { cout << "[" << _fil << ", " << _col << "]\n"; }
private:
	int _fil;
	int _col;
};