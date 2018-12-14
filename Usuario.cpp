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

Usuario::Usuario(string nombre, int edad, string password, string genero){
  this->nombre=nombre;
  this->edad=edad;
  this->password=password;
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

string Usuario::toString(){
  return "Nombre: " + this->nombre + "\n" + "Edad" + std::to_string(this->edad) + "\n" + "Genero" + this->genero + "\n";
}

void Usuario::read(ifstream& in){
  int size;
  in.read(reinterpret_cast<char*>(&size),sizeof(int));
  char nameBuffer[size+1];
  in.read(nameBuffer,size);
  nameBuffer[size]=0;
  nombre=nameBuffer;

  in.read(reinterpret_cast<char*>(&edad), sizeof(int));

  in.read(reinterpret_cast<char*>(&size),sizeof(int));
  char numBuffer[size+1];
  in.read(numBuffer, size);
  numBuffer[size]=0;
  password=numBuffer;

  in.read(reinterpret_cast<char*>(&size),sizeof(int));
  char carreraBuffer[size+1];
  in.read(carreraBuffer, size);
  carreraBuffer[size]=0;
  genero=carreraBuffer;
}

void Usuario::write(ofstream& out){
  int size = nombre.size();

  out.write(reinterpret_cast<char*>(&size),sizeof(int));
  out.write(nombre.data(),size);

  out.write(reinterpret_cast<char*>(&edad),sizeof(int));

  size=password.size();
  out.write(reinterpret_cast<char*>(&size),sizeof(int));
  out.write(password.data(),size);

  size=genero.size();
  out.write(reinterpret_cast<char*>(&size),sizeof(int));
  out.write(genero.data(),size);
}
