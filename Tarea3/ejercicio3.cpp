#include<iostream>
using namespace std;
int main(){

    int N;
    cin >> N;

    int arr[N];
    int resultado = 0;
    int mult;
    
    for(int j = 0; j<N; j++){
        cin >> arr[j];
    }
    
    if(N%2 == 0){
        
        for(int i = 0; i < N/2; i++){
            mult = arr[i] * arr[N-1-i];
            resultado = resultado + mult;
        }
        
    }
    else{
        
        resultado = arr[(N-1)/2];
        
        for(int i = 0; i < N/2; i++){
            
            mult = arr[i] * arr[N-1-i];
            resultado = resultado + mult;
        }
        
    }

    cout<< resultado << endl;


    return 0;
}