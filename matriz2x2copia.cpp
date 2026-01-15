#include<iostream>
using namespace std;
int main()
{
	int matriz[2][2];
	for(int i=0; i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<"ingrese el elemento: "; 
			cin>>matriz[i][j];
		}
	}
	//mostrar la matriz
	cout<<"primera matriz"<<endl;
	for(int i=0; i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<matriz[i][j];
		}
		cout<<endl;
	}
	
	//copiar la matriz original a una copia 
	cout<<endl;
	cout<<"copia de la matriz"<<endl;
	
	int matriz2[2][2];
	
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			matriz2[i][j]=matriz[i][j];
		}
	}
	
	//mostrar la matriz 2
	for(int i=0; i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<matriz2[i][j];
		}
		cout<<endl;
	}
	
	//transpuesta de la matriz
	int matriz3[2][2];
	for(int i=0; i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			matriz3[i][j]=matriz2[j][i];
		}
		cout<<endl;
	}
	//mostrar
	cout<<"matriz transpuesta"<<endl;
	for(int i=0; i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<matriz3[i][j];
		}
		cout<<endl;
	}
	
	//otra forma de hacer la trasnpuesta
	cout<<"matriz normal"<<endl;
	int matrizt[2][2]={{1,2},{4,5}};
	for(int i=0; i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<matrizt[i][j];
		}
		cout<<endl;
	}
	cout<<"matriz transpuesta-otra forma"<<endl;
	for(int i=0; i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<matrizt[j][i];
		}
		cout<<endl;
	}
	
	return 0;
}
	