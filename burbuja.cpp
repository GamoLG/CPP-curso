#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int numeros[]={1,23,5,2,5,2,10,9};
	int aux;
	for(int i=0;i<sizeof(numeros)/sizeof(numeros[0]);i++)
	{
		for(int j=0;j<sizeof(numeros)/sizeof(numeros[0]);j++)
		{
			if(numeros[j]>numeros[j+1])
			{
				aux=numeros[j];
				numeros[j]=numeros[j+1];
				numeros[j+1]=aux;
			}
		}
	}
	//mostrar
	for(int i=0;i<sizeof(numeros)/sizeof(numeros[0]);i++)
	{
		cout<<numeros[i]<<" ";
	}
	cout<<endl;
	
	//con vector
	vector<int> numeros2={1,3,2,10,9,20};
	// mostrar el original
	cout<<"vector original"<<endl;
	for(int num:numeros2)
	{
		cout<<num<<" ";
	}
	cout<<endl;
	
	//ordenar
	for(int i=0;i<numeros2.size()-1;i++)
	{
		for(int j=0;j<numeros2.size()-1-i;j++)
		{
			if(numeros2[j]>numeros[j+1])
			{
				int aux=numeros2[j];
				numeros2[j]=numeros[j+1];
				numeros[j+1]=aux;
			}
		}
	}
	//ORDENADO
	cout<<"vector ordenado"<<endl;
	for(int num: numeros2)
	{
		cout<<num<<" ";
	}
	return 0;
}