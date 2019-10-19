#pragma once
#include "Nodo.h"
class Pila
{

public:
	Nodo* head = nullptr; 
public:
	int NElementos = 0;
	void Apilar(int numero); //Recibe numero para ingresar a la pila
	int Desapilar(); 
	bool buscarPila(int numero); //validacion si el numero existe en la pila.
public:
	Pila();
	~Pila();
};


