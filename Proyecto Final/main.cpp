#include <iostream>
#include "Sistema.cpp" 
#include <fstream>


using namespace std;

char menuPrincipal();

int main(int argc, char** argv) {
	char opcion;
	Sistema sistema;


	do{
		opcion=menuPrincipal();
		switch(opcion){
			case 'u':
			case 'U':{
				sistema.registroUsuario();
				break;
			}
			case 'a':
			case 'A':{
				sistema.registroAerolinea();
				break;
			}
			case 'r':
			case 'R':{
				
				break;
			}
		}	
	}while(opcion!='t' && opcion!='T');
	return 0;
}

char menuPrincipal(){
	char opc;
	cout<<"\n \tBienvenido a reservalo.com\n";
	cout<<"Registro (U)suario\n";
	cout<<"Registro (A)erolinea\n";
	cout<<"(R)eportes\n";
	cout<<"(T)erminar\n";
	cout<<"Ingrese su opcion: ";
	cin>>opc;
	return opc;
}
