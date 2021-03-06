#include "ListaEnlace.h"
#include "Usuario.h"

#include <iostream>
using std::cout;
using std::endl;

ListaEnlace::ListaEnlace(){
  inicio=0;
  size=0;
}

bool ListaEnlace::push(Usuario* obj){
  Node* newNode= new Node(obj);
  newNode->setNext(inicio);
  inicio=newNode;
  size=size+1;
  return true;
}

Usuario* ListaEnlace::top(){
  if (inicio==0) {
    return 0;
  }else{
    return inicio->getData();
  }
}

Usuario* ListaEnlace::pop(){
  if (inicio==0) {
    return 0;
  }else{
    Node* tmp=inicio;
    inicio=inicio->getNext();
    Usuario* retValue=tmp->getData();
    tmp->setData(0);
    tmp->setNext(0);
    delete tmp;
    size=size-1;
    return retValue;
  }
}

void ListaEnlace::print(){
  Node* tmp=inicio;
  cout<<"Stack:>>";
  while (tmp!=0) {
    cout<<"<"<<tmp->getData()->toString()<<">";
    tmp=tmp->getNext();
  }
  cout<<endl;
}

int ListaEnlace::getSize(){
  return size;
}

ListaEnlace::~ListaEnlace(){
  delete inicio;
}
