#include <iostream>
using namespace std;
int main()
{


    int N;
    cin >> N;
    int arr1[N];
    string arr2[N];
    int ec;
    
    for(int k = 0 ; k< N ; k++) {
        cin >> arr1[k];
    }
    
    for(int i = 0; i< N;i++){
        
        ec = arr1[i];
        
        if(ec > 0 ){
            
            if(ec%2 == 0 ){
                arr2[i] = "pospar";
                
            }
            else{
                arr2[i]="posimpar";
            }
            
        }
        else if(ec < 0){
            
            if(ec%2 == 0 ){
                arr2[i]="negpar";
                
                
            }
            else{
                arr2[i]="negimpar";
            }
            
        }
        else{
            
            if(i == 0){
                if(arr1[i + 1] == 0){
                    arr2[i] = "cerogemelo";
                } 
                else{
                    arr2[i] = "cerosolitario";
                }
            }
            
            else if(i==N){
                
                if(arr1[i - 1] == 0){
                    
                    arr2[i] = "cerogemelo";
                } 
                else{
                    
                    arr2[i] = "cerosolitario";
                }
                
            }
            
            else{
                
                if(arr1[i-1] == 0 || arr1[i+1] == 0 ){
                    
                    arr2[i] = "cerogemelo";
                }
                
                else{
                    
                    arr2[i] = "cerosolitario";
                }
                
            }
            
        }
        
    }
    
    for(int j = 0; j<N; j++){
        cout << arr2[j] << " ";
    }
	return 0;
}