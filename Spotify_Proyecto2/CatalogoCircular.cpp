#include "CatalogoCircular.h"
#include <iostream>


 CatalogoCircular::CatalogoCircular(int id, string artista, string cancion, string url)
{
	if (existeElemento(id, artista, cancion, url))
	{
		std::cout << "\nElemento ya existe en ListaCircular";
		return;
	}

	Nodo* nuevo = new Nodo(id, artista, cancion, url, nullptr, nullptr);

	if (estaVacia())
	{
		primero = nuevo;
		ultimo = nuevo;
	}
	else
	{
		ultimo->setSiguiente(nuevo);
		nuevo->setAnterior(ultimo);

		ultimo = nuevo;
	}

	ultimo->setSiguiente(primero);
	primero->setAnterior(ultimo);

}


bool CatalogoCircular::existeElemento(int id, string artista, string cancion, string url)
{
	if (estaVacia())
		return false;

	Nodo* actual = primero;

	do
	{
		if (actual->getArtista() == artista && actual->getCancion()== cancion)
			return true;

		actual = actual->getSiguiente();

	} while (actual != primero);

	return false;
}

CatalogoCircular::CatalogoCircular()
	: primero(nullptr), ultimo(nullptr)
{
}

void CatalogoCircular::agregarElemento(int id, string artista, string cancion, string url)
{
	if (existeElemento(id, artista, cancion, url))
	{
		std::cout << "\nElemento ya existe en ListaCircular";
		return;
	}

	Nodo* nuevo = new Nodo(id, artista, cancion, url, nullptr, nullptr);

	if (estaVacia())
	{
		primero = nuevo;
		ultimo = nuevo;
	}
	else
	{
		ultimo->setSiguiente(nuevo);
		nuevo->setAnterior(ultimo);

		ultimo = nuevo;
	}

	ultimo->setSiguiente(primero);
	primero->setAnterior(ultimo);

}

bool CatalogoCircular::estaVacia()
{
	return primero == nullptr;
}

string CatalogoCircular::imprimir(int Lugar)
{
	if (estaVacia())
		return "";

	Nodo* actual = primero;


	for (int i = 0; i < Lugar; i++) {
		actual = actual->getSiguiente();
	}



		return actual->getArtista() + "\n" + actual->getCancion() + " " + actual->getURL();
}

string CatalogoCircular::ObtenerUrl(int Lugar)
{
	if (estaVacia())
		return "";

	Nodo* actual = primero;

	
	for (int i = 0; i < Lugar; i++) {
		actual = actual->getSiguiente();
	}



	return actual->getURL();
}


//
//void CatalogoCircular::eliminarElemento(int id, string artista, string cancion, string url) //valor de nodo a eliminar
//{
//	if (estaVacia())
//		return;
//
//	Nodo* actual = primero;
//
//	do
//	{
//		if (actual->getArtista() == artista && actual->getCancion() == cancion)
//		{
//			if (actual == primero)
//			{
//				primero = actual->getSiguiente();
//
//				primero->setAnterior(ultimo);
//				ultimo->setSiguiente(primero);
//			}
//			else if (actual == ultimo)
//			{
//				ultimo = actual->getAnterior();
//
//				primero->setAnterior(ultimo);
//				ultimo->setSiguiente(primero);
//			}
//			else
//			{
//				actual->getAnterior()->setSiguiente(actual->getSiguiente());
//				actual->getSiguiente()->setAnterior(actual->getAnterior());
//			}
//
//			delete actual;
//			return;
//
//		}
//
//		actual = actual->getSiguiente();
//
//	} while (actual != primero);
//
//
//}

//void CatalogoCircular::insertarElemento(int ValorNodo, int Lugar) {
//	if (estaVacia())
//		return;
//
//	if (existeElemento(ValorNodo))
//	{
//		std::cout << "\nElemento ya existe en ListaCircular";
//		return;
//	}
//
//
//
//
//
//
//
//	Nodo* actual = primero;
//	Nodo* nuevo = new Nodo(ValorNodo, nullptr, nullptr);
//
//
//	if (Lugar == 0) {
//		primero = nuevo;
//		nuevo = actual;
//
//
//		primero->setSiguiente(nuevo);
//		nuevo->setAnterior(primero);
//
//		ultimo->setSiguiente(primero);
//		primero->setAnterior(ultimo);
//	}
//	else {
//
//		for (int i = 0; i <= Lugar; i++) {
//			if (i == Lugar) {
//
//
//				if (actual->getSiguiente() == nullptr) {
//					std::cout << "No se cuenta con ese numero de nodos" << std::endl;
//				}
//
//
//
//				actual->getAnterior()->setSiguiente(nuevo);
//				nuevo->setAnterior(actual->getAnterior());
//
//				actual->setAnterior(nuevo);
//				nuevo->setSiguiente(actual);
//
//				ultimo->setSiguiente(primero);
//				primero->setAnterior(ultimo);
//			}
//			actual = actual->getSiguiente();
//
//		}
//	}
//
//
//
//
//
//
//}
