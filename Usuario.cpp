#include "Usuario.h"

#include <vector>
using std::vector;

#include <string>
using std::string;

Usuario::Usuario(){
  nombre="";
  edad=0;
  genero="";
}

Usuario::~Usuario(){
  if (this->contactos.empty()) {
    /* code */
  }else{
    for (int i = 0; i < this->contactos.size(); i++) {
      delete this->contactos[i];
    }
    this->contactos.clear();
    this->intereses.clear();
  }
}

Usuario::Usuario(string nombre, int edad, string genero){
  this->nombre=genero;
  this->edad=edad;
  this->genero=genero;
}

string Usuario::getNombre(){
  return nombre;
}

void Usuario::setNombre(string nombre){
  this->nombre=nombre;
}

int Usuario::getEdad(){
  return edad;
}

void Usuario::setEdad(int edad){
  this->edad=edad;
}

string Usuario::getPassword(){
  return password;
}

void Usuario::setPassword(string password){
  this->password=password;
}

string Usuario::getGenero(){
  return genero;
}

void Usuario::setGenero(string genero){
  this->genero=genero;
}

void Usuario::setContactos(vector<Usuario*> contactos){
   this->contactos=contactos;
}

vector<Usuario*> Usuario::getContactos(){
    return contactos;
}

void Usuario::addContactos(Usuario* c){
    contactos.push_back(c);
}

void Usuario::setIntereses(vector<string> intereses){
   this->intereses=intereses;
}

vector<string> Usuario::getIntereses(){
    return intereses;
}

void Usuario::addIntereses(string c){
    intereses.push_back(c);
}
