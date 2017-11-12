#include <iostream>

using namespace std;


struct NodoAL{
	string nombre;
	int avionesDisponibles;
	//itinerariosdelaño ???? lista de lista?
	int cuentaBancaria;
	NodoAL *sig;
};

class Aerolinea{
	NodoAL *cab;
	
	public:
		Aerolinea();
		void agregar(string,int,int);
		void mostrar();
		int getCuentaBancaria();
};

Aerolinea::Aerolinea(){
	cab=NULL;
}

void Aerolinea::agregar(string nom,int avDisp,int ctaBanco){
	NodoAL *p = new NodoAL;
	p->nombre=nom;
	p->avionesDisponibles=avDisp;
	p->cuentaBancaria=ctaBanco;
	p->sig=cab;
	cab=p;
}

void Aerolinea::mostrar(){
	NodoAL *p = cab;
	while(p){
		cout<<"Nombre: "<<p->nombre<<" No aviones disp: "<<p->avionesDisponibles<<" Cuenta banco: "<<p->cuentaBancaria<<endl;
		p=p->sig;
	}
}

