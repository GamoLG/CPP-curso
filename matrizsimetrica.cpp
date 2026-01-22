#include<iostream>
using namespace std;
int main()
{
	int numeros[100][100], filas, columnas;
	char bandera2='v';
	cout<<"ingrese el numero de filas: "; cin>>filas;
	cout<<"ingrese el numero de columnas: "; cin>>columnas;
	for(int i=0;i<filas;i++)
	{
		for(int j=0;j<columnas;j++)
		{
			cout<<"ingrese el elemento[ "<<i<<"] ["<<j<<"]: "; cin>>numeros[i][j];
		}
	}
	// utilizando bol bandera
	/*
	//debe ser cuadratica
	if(filas!=columnas)
	{
		cout<<"no es simetrica"<<endl;
		return 0;
	}
	bool bandera=true;
	//si es que cumple la condicion
	for(int i=0;i<filas;i++)
	{
		for(int j=0;j<columnas;j++)
		{
			if(numeros[i][j]!=numeros[j][i])
			{
				bandera=false;
				break;
			}
			if(bandera!=true)
			{
				break;
			}
			
		}
	}
	if(bandera==true)
	{
		cout<<"es simetrica"<<endl;
	}
	else
	{
		cout<<"no es simetrica"<<endl;
	}
	
	*/
	
	//utilizando char bandera2
	if(filas==columnas)
	{
		for(int i=0;i<filas;i++)
		{
			for(int j=0;j<columnas;j++)
			{
				if(numeros[i][j]!=numeros[j][i])
				{
					bandera2='f';
					break;
				}
			}
		}
	}
	else
	{
		bandera2='f';
	}
	
	if(bandera2=='v')
	{
	
		cout<<"es simetrica"<<endl;
	}
	else
	{
		cout<<"no es simetrica"<<endl;
	}
	return 0;
	
}
