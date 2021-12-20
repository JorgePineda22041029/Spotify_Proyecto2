//#pragma once
//ref class CatalogoCircular
//{
//};

#pragma once

#ifndef LISTA_CIRCULAR_H
#define LISTA_CIRCULAR_H

using namespace std;
#include <iostream>
#include <string>
#include "Nodo.h"

 class CatalogoCircular
{
private:
	Nodo* primero, * ultimo;

	bool existeElemento(int, string, string, string);

public:
	CatalogoCircular();
	CatalogoCircular(int, string, string, string);

	void agregarElemento(int, string, string, string);
	//void insertarElemento(int, int);

	bool estaVacia();

	string imprimir(int);
	//void imprimirReversa();
	string ObtenerUrl(int);


	/*void eliminarElemento(int, string, string, string);*/
};

#endif // !LISTA_CIRCULAR_H