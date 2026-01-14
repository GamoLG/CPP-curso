#include<iostream>
using namespace std;
int main()
{
	int n, suma=0;
	cout<<"ingrese n: "; cin>>n;
	int numero[n];
	for(int i=0;i<n;i++)
	{
		cout<<"ingrese el elemento; "; cin>>numero[i];
	}
	//para mostrar los elementos
	for(int i=0;i<n;i++)
	{
		cout<<i<<"elemento ->"<<numero[i]<<endl;
	}
	
	
	
	
	return 0;
}