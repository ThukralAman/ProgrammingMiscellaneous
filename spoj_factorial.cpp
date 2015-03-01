#include<iostream>

using namespace std;

int count_zeros_in_factorial(int);

int main(){
    int stopper, N, num, zero_count;
    cin >> N;
    while(N--){
               cin >> num;
               zero_count = count_zeros_in_factorial(num);
               cout << zero_count << endl;
               
               }
    //cin >> stopper;
    return(0);
}

int count_zeros_in_factorial(int num){
    int zero_count=0;
    
    while( num/5 ){
           zero_count += num/5;
           num = num/5;
           }
    return(zero_count);
}
