#include<iostream>
#include<ctime>
#include<time.h>
using namespace std;
int main()
{
	srand(time(NULL));
	for(int i=0;i<=10;i++)
	{
		int n=rand()%100;
		cout<<n<<" ";
	}
	cout<<endl;
	//para la hora
	time_t hora=time(NULL);
	cout<<"la hora es: "<<ctime(&hora);
	
	return 0;
}