#include<iostream>

using namespace std;

int main(){
    int t,stop;
    cin >> t;
    
    while(t--){
               int N,male[11],female[11],temp;
               cin >> N;
               for(int i=0; i <=10; i++){
                       male[i] = 0;
                       female[i] = 0;
                       }
               for(int i=0; i <N ; i++){
                       cin >> temp;
                       male[temp]+= 1;
                       }
               for(int i=0; i <N ; i++){
                       cin >> temp;
                       female[temp]+=1;
                       }
               int i=10, j=10 , sum = 0;
               while(i >=0 && j >=0){
                       while(male[i] && female[j]){
                                     sum += i * j;
                                     male[i]--;
                                     female[j]--;
                                     }
                       if(male[i] ==0){
                                  i--;
                                  while(male[i] ==0)
                                                i--;  
                                  }
                                  
                       if(female[j] == 0){
                                    j--;
                                    while(female[j] ==0)
                                                    j--;
                                    }
                       }
                       
                       cout << sum << endl;
              }
              
              //cin >> stop;
              return(0);
}
