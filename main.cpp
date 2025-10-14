#include <iostream>
#include "Problema.hpp"
#include "thread"

constexpr int N = 5;

void mostrarRecorrido(list<Casilla> recorrido);

int main()
{
	Problema p(N, 0, 0);
	p.ejecutaBackTracking();

	int contador = 0;
	for(const Solucion& s : p.getSoluciones())
	{
		cout << "Solucion #" << contador << ": \n";
		mostrarRecorrido(s.getRecorrido());
		contador++;
	}
}

void mostrarRecorrido(list<Casilla> recorrido)
{
	char tablero[N][N] = {};
	for (int fil = 0; fil < N; fil++)
		for (int col = 0; col < N; col++)
			tablero[fil][col] = ' ';

	while (!recorrido.empty())
	{
		//system("cls");
		Casilla temp = recorrido.front();
		tablero[temp.getFila()][temp.getColumna()] = 'O';
		recorrido.pop_front();

		for (int fil = 0; fil < N; fil++)
		{
			for (int col = 0; col < N; col++) 
			{
				cout << " | ";
				if (temp.getFila() == fil && temp.getColumna() == col)
					cout << 'X';
				else
					cout << tablero[fil][col];
			}
			cout << " | ";
			cout <<"\n " << string((N * 4) + 1, '-') << "\n";

		}
		cout << "\n\n";

		cin.get();
	}
}
