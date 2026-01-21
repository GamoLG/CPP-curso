#include<iostream>
using namespace std;
int main()
{
	int numero;
	cout<<"ingrese numero: "; cin>>numero;
	int contador=0;
	//Lee numeros hasta que aparezca un 0. Imprime la suma
	while(numero!=0)
	{
		contador+=numero;
		cout<<"ingrese numero: "; cin>>numero;
		
	}
	cout<<"la suma es: "<<contador;
	cout<<endl;
	//con while
	int numero2, suma=0;
	cout<<"ingrese un numero: "; cin>>numero2;
	while(true)
	{
		suma+=numero2;
		cout<<"ingrese el numero: "; cin>>numero2;
		if(numero==0)
		{
			break;
		}
	}
	cout<<"la suma es: :"<<suma;
	
	return 0;
}