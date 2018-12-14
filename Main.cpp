#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include <vector>
using std::vector;

#include "Usuario.h"
#include "ListaEnlace.h"
#include "Node.h"
#include "Object.h"

int main(){
  int door=0;
  while (door==0) {
    cout<<"Bienvenido a Pinder"<<endl;
    cout<<"-----------------------------------------"<<endl;
    cout<<"1)Iniciar sesion\n2)Registrarse\n3)Salir"<<endl;
    cout<<"-----------------------------------------"<<endl;
    cout<<"Por favor, ingrese el numero correspondiente: ";
    int op=0;
    cin>>op;
    cout<<"-----------------------------------------"<<endl;
    while (op<1||op>3) {
      cout<<"Error esta opcion no existe, por favor, ingrese de nuevo: ";
      cin>>op;
      cout<<"-----------------------------------------"<<endl;
    }
    if (op==1) {

    }
    if (op==2) {
      cout<<"Por favor ingrese su nombre: ";
    }
    if (op==3) {
      cout<<"¡Gracias vuelva pronto!"<<endl;
      door=1;
    }
  }
  return 0;
}
