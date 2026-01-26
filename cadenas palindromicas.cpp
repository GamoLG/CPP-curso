#include<iostream>
#include<string.h>
#include<string>
#include<algorithm>  // para aplicar reverse
using namespace std;
int main()
{
	
	//determinar si una palabra es polindroma
	string cadena="osko";
	string cadena2=cadena;
	reverse(cadena2.begin(), cadena2.end());
	if(cadena2==cadena)
	{
		cout<<"es palindromo"<<endl;
	}
	else
	{
		cout<<"no es palindromo"<<endl;
	}
}