#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int a[]={2,5,3,6,8,10};
	
	//busqueda binaria
	//primero por  burbuja
	int aux;
	for(int i=0;i<6-1;i++)
	{
		for(int j=0;j<6-1-i;j++)
		{
			//condicional
			if(a[j]>a[j+1])
			{
				//intercambiamos
				aux=a[j];
				a[j]=a[j+1];
				a[j+1]=aux;
			}
		}
	}
	//imprimir el arreglo ordenado
	for(int i=0;i<6;i++)
	{
		cout<<a[i]<<" ";
	}
	
	//ahora buscar
	char bandera='F';
	int dato=107;
	int inf=0;
	int sup=6;
	int mitad;
	while(inf<sup)
	{
		mitad=(inf+sup)/2;
		if(a[mitad]==dato)
		{
			bandera='V';
			break;
		}
		if(a[mitad]<dato)
		{
			inf=mitad+1;
			mitad=(inf+sup)/2;
		}
		if(a[mitad]>dato)
		{
			sup=mitad-1;
			mitad=(inf+sup)/2;
		}
	}
	//condicional
	if(bandera=='V')
	{
		cout<<"elemento  encontrado"<<endl;
	}
	else
	{
		cout<<"elemento no encontrado"<<endl;
		
	}
	return 0;
}