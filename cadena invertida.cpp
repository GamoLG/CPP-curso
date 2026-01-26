#include<iostream>
#include<string.h>
#include<string>
#include<algorithm>  // para aplicar reverse
using namespace std;
int main()
{
	//invertir una cadena en turbo c
	char cad[]="alex";
	//funcion strrev()
	strrev(cad);
	cout<<cad<<endl;
	//con la funcion reverse
	string cadena="jhoel";
	reverse(cadena.begin(), cadena.end());
	cout<<cadena<<endl;
	//manualmente
	string cad2="luicho";
	string invertido="";
	for(int i=cad2.length()-1;i>=0;i--)
	{
		invertido+=cad2[i];
	}
	cout<<invertido<<endl;
	
	return 0;
}