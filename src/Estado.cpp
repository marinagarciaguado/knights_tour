#include "Estado.hpp"

Estado::Estado(int N, int filaInicial, int columnaInicial)
    : _caballo(filaInicial, columnaInicial), _N(N), _numMovimientos(0), _numCasillas((N * N) - 1)
{
    _solucion.setCasillaInicial(filaInicial, columnaInicial);
}

bool Estado::esFinal() const
{
    //cout << _numMovimientos << " : " << _numCasillas << endl;
    return _numMovimientos == _numCasillas;
}

list<Casilla> Estado::getAlternativas()
{
    list<Casilla> alts;
    
    for (const Casilla& c : _caballo.getMovimientos())
    {
        if (esCasillaValida(c) && _solucion.getCasillasUsada().count(c) == 0)
            alts.push_back(c);
    }
    return alts;
}

void Estado::avanza(const Casilla& c)
{
    _solucion.pushMovimiento(c);
    _caballo.setPosicion(c);
    _numMovimientos++;
}

void Estado::retrocede(const Casilla& c)
{
    _solucion.popMovimiento(c);
    _caballo.setPosicion(_solucion.getRecorrido().back());
    _numMovimientos--;
}

bool Estado::esCasillaValida(const Casilla& c) const
{
    if (c.getFila() >= 0 && c.getFila() < _N && c.getColumna() >= 0 && c.getColumna() < _N)
        return true;
    
    return false;
}
