#include <iostream>
#include "Aerolinea.cpp"
#include "Viajero.cpp" 
#include <fstream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

char menuPrincipal();
int main(int argc, char** argv) {
	Aerolinea avion;
	Viajero usuario;
	
	ifstream ficheroEntrada;
	ofstream ficheroSalida;
	string frase;
	
 	ficheroSalida.open ("usuarios.txt");
 	ficheroSalida << "Texto para el ficher\n";
 	ficheroSalida << "Texto para el fichero";
 	ficheroSalida.close();
 	
 	ficheroEntrada.open("usuarios.txt");
 	getline(ficheroEntrada, frase);
 	ficheroEntrada.close();
 	
 	cout<<frase<<endl;
	/*
	usuario.agregar("pepito","sanchez","123","M",23);
	usuario.agregar("pepe","sanchez","1234","M",2);
	usuario.agregar("pedro","sanchez","1235","M",3);
	usuario.agregar("pendejo","sanchez","1236","M",233);
	usuario.agregar("andres","sanchez","127","M",233);
	usuario.agregar("andrea","sanchez","1238","M",23);
	usuario.agregar("antonia","sanchez","1239","M",23);
	usuario.agregar("antonio","sanchez","120","M",23);
	usuario.agregar("luis","sanchez","121","M",23);
	usuario.agregar("luisa","sanchez","122","M",23);
	usuario.agregar("julio","sanchez","123","M",23);
	usuario.agregar("julia","sanchez","123","M",23);
	usuario.agregar("juan","sanchez","123","M",23);
	usuario.agregar("juana","sanchez","123","M",23);
	usuario.agregar("emilio","montenegro","123","M",23);
	usuario.agregar("jose","villada","123","M",23);
	
	usuario.mostrar();
	
	*/
	

	
	menuPrincipal();
}

char menuPrincipal(){
	char opc;
	cout<<"\tBienvenido a reservalo.com\n";
	cout<<"Registro usuario\n";
	cout<<"Registro Aerolinea\n";
	cout<<"Reportes\n";
	cout<<"Terminar\n";
	cout<<"Ingrese su opcion: ";
	cin>>opc;
	return opc;
}
