#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n;
	cout<<"ingrese n: "; cin>>n;
	//con vector
	vector<int> numeros(n);
	//con arreglo
	//int numeros[n];
	//para ingresar los numeros
	for(int i=0;i<n;i++)
	{
		cout<<"ingrese numero: "; cin>>numeros[i];
	}
	//mostrar los numeros
	for(int i=0;i<n;i++)
	{
		if(numeros[i]%3==0 or numeros[i]%5==0)
		{
			cout<<numeros[i]<<" ";
		}
	}
	
	
	return 0;
}