#include<iostream>

using namespace std;

/*

[tipo de dato de retorno][retorno de la funcion] [parametros]
[cuerpo de la funcion]
*/

int suma(int dato1, int dato2){
	
		int resultado = dato1+dato2;
		return resultado;
}

void saludo (){
	cout<< "Hola Mundo"<<endl;
}
void saludo2 (string nombre){
	cout <<"Hola " <<nombre<<endl;
}
 

int main()
{
	int resultado = suma(3,5);
	cout<<resultado/2;
	saludo();
	saludo2("joaquin");
	return 0;
	
}
