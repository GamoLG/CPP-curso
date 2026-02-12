#include<iostream>
#include<string>
using namespace std;

//estructuras
struct persona
{
	string nombre1;
	char nombre[20];
	int edad;
}
persona1={"alex","jhoel",20},
persona2={"susan","maria",20}, 
persona3;

int main()
{
		//utilizando string
	cout<<"el nombre con el string es: "<<persona1.nombre1;
	cout<<endl;
	cout<<"el nombre 1 es: "<<persona1.nombre;
	cout<<" y su edad es: "<<persona1.	edad;
	cout<<endl;
		//utilizando string
	cout<<"el nombre con el strig es: "<<persona2.nombre1<<endl;
	cout<<endl;
	cout<<"el nombre 2 es: "<<persona2.nombre;
	cout<<" y su edad es: "<<persona2.edad;
	
	//para rellenar
	cout<<endl;
	cout<<"digite el nombre con el string: ";
	getline(cin,persona3.nombre1);
	
	cout<<"digite el nombre: ";
	cin.getline(persona3.nombre,20,'\n');
	
	cout<<"digite la edad: "; cin>>persona3.edad;
	
	cout<<"imprimiendo los datos de la persona 3"<<endl;
	cout<<"nombre con el string: "<<persona3.nombre1;
	cout<<"nombre: "<<persona3.nombre<<endl;
	cout<<"edad: "<<persona3.edad<<endl;
	return 0;
}