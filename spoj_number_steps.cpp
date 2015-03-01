#include<iostream>

using namespace std;

int main(){
    int stop,N;    
    cin >> N;
    
    while(N--){
               int i,j,result = 0;
               cin >> i >> j;
               if(i == j){
                    if (i%2 != 0)
                            result = (i-1)*2 + 1;
                    else 
                            result = i*2;
                            
                    cout << result << endl;
                    }
               else if(j+2 == i){
                    if(i%2==0)
                              result = (i * 2) - 2;
                    else 
                              result = (((i-1) * 2) - 2 ) + 1;
                              
                    cout << result <<endl;
                    }
                    
               else 
                    cout << "No Number" << endl;
               }
    
    
    
    //cin >> stop;
    return(0);
    }
