#include<iostream>
#include<vector>
using namespace std;
int main()
{
	//ordenamiento por seleccion
	/*
	int numeros[]={4,2,1,5,2,10,3,12,11};
	int aux, min;
	for(int i=0;i<9;i++)
	{
		min=i;
		for(int j=i+1;j<9;j++)
		{
			if(numeros[j]<numeros[min])
			{
				min=j;
			}
		}
		aux=numeros[i];
		numeros[i]=numeros[min];
		numeros[min]=aux;
	}
	//mostrar el arreglo ordenado
	for(int i=0;i<9;i++)
	{
		cout<<numeros[i]<<" ";
	}
	*/
	//con vector
	vector<int> numeros={4,6,1,3,5,2,20,11};
	int min, aux;
	for(int i=0;i<numeros.size();i++)
	{
		min=i;
		for(int j=i+1;j<numeros.size();j++)
		{
			if(numeros[j]<numeros[min])
			{
				min=j;
			}
		}
		aux=numeros[i];
		numeros[i]=numeros[min];
		numeros[min]=aux;
	}
	//imprimir
	for(int num: numeros)
	{
		cout<<num<<" ";
	}
	
	return 0;
}