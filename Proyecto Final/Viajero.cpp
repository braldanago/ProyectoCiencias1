#include <iostream>

using namespace std;

struct Usuario{
	string nombre;
	string apellido;
	string numDocumento;
	string sexo;
	int edad;
	Usuario *sig;	
};

class Viajero{
	Usuario *cab;
	public:
		Viajero();
		void agregar(string,string,string,string,int);
		void mostrar();
	
	
};

Viajero::Viajero(){
	cab==NULL;
}

void Viajero::agregar(string nom,string ape,string numDoc,string sexo,int edad){
	Usuario *p = new Usuario;
	p->nombre=nom;
	p->apellido=ape;
	p->numDocumento=numDoc;
	p->sexo=sexo;
	p->edad=edad;
	p->sig=cab;
	cab=p;
}

void Viajero::mostrar(){
	Usuario *p = cab;

	
	while(p){
		cout<<"Nombre: "<<p->nombre<<" Apellido: "<<p->apellido<<" No Doc: "<<p->numDocumento<<" Sexo: "<<p->sexo<<" Edad: "<<p->edad<<endl;
		p=p->sig;
	}
}


