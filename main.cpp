#include <iostream>
#include "nodo.h"
#include <list>

using namespace std;

Nodo* nodo;

int main()
{
    list<Nodo*> grafo;
    Nodo* AB = new Nodo("AB");
    grafo.push_back(AB);
    nodo->grupoActual = 1;

    while(nodo->search(grafo) != NULL){
        nodo->marcar(nodo->search(grafo));
        nodo->buscar(grafo);
        nodo->grupoActual++;
    }

    return 0;
}
