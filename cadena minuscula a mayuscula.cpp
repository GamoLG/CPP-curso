#include<iostream>
#include<string.h>
#include<string>
#include<algorithm>  //para transform()
#include<cctype>   //para toupper()
using namespace std;
int main()
{
	//pasar una cadena a mayuscula
	char a[]="alex";
	//funcion strupr()
	strupr(a);
	cout<<a<<endl;
	
	//manualmente
	char b[]="jhoel";
	for(int i=0;b[i]!='\0';i++)
	{
		if(b[i]>='a' and b[i]<='z')
		{
			b[i]=b[i]-32;
			
		}
	}
	cout<<b<<endl;
	//c++  moderno
	//usando transform()
	string palabra1="luicho";
	transform(palabra1.begin(),palabra1.end(),palabra1.begin(),::toupper);
	cout<<palabra1<<endl;
	
	// manualmente
	string texto="hola mundo";
	for(char &c : texto)
	{
		c=toupper(c);
	}
	cout<<texto<<endl;
	
}