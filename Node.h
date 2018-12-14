#ifndef NODE_H
#define NODE_H

#include "Object.h"

class Node{
  private:
    Object* data;
    Node* next;
  public:
    Node(Object*);
    Node();
    Object* getData();
    void setData(Object*);
    void setNext(Node*);
    Node* getNext();
    ~Node();
};

#endif
