#include <iostream>
#include "MemoriaSecundaria.cpp"
#include "Reporte.cpp"
#include "Viajero.cpp"
#include "Aerolinea.cpp"

using namespace std;

class Sistema{
	MemoriaSecundaria Memoria2;
	Viajero user;
	Aerolinea aero;
	
	public:
		Sistema();
		void registroUsuario();
		void registroAerolinea();
		
};

Sistema::Sistema(){
}

void Sistema::registroUsuario(){
	string nom,ape,doc,sexo;
	int edad;
	cout<<"\n\t REGISTRO DE USUARIO \n";
	cout<<"Ingrese nombre: ";
	cin>>nom;
	cout<<"Ingrese apellido: ";
	cin>>ape;
	cout<<"Ingrese numero de documento: ";
	cin>>doc;
	cout<<"Ingrese genero: ";
	cin>>sexo;
	cout<<"Ingrese edad: ";
	cin>>edad;
	if(!user.buscar(doc)){
		user.agregar(nom,ape,doc,sexo,edad);
		cout<<"Usuario se ha registrado con exito!"<<endl;
	}else{
		cout<<"Usuario ya se encuentra registrado"<<endl;
	}
	user.mostrar();
}

void Sistema::registroAerolinea(){
	string nombre;
	int ctaBanco;
	
	cout<<"\n\t REGISTRO DE AEROLINEA \n";
	cout<<"Ingrese nombre: ";
	cin>>nombre;
	cout<<"Ingrese cuenta bancaria: ";
	cin>>ctaBanco;
	if(!aero.buscarAerolinea(ctaBanco)){
		aero.agregarAerolinea(nombre,ctaBanco);
		cout<<"Aerolinea se ha registrado con exito!"<<endl;
	}else{
		cout<<"Aerolinea ya se encuentra registrada"<<endl;
	}
	aero.mostrarAerolinea();
}

