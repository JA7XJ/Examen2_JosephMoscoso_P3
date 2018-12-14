#ifndef LISTAENLACE_H
#define LISTAENLACE_H

#include "Node.h"
#include "Usuario.h"

class ListaEnlace{
  private:
    Node* inicio;
  public:
    ListaEnlace();
    bool push(Usuario*);
    Usuario* pop();
    Usuario* top();
    void print();
    ~ListaEnlace();
};

#endif
