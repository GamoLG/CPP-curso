#include<iostream>
#include<string>
#include<string.h>
#include<cstring>
using namespace std;
int main()
{
// COMPARAR DOS CADENAS		
	string cadena1="hols";
	string cadena2="hola";
	if(cadena1==cadena2)
	{
		cout<<"son iguales"<<endl;
	}
	
	//ahora con char
	char cadena3[]="ha";
	char cadena4[]="ha";
	//con la funcion strcmp()
	if(strcmp(cadena3,cadena4)==0)  //0 es verdad, 1 es falso
	{
		cout<<"son iguales 2"<<endl;
	}
	
	//tambien esa funcion compara quien es mayor alfabeticamente
	
	char cadena5[]="casa";
	char cadena6[]="bebe";
	if(strcmp(cadena5, cadena6)>0)
	{
		cout<<"albeticamente es mayor"<<endl;
	}
	

	return 0;
}