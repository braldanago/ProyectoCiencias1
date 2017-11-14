#include <iostream>
#include <fstream>

using namespace std;

class MemoriaSecundaria{
	
	ifstream ficheroEntrada;
	ofstream ficheroSalida;
	string nombreFichero;
	public:
		MemoriaSecundaria();
		void setNombreFichero(string);
		string getNombreFichero();



};

MemoriaSecundaria::MemoriaSecundaria(){

}

void MemoriaSecundaria::setNombreFichero(string n){
	this->nombreFichero=n;
}

string MemoriaSecundaria::getNombreFichero(){
	return this->nombreFichero;
}


//MemoriaSecundaria Memoria2("hola");
	
	/*
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
 	
 
	

	

	*/

