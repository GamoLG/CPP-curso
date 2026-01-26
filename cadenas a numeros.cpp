#include<iostream>
#include<string.h>
#include<string>
using namespace std;
int main()
{
	//cadena a numeros
	//con la funcion atoi y atof
	char a[]="123";
	int num;
	num=atoi(a);
	cout<<num<<endl;
	
	char b[]="123.43";
	float num2;
	num2=atof(b);
	cout<<num2<<endl;
	
}