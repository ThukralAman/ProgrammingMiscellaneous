#include <iostream>
#include<math.h>
#include<iomanip>

using namespace std;

int main(){
    int stop;
    int l;
    double area,pie=3.141592653589793238462643383279;
    while(1){
             cin >> l;
             if(l ==0)
                  break;
             area = (float)(l*l)/(2*pie);
             //area = floor( ((area * 100) + 0.5) )/100  ; 
             cout << fixed << setprecision(2) << area << endl;
    }
    //cin >> stop;
    return(0);
    }
