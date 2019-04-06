#include <iostream>

using namespace std;

int main (){
/*	estructura de un if
	
	if([operacionlogica])
	{
		cuerpo del if,
	}
	
		if([operacionlogica])
	{
		cuerpo del if,
	}
	
	else {

     }

	if(){
      
	  }

    else if(){

      }
	
	else if(){
      }  

    else{
     }
     
     }*/
     
     int edad = 18;
     
     if (edad>=18){
     	
     	if (edad <= 59){
     	cout<<"Eres mayor de edad"<<endl;
		 }
		 else{
			cout<<"Eres de la tercera edad"<<endl;
		 }
		 
     
	 }else {
		 cout<<"Eres menor de edad"<<endl;
	}
	
		if (edad >= 18 && edad<=59){
     	cout<<"Eres mayor de edad"<<endl;
		
		} else if (edad >= 18 && edad<=60 ){
			cout<<"Eres de la tercera edad"<<endl;
		 
		  }else {
		 cout<<"Eres menor de edad"<<endl;
 }
 }
     



