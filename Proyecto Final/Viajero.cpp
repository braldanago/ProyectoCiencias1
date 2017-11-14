#include <iostream>

using namespace std;

struct Usuarios{
	string nombre;
	string apellido;
	string numDocumento;
	string sexo;
	int edad;
	Usuarios *sig;
};

class Viajero{
	Usuarios *cab;
	public:
		Viajero();
		void agregar(string,string,string,string,int);
		void mostrar();
		Usuarios *buscar(string);//Retorna 1 si se encuentra, -1 en caso contrario.
	
	
};

Viajero::Viajero(){
	cab=NULL;
}

void Viajero::agregar(string nom,string ape,string numDoc,string sexo,int edad){
	Usuarios *p = new Usuarios;
	p->nombre=nom;
	p->apellido=ape;
	p->numDocumento=numDoc;
	p->sexo=sexo;
	p->edad=edad;
	p->sig=cab;
	cab=p;
}

void Viajero::mostrar(){
	Usuarios *p = cab;
	while(p!=NULL){
		cout<<"Nombre: "<<p->nombre<<" Apellido: "<<p->apellido<<" No Doc: "<<p->numDocumento<<" Sexo: "<<p->sexo<<" Edad: "<<p->edad<<endl;
		p=p->sig;
	}
}

Usuarios *Viajero::buscar(string doc){// 1 si ya está registrado, -1 si no lo está
	Usuarios *q = cab;
	while(q!=NULL){
		if(q->numDocumento==doc){
			return q;
		}
		q=q->sig;
	}
	return q;
}


