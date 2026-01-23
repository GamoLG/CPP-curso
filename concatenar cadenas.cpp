#include<iostream>
#include<string>
#include<string.h>
#include<cstring>
using namespace std;
int main()
{
	//concatenar cadenas
	string cad1="hola";
	string cad2="como";
	string cad3=cad1+" "+cad2;
	cout<<cad3<<endl;
	
	//con la funciona srtcat()
	char a[]="hola";
	char b[]="como";
	
	char c[10];
	strcpy(c,a);
	strcat(c,b);
	
	cout<<c<<endl;
	

	return 0;
}