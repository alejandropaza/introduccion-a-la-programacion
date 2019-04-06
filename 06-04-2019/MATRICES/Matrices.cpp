#include<iostream>

using namespace std;

int main(){
	
	//creamos la matriz
	int matriz[3][3];
	
	//matriz [0][0] = 9;//metemos informacion
	//cout<<matriz[0][0]<<endl;//sacamos informacion
	
	/*for(int i = 0; i < 3 ; i++){
		for(int j = 0; j< 3; j ++){
		matriz [i][j] = 1;//metemos informacion
	cout<<matriz[i][j]<<endl;	
		}*/
	for (int i = 0; i<3; i++){
		
		for (int k =0; k < 3; k++){
		
			matriz [i][k]= 1;
			cout<<matriz[i][k];
	        
	}
	cout<<endl;
		}
		
	
	
	return 0;
}
