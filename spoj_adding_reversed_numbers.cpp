#include<iostream>

using namespace std;
int get_rev(int);

int main(){
    int stopper, N , no1=0 , no2=0 , sum_rev , no1_rev , no2_rev;
    //cout << "Enter N" ;
    cin >> N;

    //cout<< "Hello World";
    
           while(N--){
                      //cout << "Enter no1 no2";
                      cin >> no1 >> no2;
                      //cout << "no1" << no1 << "no2" << no2 ;
                      
                      no1_rev = get_rev(no1);
                      no2_rev = get_rev(no2);
                      sum_rev = get_rev(no1_rev + no2_rev);
                      
                      cout /*<< "sum_rev = " */<< sum_rev << endl;
                      
               
               
           }
    //cin >> stopper ;
    return(0);
}


int get_rev(int num){
    int rev_no = 0 , temp;
    while (num){
          temp = num % 10;
          num = num/10;
          rev_no = rev_no*10 + temp; 
          }
    return(rev_no);
}
