
#include "Nodo.h"

Nodo::Nodo() : id(-1), NombreCancion(NULL), Artista(NULL), URL(NULL), anterior(nullptr), siguiente(nullptr)
{
}

Nodo::Nodo(int ID, string cancion, string artista, string url, Nodo* _anterior, Nodo* _siguiente)
	: id(ID), NombreCancion(cancion), Artista(artista), URL(url), anterior(_anterior), siguiente(_siguiente)
{
}

void Nodo::setID(int ID)
{
	this->id = ID;
}

int Nodo::getID()
{
	return this->id;
}


void Nodo::setArtista(string artista)
{
	this->Artista = artista;
}

string Nodo::getArtista()
{
	return this->Artista;
}

void Nodo::setCancion(string cancion)
{
	this->NombreCancion = cancion;
}

string Nodo::getCancion()
{


	return this->NombreCancion;
}


void Nodo::setURL(string url)
{
	this->URL = url;
}

string Nodo::getURL()
{


	return this->URL;
}



void Nodo::setSiguiente(Nodo* _siguiente)
{
	this->siguiente = _siguiente;
}

Nodo* Nodo::getSiguiente()
{
	return this->siguiente;
}

void Nodo::setAnterior(Nodo* _anterior)
{
	this->anterior = _anterior;
}

Nodo* Nodo::getAnterior()
{
	return this->anterior;
}