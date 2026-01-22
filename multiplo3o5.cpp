#include<iostream>
using namespace std;
int main()
{
	//4) Imprime los números del 1 al N que sean múltiplos de 3 o 5.
	int n;
	cout<<"ingrese n: "; cin>>n;
	for(int i=0; i<n;i++)
	{
		
		if(i%3==0 or i%5==0)
		{
			cout<<i<<" ";
		}
	}
	return 0;
}