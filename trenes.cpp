#include <iostream>
using namespace std;
int main()
{
	int N, M;
	cin >> N;
	cin >> M;
	int estacion[N][M];
	        
	for(int i = 0; i< N;i++){
		for(int j = 0; j< M;j++){
					            
			cin >> estacion[i][j];
			while(estacion[i][j] < 0){
				cin >> estacion[i][j];
				}
								            
		}    
	}
		    
	for(int i = 0; i<N; i++){
		int contador = 0;
		bool aux[3] ;
		for(int j = 0;j<M; j++){
			if(estacion[i][j] > 50){
				contador = contador + 1;
				aux[j] = true;
			}
									            
		}
		if(contador > N/2){
			cout << "El tren numero " << i << " dejará de funcionar durante 1 día entero" << endl;
		}
		else{
			for(int k = 0; k<M; k++){
				if(aux[k] == true){
					cout << "En el tren " << i<< " El vagón numero " << k << " Necesita una mantención rápida" << endl;
				}
			}
		}
	}


		        
		        
	return 0;
}
