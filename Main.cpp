#include <iostream>//Inicio fase 2
using std::cout;
using std::endl;
using std::cin;

#include <vector>
using std::vector;

#include <string>
using std::string;

#include "Usuario.h"
#include "ListaEnlace.h"
#include "Node.h"
#include "Object.h"

int main(){
  int door=0;
  ListaEnlace* lista=new ListaEnlace();
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
      cout<<"Ingrese el nombre: ";
      string nombre="";
      cin>>nombre;
      cout<<"Ingrese la contraseña: ";
      string contra="";
      cin>>contra;
      bool entrar=false;
      bool log=false;
      int counter=0;
      Usuario* temp=NULL;
      Usuario* actual=NULL;
      vector<Usuario*> temp2;
      cout<<"-----------------------------------------"<<endl;
      while (counter<lista->getSize()) {
        temp=lista->pop();
        temp2.push_back(temp);
        if (nombre==temp->getNombre()&&contra==temp->getPassword()) {
          log=true;
          actual=temp;
        }
        counter=counter+1;
      //  delete temp;
      }
      /*int counter2=0;
      while (counter2<temp2.size()) {
        lista->push(temp2[counter2]);
        counter2=counter2+1;
      }
      for (int i = 0; i < temp2.size(); i++) {
          delete temp2[i];
      }*/
      //temp2.clear();
      if (log==true) {
        int inicio=0;
        while (inicio==0) {
          cout<<"Bienvenido: "<<nombre<<endl;
          cout<<"-----------------------------------------"<<endl;
          cout<<"1)Buscar amigos\n2)Eliminar Amigos\n3)Salir"<<endl;
          cout<<"-----------------------------------------"<<endl;
          cout<<"Ingrese la opcion indicada: ";
          int op2=0;
          cin>>op2;
          cout<<"-----------------------------------------"<<endl;
          while (op2<1||op2>3) {
            cout<<"Error, ingrese la opcion correcta: ";
            cin>>op2;
            cout<<"-----------------------------------------"<<endl;
          }
          if (op2==1) {
            int c=0;
            Usuario* t=NULL;
            cout<<"Sugerencia de amigos"<<endl;
            cout<<"-----------------------------------------"<<endl;
            /*while (c<lista->getSize()) {
              t=lista->pop();
              temp2.push_back(t);
              cout<<c<<")Nombre: "<<temp2[c]->getNombre()<<" Intereses: "<<endl;
              for (int i = 0; i < temp2[c]->getIntereses().size(); i++) {
                  if (temp2[c]->getIntereses()[i]==actual->getIntereses()[i]) {
                      cout<<temp2[c]->getIntereses()[i]<<"\n";
                  }
              }
              c=c+1;
              delete t;
            }*/
            for (int i = 0; i < temp2.size(); i++) {
                for (int j = 0; j < temp2[i]->getIntereses().size(); j++) {
                    if (actual->getIntereses().empty()) {
                      /* code */
                    }else{
                      for (int k = 0; k < actual->getIntereses().size(); k++) {
                          if (actual->getIntereses()[k]==temp2[i]->getIntereses()[j]) {
                              cout<<i<<")Nombre: "<<temp2[i]->getNombre()<<" Intereses: "<<temp2[i]->getIntereses()[j]<<"\n";
                          }
                      }
                    }

                }
            }
            /*int c2=0;
            while (c2<temp2.size()) {
              lista->push(temp2[c2]);
              c2=c2+1;
            }
            for (int i = 0; i < temp2.size(); i++) {
                delete temp2[i];
            }
            temp2.clear();*/
            bool everyone=false;
            cout<<"-----------------------------------------"<<endl;
            cout<<"Todos"<<endl;
            cout<<"-----------------------------------------"<<endl;
            for (int i = 0; i < temp2.size(); i++) {
                for (int j = 0; j < actual->getContactos().size(); j++) {
                    if (actual->getContactos()[j]->getNombre()==temp2[i]->getNombre()) {

                    }else{
                      cout<<i<<")"<<temp2[i]->getNombre()<<endl;
                    }
                }
            }
            /*int cc=0;
            bool xx=false;
            while (cc<lista->getSize()) {
              t=lista->pop();
              temp2.push_back(t);
              for (int i = 0; i < actual->getContactos().size(); i++) {
                  if (temp2[cc]->getNombre()==actual->getContactos()[i]->getNombre()) {
                    xx=false;
                  }else{
                    xx=true;
                  }
              }
              if (xx==true) {
                  cout<<"Nombre: "<<temp2[cc]->getNombre()<<endl;;
              }
              cc=cc+1;
              delete t;
            }*/

            //c2=0;
            /*while (c2<temp2.size()) {
              lista->push(temp2[c2]);
              c2=c2+1;
            }
            for (int i = 0; i < temp2.size(); i++) {
                delete temp2[i];
            }*/
            //temp2.clear();*/
            cout<<"-----------------------------------------"<<endl;
            cout<<"Ingrese el indice de la persona a agregar: ";
            int agregar=0;
            cin>>agregar;
            for (int i = 0; i < temp2.size(); i++) {
                if (actual->getNombre()==temp2[i]->getNombre()&&actual->getPassword()==temp2[i]->getPassword()) {
                    temp2[i]->addContactos(temp2[agregar]);
                    temp2[agregar]->addContactos(temp2[i]);
                }
            }
            cout<<"Contactos"<<endl;
            for (int i = 0; i < actual->getContactos().size(); i++) {
                cout<<i<<actual->getContactos()[i]->getNombre()<<endl;
            }
            /*c2=0;            //actual->addContactos(temp2[agregar]);
            while (c2<temp2.size()) {
              lista->push(temp2[c2]);
              c2=c2+1;
            }
            for (int i = 0; i < temp2.size(); i++) {
                delete temp2[i];
            }*/
            for (int i = 0; i < temp2.size(); i++) {
                lista->push(temp2[i]);
            }
            cout<<"-----------------------------------------"<<endl;
            cout<<"Contacto agregado con exito"<<endl;
            cout<<"-----------------------------------------"<<endl;
            //delete actual;
            temp2.clear();
          }
          if (op2==2) {

          }
          if (op2==3) {
            cout<<"Log out exitoso"<<endl;
            cout<<"-----------------------------------------"<<endl;
            //delete actual;
            inicio=1;
          }
        }
      }else{
        cout<<"Lo siento, no existe el usuario"<<endl;
        for (int i = 0; i < temp2.size(); i++) {
            lista->push(temp2[i]);
        }
        temp2.clear();
      }
    }
    if (op==2) {
      cout<<"Por favor ingrese su nombre: ";
      string nombre="";
      cin>>nombre;
      /*getline(cin,nombre);
      getline(cin,nombre);*/
      cout<<"Por favor ingrese su edad: ";
      int edad=0;
      cin>>edad;
      cout<<"Ingrese su contraseña: ";
      string pass="";
      cin>>pass;
      cout<<"Ingrese su genero: ";
      string gender="";
      cin>>gender;
      int puerta=0;
      vector<string> intereses;
      while (puerta==0) {
          cout<<"1=No, 0=Si\n¿Desea agregar intereses?[1/0]: ";
          cin>>puerta;
          if (puerta==0) {
              cout<<"Ingrese su interes: ";
              string inter="";
              //getline(cin, inter);
              cin>>inter;
              //getline(cin, inter);
              intereses.push_back(inter);
          }
          if(puerta==1){
              puerta==1;
          }
      }
      if (intereses.empty()) {
        lista->push(new Usuario(nombre,edad,pass,gender));
        cout<<"-----------------------------------------"<<endl;
        cout<<"¡Usuario registrado con exito!"<<endl;
        cout<<"-----------------------------------------"<<endl;
      }else{
        lista->push(new Usuario(nombre,edad,pass,gender));
        lista->top()->setIntereses(intereses);
      //ofstream users("Usuarios.dat", std::ios::binary);
      //lista->top()->write(users);
      //users.close();
        intereses.clear();
        cout<<"-----------------------------------------"<<endl;
        cout<<"¡Usuario registrado con exito!"<<endl;
        cout<<"-----------------------------------------"<<endl;
      }
    }
    if (op==3) {
      cout<<"¡Gracias vuelva pronto!"<<endl;
      door=1;
      delete lista;
    }
  }
  return 0;
}
