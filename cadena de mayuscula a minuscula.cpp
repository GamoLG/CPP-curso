#include<iostream>
#include<string.h>
#include<string>
#include<algorithm>
#include<cctype>   //para tolower()
using namespace std;
int main()
{
	//pasar de mayuscula a minuscula
	char a[]="ALEX";
	//funcion strlwr()
	strlwr(a);
	cout<<a<<endl;
	
	//manualmente
	char b[]="JHOEL";
	for(int i=0;b[i]!='\0';i++)
	{
		if(b[i]>='A' and b[i]<='Z')
		{
			b[i]=b[i]+32;
		}
	}
	cout<<b<<endl;
	
	//con las funciones modernas del c++
	
	string c="HOLA";
	transform(c.begin(),c.end(),c.begin(),::tolower);
	cout<<c<<endl;
	
}