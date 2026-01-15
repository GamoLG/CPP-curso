#include<iostream>
#include<stdlib.h> // para rand y srand
#include<time.h>
using namespace std;


int main()
{
	int filas, columnas;
	cout<<"ingrese el numero de filas: "; cin>>filas;
	cout<<"ingrese el numero de columnas: "; cin>>columnas;
	int matriz[filas][columnas];
	int numeros;
	srand(time(NULL));
	
	// guardamos elementos en la matriz
	for(int i=0;i<filas;i++)
	{
		for(int j=0;j<columnas;j++)
		{
			numeros=1+rand()%(100);
			matriz[i][j]=numeros;
		}
		cout<<endl;
	}
	// mostrar la matriz general
	for(int i=0;i<filas;i++)
	{
		for(int j=0;j<columnas;j++)
		{
			cout<<matriz[i][j]<<" ";
		}
		cout<<endl;
	}
	

	return 0;
}