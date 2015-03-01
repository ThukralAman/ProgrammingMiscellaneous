#include<iostream>

include namespace std;

int main(){
    int stopper, N, num, result_array[200]  ;
    cin >> N;
    
    while (N--){
          cin >> num ;
          for(int i=1 ; i<200 ; i++){
            result_array[i] = 0;
            }
          result_array[0] = 1;
          calculate_fact(num, result_array); 
          
          }
    cin >> stopper;
    return(0);
}

void calculate_fact(int num, int * result_array){
     k=0;
     for(int i=1; i<=num ; i++){
             while(result_array[k]!=0){
                                       temp = result_array[k] * i;
                                       if(temp < 10){
                                               result_array[k] = temp;
                                               }
                                       else{
                                            
                                            }
                                       }
             }
          
     
}
     
