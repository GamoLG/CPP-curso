#include<iostream>
using namespace std;
int main()	
{
	int numeros[5]={1,2,4,2,4};
	int suma=0;
	for(int i=0;i<=5;i++)
	{
		suma+=numeros[i];
	}
	cout<<suma;
	
	//ahora para la multiplicacion
	int numeros2[5]={1,2,3,4,0};
	int multiplicacion=1;
	for(int i=0;i<5;i++)
	{
		multiplicacion*=numeros2[i];
	}
	cout<<endl;
	cout<<multiplicacion;
	
	//pedir el tamaño y los elementos 
	
	//tamaño del arreglo
	int n;
	cout<<"ingrese el tamanio del arreglo: "; cin>>n;
	int num[n];
	for(int i=0;i<n;i++)
	{
		cout<<"ingrese el elemento: ";
		cin>>num[i];
		
	}
	
	//ahora de forma inversa
	for(int i=n-1;i>=0;i--)
	{
		cout<<num
		[i]<<endl;
	}
	
	
}