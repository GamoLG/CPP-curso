#include<iostream>
using namespace std;
int main()
{
	//Lee N numeros e imprime el mayor y el menor.
	int n, numero;
	int mayor, menor;
	cout<<"ingrese la cantidad de numeros: "; cin>>n;  //5
	cout<<"ingrese el numero 1: "; cin>>numero;
	mayor=numero;
	menor=numero;
	for(int i=1;i<n;i++)  
	{
		cout<<"ingrese el numero "<<i+1<<" : "; cin>>numero; //10,3,13,20-> 10, 3
		if(numero>mayor) //10>0 si , 3>10 no
		{
			mayor=numero; //mayor=10 
		}
		if(numero<menor)  //10<10000 si, 3<10 si
		{
			menor=numero;  //menor=3
		}
	}
	cout<<" mostrar el mayor y menor"<<endl;
	cout<<"el menor es: "<<menor<<endl;
	cout<<"el mayor es: "<<mayor<<endl;
	
	return 0;
}