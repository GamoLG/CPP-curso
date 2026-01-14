#include<iostream>
using namespace std;
int main()
{
	int filas,columnas;
	cout<<"ingrese el numero de filas: "; cin>>filas;
	cout<<"ingrese el numro de columnas: "; cin>>columnas;
	
	int matrices[filas][columnas];
	for(int i=0;i<filas;i++)
	{
		for(int j=0; j<columnas;j++)
		{
			cout<<"ingrese el elemento: "; cin>>matrices[i][j];
		}
	}
	
	//mostrar la matriz
	for(int i=0;i<filas;i++)
	{
		for(int j=0; j<columnas;j++)
		{
			cout<<matrices[i][j];		
		}
		cout<<endl;
	}
	
	
	return 0;
}