#include<iostream>
using namespace std;
int main()
{
	int num[5]={1,5,1,1,2};
	int suma=0, mayor=0;
	for(int i=0;i<5;i++)
	{
		suma+=num[i];
		if(num[i]>mayor)
		{
			mayor=num[i];
		}
	}
	if(mayor==suma-mayor)
	{
		cout<<"si existe";
	}
	else
	{
		cout<<"no";
	}
	
	return 0;
}