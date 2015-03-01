#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int stop;
    while(1){
             int g=0,b=0,temp=0;
             cin >> g >> b;
             if(g < b){
                  temp = g;
                  g = b;
                  b = temp;
                  }
             if(g == -1 && b == -1)
                  break;
                  
             cout << ceil ( (float) g/(b+1)) << endl;
             
             }
    //cin >> stop;
    return(0);
    
    }
