#include<iostream>
#include<string>
#include<string.h>
#include<cstring>
using namespace std;
int main()
{
	// PONER TU NOMBRE Y QUE EL SISTEMA DE DIGA OLA QUE TAL (NOMBRE)
	string saludo="hola, que tal";
	string nombre;
	cout<<"ingrese su nombre: "; cin>>nombre;
	//
	string completo=saludo+" "+nombre;
	cout<<completo<<endl;
	cin.ignore(); //limpian antes de usar la funcion 
	//con librerias c
	cout<<"ahora con librerias c"<<endl;
	char a[]="hola, que tal ";
	char b[20];
	cout<<"ingrese su nombre: ";
	cin.getline(b,20,'\n');
	char c[40];
	strcpy(c,a);
	strcat(c,b);
	cout<<c<<endl;
	
}