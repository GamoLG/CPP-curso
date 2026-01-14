#include<iostream>
using namespace std;
int main()
{
	//imprimir numeros del 1 al 10
	for(int i=1;i<=10;i++)
	{
		cout<<i<<endl;
	}
	//Imprimir números pares del 2 al 20
	cout<<" pregunta 2"<<endl;
	
	for (int i=2;i<=20;i+=2)
	{
		cout<<i<<endl;
	}
	//imprimir numeros del 10 al 1
	cout<<"inverso"<<endl;
	for(int i=10;i>=0;i--)
	{
		cout<<i<<" ";
	}
	cout<<endl;
	// Mostrar los números del 1 al 50 que sean múltiplos de 3
	for(int i=1;i<=50;i++)
	{
		if(i%3==0)
		{
			cout<<i<<" ";
		}
	}
	cout<<endl;
	cout<<"otro ejercicio"<<endl;
	//Contar cuántos números pares hay entre 1 y 100
	int contador=0;
	for(int i=1;i<=100;i++)
	{
		if(i%2==0)
		{
			cout<<i<<" ";
			contador+=1;
		}
	}
	cout<<"el numero de pares es: "<<contador;
	cout<<endl;
	//Sumar los números del 1 al 100
	int suma=0;
	for(int i=0;i<=100;i++)
	{
		suma+=i;
	}
	cout<<"la suma es: "<<suma<<endl;
	
	//Calcular el factorial de un número
	cout<<"factorial de un numero"<<endl;
	int numero;
	long long resultado=1;
	cout<<"ingrese un numero: "; cin>>numero;
	for(int i=1;i<=numero;i++)
	{
		resultado*=i;
		
	}
	cout<<resultado;
	return 0;
}