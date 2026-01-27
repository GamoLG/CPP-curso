#include<iostream>
#include<string.h>
#include<string>
using namespace std;
int main()
{
	
	string cadena;
	int a=0,e=0,i_count=0,o=0,u=0;
	cout<<"ingrese una palabra o frase: "; getline(cin,cadena);
	cout<<cadena<<endl;
	for(int i=0; i<cadena.length();i++)
	{
		/*
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
			i_count++;
		}
		if(cadena[i]=='o' or cadena[i]=='O')
		{
			o++;
		}
		if(cadena[i]=='u' or cadena[i]=='U')
		{
			u++;
		}
		*/
		//con switch
		switch(cadena[i])
		{
			case 'a': case 'A':
				a++; break;
			case 'e': case 'E':
				e++; break;
			case 'i': case 'I':
				i_count++; break;
			case 'o': case 'O':
				o++; break;
			case 'u': case 'U':
				u++; break;
					
		}
	}
	cout<<"la cantidad de vocales son: "<<endl;
	cout<<"a: "<<a<<", e: "<<e<<",i: "<<i_count<<", o: "<<o<<",u: "<<u<<endl;
	
	
	
	
	return 0;
}