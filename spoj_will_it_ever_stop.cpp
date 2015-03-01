#include<iostream>

using namespace std;

int main(){
    int stop;
    long long int n;
    cin >> n;
    if( n && (!(n&(n-1))) )
         cout << "TAK" << endl;
    else
         cout << "NIE" << endl;
    
    cin >> stop;
    return(0);
    }

