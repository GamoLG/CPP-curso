#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int a[]={2,5,3,6,8,10};
	
	int dato=10;
	int i=0;
	char bandera='F';
	//busqueda secuencial
	while(bandera=='F' && i<6)
	{
		if(a[i]==dato)
		{
			bandera='V';
		}
		i++;
	}
	if(bandera=='F')
	{	
		cout<<"el elemento no existe en el arreglo"<<endl;
	}
	else if(bandera=='V')
	{
		cout<<"el elemento esta en el arreglo"<<endl;
		cout<<"esta en la posicion: "<<i<<endl;
	}
	
	
	
	
	return 0;
}