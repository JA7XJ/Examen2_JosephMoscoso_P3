#ifndef LISTAENLACE_H
#define LISTAENLACE_H

#include "Node.h"

class ListaEnlace{
  private:
    Node* inicio;
  public:
    ListaEnlace();
    bool push(Object*);
    Object* pop();
    Object* top();
    void print();
    ~ListaEnlace();
};

#endif
