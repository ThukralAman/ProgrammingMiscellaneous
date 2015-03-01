#include<iostream>

using namespace std;

int main(){
    int stop;
    while(1){
             int N, arr[10000],sum = 0,avg =0, result =0,temp;
             cin >> N;
             if(N== -1)
                    break;
             
             if(N == 1){
                  cin >> temp;
                  cout << "0\n";
                  continue;
                  }
                  
             for(int i=0; i<N ; i++){
                     cin >> arr[i];
                     sum = sum + arr[i];
                     }
                     
             if(sum % N !=0){
                    cout << "-1\n";
                    continue;
                    }
             
             else {
                  avg = sum/N;
                  for(int i=0; i<N ; i++){
                          if(arr[i] < avg){
                                    result += avg - arr[i];
                                    }
                          }
                  cout << result << endl;
                  }
             
             
             }
    
    //cin >> stop;
    return(0);
    }
