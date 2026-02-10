#include<iostream>
#include<vector>
using namespace std;
int main()
{
	/*
	//vector	
	vector<int> numeros={4,15,4,1,10,9,11};
	//mostrar vector original
	for(int i=0;i<numeros.size();i++)
	{
		cout<<numeros[i]<<" ";
	}
	cout<<endl;
	//ordenamiento por insercion
	int pos, aux;
	for(int i=0;i<numeros.size();i++)
	{
		pos=i;
		aux=numeros[i];
		while(pos>0 && numeros[pos-1]>aux)
		{
			numeros[pos]=numeros[pos-1];
			pos--;
		}
		numeros[pos]=aux;
	}
	//mostrar
	cout<<"vector ordenado: ";
	for(int num: numeros)
	{
		cout<<num<<" ";
	}
	
	
	*/
	vector<int> numeros4={1,4,2,5,10,9};
	for(int num: numeros4)
	{
		cout<<num<<" ";
	}
	int pos, aux;
	for(int i=0;i<numeros4.size();i++)
	{
		pos=i;
		aux=numeros4[i];
		while(pos>0 && numeros4[pos-1]>aux)
		{
			numeros4[pos]=numeros4[pos-1];
			pos--;
		}
		numeros4[pos]=aux;
	}
	//mostrar el vector ordenado
	cout<<endl;
	for(int num: numeros4)
	{
		cout<<num<<" ";
	}
	return 0;
}