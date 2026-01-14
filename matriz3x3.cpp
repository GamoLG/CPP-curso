//una matriz 3x3 y que muestre su diagonal principal
#include<iostream>
using namespace std;
int main()
{
	int matriz[3][3];
	
	// guardamos elementos en la matriz
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<"ingrese el elemento: ["<<i<<"]["<<j<<"]: ";
			cin>>matriz[i][j];
		}
		cout<<endl;
	}
	// mostrar la matriz general
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<matriz[i][j];
		}
		cout<<endl;
	}
	
	//mostrar la diagonal principal 1ra forma
	/*
	cout<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=i;j<3;j++)
		{
		   cout<<matriz[i][j];
		   break;	
		}
		cout<<endl;
	}
	
	*/
	
	// 2da forma
	
	for(int i=0;i<3;i++)
	{
		cout<<matriz[i][i]<<endl;
	}
	return 0;
}
