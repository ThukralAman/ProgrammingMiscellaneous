#include<iostream>

using namespace std;

int main(){
    int stop,n;
    while(1){
                cin >> n;
                if (n==0)
                   break;
                int num_of_squares;
                num_of_squares = (n*(n+1)*(2*n + 1))/6;
                cout << num_of_squares << endl;
                }
    
    //cin >> stop;
    return(0);
    }
