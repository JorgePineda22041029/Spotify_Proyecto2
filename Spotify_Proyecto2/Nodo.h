#pragma once

#ifndef NODO_H
#define NODO_H

using namespace std;
#include <iostream>
#include <string>

 class Nodo
{
private:

	int id;
	string Artista;
	string NombreCancion;
	string URL;


	
	Nodo* siguiente; 
	Nodo* anterior; 

public:
	Nodo();
	Nodo(int, string, string, string, Nodo*, Nodo*);


	void setID(int);
	int getID();

	void setArtista(string);
	string getArtista();

	void setCancion(string);
	string getCancion();

	void setURL(string);
	string getURL();

	void setSiguiente(Nodo*);
	Nodo* getSiguiente();

	void setAnterior(Nodo*);
	Nodo* getAnterior();

};

#endif 