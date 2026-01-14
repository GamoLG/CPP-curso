#include<iostream>
using namespace std;
#include<ctime>
#include<time.h>
int main()
{
	srand(time(NULL));
	int aleatorio=rand()%100;
	cout<<aleatorio<<endl;
	int numero, contador=0;
	cout<<"ingrese un numero del 1 al 100: "; cin>>numero;
	while(numero!=aleatorio)
	{	
		contador++;
		if(numero>aleatorio)// 34>50
		{
			cout<<"digite un numero menor"<<endl;
		}        
		else if(numero<aleatorio)
		{
			cout<<"dijite un numero mayor"<<endl;
		}
		cin>>numero;
		
	}
	cout<<"acetarta en "<<contador+1<<" intentos"<<endl;
		
	
	
	return 0;
}