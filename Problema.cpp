#include "Problema.hpp"

void Problema::ejecutaBackTracking()
{
    Estado e(_N, _filaInicial, _columnaInicial);
    return bt(e);
}

void Problema::bt(Estado& e)
{
    if (e.esFinal())
    {
        cout << "-";
        actualizarSoluciones(e);
    }
 
    list<Casilla> alts = e.getAlternativas();

    for (const Casilla& c : alts)
    {
        e.avanza(c);
        bt(e);
        e.retrocede(c);  
    }
}

void Problema::actualizarSoluciones(Estado& e)
{
    _soluciones.push_back(e.getSolucion());
}


