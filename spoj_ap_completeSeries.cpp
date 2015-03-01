#include <iostream>

using namespace std;

int main(){
    int stop,t;
    cin >> t;
    
    while(t--){
               long long int Term3,LastTerm3,sum,n,a,d;
               
               cin >> Term3 >> LastTerm3 >> sum;
               n = ( sum * 2 )/(Term3 + LastTerm3);
               //cout << "n = " << n << endl;
               
               //Term3 = a + 2*d;
               //LastTerm3 = a + (n-3)*d;
               //3Term - 3LastTerm = d*(5-n)
               d =  (Term3 - LastTerm3) / (5-n);
               //cout << "d = " << d << endl;
               //a + 2*d = 3Term;
               a = Term3 - 2*d;
               //cout << "a = " << a << endl;
               cout << n << endl;
               for(int i=0; i<n ; i++){
                       cout << a + i*d << " "; 
                       }
               cout << "\n";
               
               
               }
    
    
    
    //cin >> stop;
    return(0);
    
    }
