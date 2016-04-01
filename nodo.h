#ifndef NODO_H
#define NODO_H
#include <iostream>
#include <list>
#include <string>

using namespace std;

class Nodo
{
    public:
        Nodo(string nombre);

        string nombre;
        int grupo = 0;
        list<Nodo*> adj;
        int grupoActual;

        Nodo* search(list<Nodo*> grupo);
        void marcar(Nodo* actual);
        void buscar(list<Nodo*> grupo);

        virtual ~Nodo();
};

#endif // NODO_H
