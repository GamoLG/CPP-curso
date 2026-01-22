#include<iostream>
using namespace std;
int main()
{
		
	//sumar dos matrices 3x3
	
	int matriz1[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int matriz2[3][3]={{1,1,1},{1,1,1},{1,1,1}};
	int matrizSuma[3][3];
	//mostrar la matriz 1
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<matriz1[i][j];
		}
		cout<<endl;
	}
	cout<<endl;
	//mostrar la matriz 2
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<matriz2[i][j];
		}
		cout<<endl;
	}
	cout<<endl;
	
	//sumamos ambas matrices: matriz1+matriz2
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			matrizSuma[i][j]=matriz1[i][j]+matriz2[i][j];
		}
	}
	//mastrar la matriz suma
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<matrizSuma[i][j];
		}
		cout<<endl;
	}
	
	return 0;
}