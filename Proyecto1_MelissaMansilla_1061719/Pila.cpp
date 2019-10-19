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
		/*NodoNuevo->N = FirstP;
		FirstP = NewValue;
		Cantidad++;*/
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
	bool existe = false; //si llegase a recorrer toda la pila y esta se queda vacia, devolvera un false.
	while (aux->siguiente != nullptr) //dejara de cumplirse hasta que el ultimo no apunte a nada.
	{
		if (aux->numero == valor) //si el valor del nodo auxiliar en x posicion es igual al valor este existe, si no el auxiliar apunta al siguiente.
		{
			existe = true;
		}
		aux = aux->siguiente;
	}
	return existe; //si llegase a recorrer toda la pila y esta se queda vacia, devolvera un false.

}
