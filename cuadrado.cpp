#include<iostream>
using namespace std;
int main()
{
	//Dibujar un cuadrado de asteriscos
	int n=5;
	for(int i=1;i<n;i++)
	{
		for (int j=1;j<n;j++)
		{
			cout<<"*"<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}