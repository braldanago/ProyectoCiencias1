#include <iostream>

using namespace std;

struct Aerolineas{
	string nombre;
	int avionesDisponibles;
	//itinerariosdelaño ???? lista de lista?
	int cuentaBancaria;
	Aerolineas *sig;
};

struct Destinos{
	string destino;
	Destinos *sig;
};

class Aerolinea{
	Aerolineas *cabAero;
	Destinos * cabDestino;
	
	public:
		Aerolinea();
		void agregarAerolinea(string,int);
		void agregarDestinos(string);
		void mostrarAerolinea();
		void mostrarDestinos();
		Aerolineas *buscarAerolinea(int);
		
};

Aerolinea::Aerolinea(){
	cabAero=NULL;
	cabDestino=NULL;
}

void Aerolinea::agregarAerolinea(string nom,int ctaBanco){
	Aerolineas *p = new Aerolineas;
	p->nombre=nom;
	p->cuentaBancaria=ctaBanco;
	p->sig=cabAero;
	cabAero=p;
}

void Aerolinea::agregarDestinos(string destino){
	Destinos *p = new Destinos;
	p->destino=destino;
	p->sig=cabDestino;
	cabDestino=p;
}

void Aerolinea::mostrarAerolinea(){
	Aerolineas *p = cabAero;
	while(p){
		cout<<"Nombre: "<<p->nombre<<" Cuenta banco: "<<p->cuentaBancaria<<endl;
		p=p->sig;
	}
}

void Aerolinea::mostrarDestinos(){
	Destinos *p = cabDestino;
	while(p){
		cout<<"Destino: "<<p->destino<<endl;
		p=p->sig;
	}
}

Aerolineas *Aerolinea::buscarAerolinea(int cta){
	Aerolineas *p = cabAero;
	while(p!=NULL){
		if(p->cuentaBancaria==cta){
			return p;
		}
		p=p->sig;
	}
	return p;
}


