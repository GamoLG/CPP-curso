#include<iostream>
#include<string>
#include<string.h>
#include<cstring>
using namespace std;
int main()
{
	// copiar el contenido de una cadena a otra - funcion strcpy()
	string palabra="hola que tal";
	string copia;
	copia=palabra;
	cout<<copia<<endl;
	
	char palabra2[]="holaaaaa";
	char copia2[20];
	strcpy(copia2, palabra2);
	cout<<copia2<<endl;
	
	string cadena5(palabra);
	cout<<cadena5<<endl;
	

	return 0;
}