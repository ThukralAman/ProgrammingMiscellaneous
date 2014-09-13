#include <iostream>
#include <stdio.h>
using namespace std;

void print_int(int num);

int main(){
    int stop , num;
    cout << "Hello world" << endl;
    
    for( int i = 0; i<4; i++ ){
         cout << "\nEnter any integer" << endl ;
         cin >> num;
         print_int(num);
    }
    cin >> stop;

}

void print_int(int num){
     if(num < 0){
            putchar('-');
            num = -1 * num;
            }
     // basecase       
     if (num < 10){
             putchar('0' + num);
             } 
     
     else{
          print_int( num / 10 );
          putchar( '0' + ( num % 10 ) );
          
          }
}
