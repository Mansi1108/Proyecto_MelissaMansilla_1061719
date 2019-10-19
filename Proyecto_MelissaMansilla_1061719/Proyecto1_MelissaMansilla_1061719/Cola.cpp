#include "Cola.h"



Cola::Cola()
{
}


Cola::~Cola()
{
}

void Cola::push(int valor) {
	Nodo * NodoNuevo = new Nodo();
	NodoNuevo->numero = valor; //Guarda el numero ingresado para mostrarlo en la cola.
	NodoNuevo->siguiente = nullptr; //El siguiente sera nulo.
	if (headC == nullptr) 
	{
		headC = NodoNuevo;
		// Se agrega el primer valor convirtiendose como head y el fin.
	}
	else
	{
		ultimoC->siguiente = NodoNuevo; //Asigna el elemento siguiente, apuntando al head.
	}
	ultimoC = NodoNuevo;
}
int Cola::pop() {
	Nodo * aux = new Nodo();
	int num;
	aux = headC; //auxiliar apunta al head.
	num = aux->numero; //numero se lea asignara el valor del auxiliar.
	headC = headC->siguiente; //el head se convierte en el siguiente.
	delete(aux);
	return num;

}
bool Cola::buscarCola(int valor)
{
	Nodo *aux = new Nodo();
	aux = headC;
	bool existe = false;
	while (aux->siguiente != nullptr)
	{
		if (aux->numero == valor)
		{
			existe = true;
		}
		aux = aux->siguiente;
	}
	return existe;

}
