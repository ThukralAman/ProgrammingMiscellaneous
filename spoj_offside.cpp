#include<iostream>

using namespace std;


int main(){
    int B[11], C[11], a, d, stop;
    
    while(1){
             cin >> a >> d;
             if (a==0 && d==0)
                break;
             
             for(int i=0 ; i<a ; i++)
                     cin >> B[i];
                     
             for(int j=0; j<d ; j++){
                     cin >> C[j];
                     }
                     
//             for(int i=0; i<a-1 ; i++){
//                     for(j=0; j<a-i-i ; j++){
//                              int temp=0;
//                              if( B[j] < B[j+1] )
//                              }
//                     
//                     }
             int min_attacker_dist = 10000;       
             for(int i=0; i<a ; i++){
                     if(B[i] < min_attacker_dist)
                             min_attacker_dist = B[i];
                     }
                     
             int def_first=10000, def_second=10000;
             for(int j=0; j<d; j++){
                     if(C[j] < def_first){
                             def_second = def_first;
                             def_first = C[j];
                             }
                     else if(C[j] < def_second){
                          def_second = C[j];
                          }
                     }
                     
             //cout << "def_first" << def_first << endl;
             //cout << "def_second" << def_second << endl;
             
             if (min_attacker_dist >= def_first && min_attacker_dist >= def_second ){
                                   cout << "N\n";
                                   } 
             else{
                  cout << "Y\n";
                  }
             
             }
    //cin >> stop;
    return(0);
    }
