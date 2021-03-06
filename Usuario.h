#ifndef USUARIO_H
#define USUARIO_H

#include <vector>
using std::vector;

#include <fstream>
using std::ifstream;
using std::ofstream;

#include <string>
using std::string;

class Usuario{
  private:
    string nombre;
    int edad;
    string password;
    string genero;
    vector<string> intereses;
    vector<Usuario*> contactos;
  public:
    Usuario();
    Usuario(string, int, string, string);
    ~Usuario();
    string getNombre();
    void setNombre(string);
    int getEdad();
    void setEdad(int);
    string getPassword();
    void setPassword(string);
    string getGenero();
    void setGenero(string);
    void setIntereses(vector <string>);
    vector<string> getIntereses();
    void addIntereses(string);
    void setContactos(vector <Usuario*>);
    vector<Usuario*> getContactos();
    void addContactos(Usuario*);
    string toString();
    void write(ofstream&);
    void read(ifstream&);
};

#endif
