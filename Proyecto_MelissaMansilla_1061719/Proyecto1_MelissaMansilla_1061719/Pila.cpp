#include "Pila.h"



Pila::Pila()
{
	NElementos = 0;
}


Pila::~Pila()
{
}

void Pila::Apilar(int valor) {
	Nodo * NodoNuevo = new Nodo();
	NodoNuevo->numero = valor;// asignar la numero al nodo
	if (head == nullptr)
	{
		head = NodoNuevo; //el numero se convierte en el nuevo head.
	}
	else 
	{
		Nodo* Aux = new Nodo();
		Aux = head; 
		head = NodoNuevo; 
		head->siguiente = Aux; 
	}
	NElementos++; 
}
int Pila::Desapilar() {
	if (head == nullptr)
	{
		return  10; //Valor diferente de los elementos de la pila.
	}
	else
	{
		int valor = head->numero;
		head = head->siguiente;
		NElementos--;
		return valor;
	}
}
bool Pila::buscarPila(int valor) //metodo que verifica si el numero ingresado esta en la pila.
{
	Nodo *aux = new Nodo();
	aux = head;
	bool existe = false; 
	while (aux != nullptr)
	{
		if (aux->numero == valor) 
		{
			return true;
		}
		else 
		{
			aux = aux->siguiente;
		}
	}
	return existe;

}
