#include<iostream>

using namespace std;

int main(){
    int stop;
    
    while(1){
             int n1=0, n2=0, n3=0,n4=0, common_ratio=0 , common_diff=0;
             cin >> n1 >> n2 >> n3;
             if (n1 == 0 && n2 ==0 && n3==0)
                break;
                
             common_diff = n2 - n1;
             common_ratio = n2/n1;
             if(n3 == n2 + common_diff && common_diff !=0){
                   n4 = n3 + common_diff;
                   cout << "AP " << n4 << endl;
                   }
             else
             {
                  n4 = n3 * common_ratio;
                  cout << "GP " << n4 << endl;
             }
             
             
             }
    
    
   // cin >> stop;
    return(0);
}

