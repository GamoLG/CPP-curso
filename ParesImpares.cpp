#include<iostream>
using namespace std;
int main()
{
	//Lee N números e imprime cuántos son pares y cuántos impares.
	int n, numero;
	int pares=0, impares=0;
	cout<<"ingrese la cantadad: "; cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"ingrese el numero "<<i+1<<": "; cin>>numero;
		if(numero%2==0)
			{
				pares++;
			}
		else
		{
			impares++;
		}
		
	
	}
	cout<<"cantidas de pares e impares"<<endl;
	cout<<"pares: "<<pares<<endl;
	cout<<"impares: "<<impares<<endl;
	
	
	return 0;
	
}