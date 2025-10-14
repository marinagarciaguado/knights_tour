
#include "Caballo.hpp"

void Caballo::setPosicion(int fila, int columna)
{
    _posicion.setFila(fila);    
    _posicion.setColumna(columna);
}

vector<Casilla> Caballo::getMovimientos() const
{
    vector<Casilla> movimientos;

    movimientos.emplace_back(getFila() - 2, getColumna() + 1);
    movimientos.emplace_back(getFila() - 1, getColumna() + 2);

    movimientos.emplace_back(getFila() + 1, getColumna() + 2);
    movimientos.emplace_back(getFila() + 2, getColumna() + 1);

    movimientos.emplace_back(getFila() + 2, getColumna() - 1);
    movimientos.emplace_back(getFila() + 1, getColumna() - 2);

    movimientos.emplace_back(getFila() - 1, getColumna() - 2);
    movimientos.emplace_back(getFila() - 2, getColumna() - 1);

    return movimientos;
}
