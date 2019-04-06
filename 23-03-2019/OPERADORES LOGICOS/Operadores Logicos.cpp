#include<iostream>

using namespace std;

int main (){
/*
ejercicios:
a) B < C
b) C / B ==-10
c) C / B == -4
d) (A+B ==8) && (A-B == 2) 
e) (A+B ==8) || (A-B == 2) 
*/

const int A = 23, B = 45, C = 78;

bool resultado;

cout <<"A: "<<A<<"B: "<<B<<"C: "<<C<<endl;

resultado = B<C;
cout<<"B < C "<<resultado<<endl;

resultado =  C / B ==-10;
cout<<" C / B ==-10 "<<resultado<<endl;

resultado =  C / B == -4;
cout<<" C / B == -4 "<<resultado<<endl;

resultado =  (A+B ==8) && (A-B == 2);
cout<<" (A+B ==8) && (A-B == 2) "<<resultado<<endl;

resultado =  (A+B ==8) || (A-B == 2) ;
cout<<" (A+B ==8) || (A-B == 2) "<<resultado<<endl;

return 0;
}
