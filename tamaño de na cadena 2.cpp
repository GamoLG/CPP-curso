#include<iostream>
#include<string>
using namespace std;
int main()
{
	//verificar una cadena, si supera a 10 caracteres que muestre
	//en la pantalla. pero si no supera que no muestre
	
	string palabra;
	int longitud=0;
	cout<<"ingrese la palabra: "; cin>>palabra;
	longitud=palabra.size();
	if(longitud>9)
	{
			cout<<longitud<<endl;
	}

	return 0;
}