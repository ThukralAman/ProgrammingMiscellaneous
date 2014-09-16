#include <iostream>
#include <stdio.h>

using namespace std;

void insertion_sort(int (&num)[10]);



int main(){
    int stop,num[10];
    cout << "Enter 10 integers in random order : " << endl;
    
    for(int i=0; i<10; i++)
            cin >> num[i];
            
    cout << "You entered : " << endl;
    for(int i=0; i <10; i++){
            cout << num[i] << ", ";
            }
            
    insertion_sort(num);
    
    cout << "Sorted list of integers : ";
    for(int i=0; i <10; i++){
            cout << num[i] << ", ";
            }
            
    cin >> stop;
    return(0);
    
    
}

// Note : arrays should be passed by reference only when size is known at compile time. For runtime size determined arrays always use decay to pointer approach
// http://stackoverflow.com/questions/2188991/what-is-useful-about-a-reference-to-array-parameter?lq=1 
void insertion_sort(int (&num)[10]){
     int i,j,k;
     for(i=1 ; i <10 ;i++){
             
             for(j=0; j<=(i-1); j++){
                     if(num[j] > num[i])
                               break;                                    //5 6 8 9 10 7 67 55
                     }
             int temp = num[i];        
             for(k=(i-1) ; k>=j; k--){
                     num[k+1] = num[k];
                     }
                     
             num[j] = temp;
             
             }
     
     }

