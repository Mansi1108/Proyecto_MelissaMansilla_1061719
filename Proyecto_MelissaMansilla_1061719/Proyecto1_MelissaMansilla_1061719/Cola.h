#pragma once
#include "Nodo.h"
class Cola
{
public:
	Nodo* headC = nullptr;
	Nodo* ultimoC = nullptr;
public:
	void push(int numero); //Recibe numero para ingresar a la pila
	int pop(); //Sacar numero de la pila
	bool buscarCola(int numero); //validacion si el numero existe en la cola.
public:
	Cola();
	~Cola();
};

