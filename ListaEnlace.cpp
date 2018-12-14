#include "ListaEnlace.h"

#include <iostream>
using std::cout;
using std::endl;

ListaEnlace::ListaEnlace(){
  inicio=0;
}

bool ListaEnlace::push(Object* obj){
  Node* newNode= new Node(obj);
  newNode->setNext(inicio);
  inicio=newNode;
  return true;
}

Object* ListaEnlace::top(){
  if (inicio==0) {
    return 0;
  }else{
    return inicio->getData();
  }
}

Object* ListaEnlace::pop(){
  if (inicio==0) {
    return 0;
  }else{
    Node* tmp=inicio;
    inicio=inicio->getNext();
    Object* retValue=tmp->getData();
    tmp->setData(0);
    tmp->setNext(0);
    delete tmp;
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

ListaEnlace::~ListaEnlace(){
  delete inicio;
}
