#include<iostream>
using namespace std;
int main()
{
	//1er arreglo
	int n1=5, n2=5;
	int arreglo1[n1]={1,2,3,4,5};
	int arreglo2[n2]={2,23,3,1,2};
	int arreglo3[n1+n2];
	//copiaremos el primer arreglo
	for(int i=0;i<5;i++)
	{
		arreglo3[i]=arreglo1[i];
	}
	//copiaremos el 2do arreglo
	for(int i=5;i<10;i++)
	{
		arreglo3[i]=arreglo1[i-5];
	}
	//imprimir
	for(int i=0;i<10;i++)
	{
		cout<<arreglo3[i]<<endl;
	}
	
	return 0;
}