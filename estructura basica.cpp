#include<iostream>
using namespace std;

//estructuras
struct persona
{
	char nombre[20];
	int edad;
}
persona1={"jhoel",20},
persona2={"maria",20}, 
persona3;

int main()
{
	cout<<"el nombre 1 es: "<<persona1.nombre;
	cout<<" y su edad es: "<<persona1.	edad;
	cout<<endl;
	cout<<"el nombre 2 es: "<<persona2.nombre;
	cout<<" y su edad es: "<<persona2.edad;
	//para rellenar
	cout<<endl;
	cout<<"digite el nombre: ";
	cin.getline(persona3.nombre,20,'\n');
	
	cout<<"digite la edad: "; cin>>persona3.edad;
	
	cout<<"imprimiendo los datos de la persona 3"<<endl;
	cout<<"nombre: "<<persona3.nombre<<endl;
	cout<<"edad: "<<persona3.edad<<endl;
	return 0;
}