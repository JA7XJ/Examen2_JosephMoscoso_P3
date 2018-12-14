execute:	Main.o Usuario.o ListaEnlace.o Node.o Object.o
	g++ Main.o Usuario.o ListaEnlace.o Node.o Object.o -o execute

Usuario.o: Usuario.h Usuario.cpp
	g++ -c Usuario.cpp

ListaEnlace.o: ListaEnlace.h ListaEnlace.cpp
	g++ -c ListaEnlace.cpp

Node.o: Node.h Node.cpp
	g++ -c Node.cpp

Object.o: Object.h Object.cpp
	g++ -c Object.cpp

Main.o: Main.cpp
	g++ -c Main.cpp
