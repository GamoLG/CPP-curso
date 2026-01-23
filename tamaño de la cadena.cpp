#include<iostream>
#include<string.h>  //-> para el strlen()
#include<string>
using namespace std;
int main()
{
	char palabra[]="hsodifhsñfejf";
	int longitud=0;
	longitud=strlen(palabra); // devulve ell tamaño de la palabra en enteros
	cout<<"la longitud es: "<<longitud<<endl;
	//ahora con la biblioteca string
	string palabra2="fnvdlfvndklvnvkf";
	int longitud2=0;
	longitud2=palabra2.length();
	
	cout<<"la longitud 2 es: "<<longitud2<<endl;
	
	//ahora con size
	 string palabra3="sfkbsrkvbsbvvbc";
	 int longitud3=palabra3.size();
	 cout<<"longitud de la palabra 3: "<<longitud3<<endl;
	
	return 0;
}