#include<iostream>
#include<string.h>
#include<string>
using namespace std;
int main()
{
	
	string cadena;
	int a=0,e=0,I=0,o=0,u=0;
	cout<<"ingrese una palabra o frase: "; getline(cin,cadena);
	cout<<cadena<<endl;
	for(int i=0; i<cadena.length();i++)
	{
		if(cadena[i]=='a' or cadena[i]=='A')
		{
			a++;
		}
		if(cadena[i]=='e' or cadena[i]=='E')
		{
			e++;
		}
		if(cadena[i]=='i' or cadena[i]=='I')
		{
			I++;
		}
		if(cadena[i]=='o' or cadena[i]=='O')
		{
			o++;
		}
		if(cadena[i]=='u' or cadena[i]=='U')
		{
			u++;
		}
	}
	cout<<"la cantidad de vocales son: "<<endl;
	cout<<"a: "<<a<<", e: "<<e<<",i: "<<I<<", o: "<<o<<",u: "<<u<<endl;
	
	
	
	
	return 0;
}