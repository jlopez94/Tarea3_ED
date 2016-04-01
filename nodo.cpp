#include "nodo.h"

Nodo::Nodo(string nombre)
{
    this->nombre = nombre;
}

Nodo::~Nodo()
{
    //dtor
}

Nodo* Nodo :: search(list<Nodo*> grupo)
{
    for(Nodo* nodo : grupo)
        if(nodo->grupo == 0)
            return nodo;
    return NULL;
}

void Nodo :: marcar(Nodo* actual)
{
    actual->grupo = grupoActual;
}

void Nodo :: buscar(list<Nodo*> grupo)
{
    for(Nodo* actual : grupo)
        if(actual->grupo==0){
            bool esActual = true;
            for(Nodo* actual : actual->adj)
                if(actual->grupo == grupoActual)
                    esActual = false;
            if(esActual)
                marcar(actual);
        }
}
