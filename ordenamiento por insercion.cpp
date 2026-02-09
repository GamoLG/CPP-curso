#include<iostream>
#include<vector>
using namespace std;
int main()
{
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
	
	return 0;
}