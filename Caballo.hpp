#pragma once

#include <iostream>
#include <vector>

#include "Casilla.hpp"

using namespace std;

class Caballo
{
public:
    Caballo() = default;
    Caballo(int fila, int columna) : _posicion(fila, columna) {}

    Caballo(const Caballo& other) = default;
    Caballo& operator=(const Caballo& other) = default;

    const Casilla& getPosicion() const { return _posicion; }
    int getFila() const { return _posicion.getFila(); }
    int getColumna() const { return _posicion.getColumna(); }

    void setPosicion(const Casilla& casilla) { _posicion = casilla; }
    void setPosicion(int fila, int columna);

    void setFila(int fila) { _posicion.setFila(fila); }                 //MAYBE UNUSED?
    void setColumna(int columna) { _posicion.setColumna(columna); }     //MAYBE UNUSED?

    vector<Casilla> getMovimientos() const;

	void mostrar() const { _posicion.mostrar(); }

private:
    Casilla _posicion;
};



