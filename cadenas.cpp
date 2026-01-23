#include<iostream>
#include<string.h>
#include<string>
using namespace std;
int main()
{
	char palabra[]="jhoel";
	char nombre[3];
	//cout<<"ingrese un nombre: ";
	//gets(nombre); guarda sin importar cuanto de especio tenga
	//cin.getline(nombre,3,'\n'); // se imprime menos 1 caracter, reservado para el vacio
	//mejor utilizar sting
	
	string nombre2;
	cout<<"ingrese nombre: "; 
	getline(cin, nombre2);
	cout<<nombre2<<endl;
	
	cout<<nombre<<endl;
	//cout<<palabra<<endl;
}