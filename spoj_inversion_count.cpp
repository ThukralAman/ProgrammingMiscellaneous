#include <iostream>

using namespace std;


long long int inversion_count_fun(long long int *arr, long long int n);
long long int mergesort(long long int *arr, long long int *temp, long long int start,long long int end);
long long int merge(long long int *arr, long long int *temp, long long int start, long long int mid, long long int end);

int main(){int stop;
    long long int t;
    cin >> t;
    while(t--){
               long long int n,inversion_count=0;
               cin >> n;
               long long int *arr = new long long int[n];
               for(long long int i=0 ; i<n ; i++){
                       cin >> arr[i];
                       }
               /*for(long long int i=0 ; i<n ; i++){
                       cout << arr[i];
                       }*/        
               inversion_count = inversion_count_fun(arr, n); 
               cout << inversion_count << "\n";              
               }
    //cin >> stop;
    return(0);
    }

long long int inversion_count_fun(long long int *arr, long long int n){
    long long int start=0, end=n-1;
    long long int *temp = new long long int[n];
    long long int result = mergesort(arr, temp, start, end);
	return(result);
    }
    
long long int mergesort(long long int *arr, long long int *temp,long long int start,long long int  end){
    int inv_count = 0;
    if(start < end){
             long long int mid;
			 mid= (start+end) / 2;
             inv_count += mergesort(arr, temp, start,mid);
             inv_count += mergesort(arr, temp, mid+1, end);
             inv_count += merge(arr, temp, start, mid, end);
             }
    return(inv_count);
    }
    
long long int merge(long long int *arr, long long int *temp, long long int start, long long int mid, long long int end){
    long long int i=start;
    long long int j = mid+1;
    long long int k = start;
    long long int l=0;
    long long int inv_count = 0;
    while(i<=mid && j<=end){
                 if(arr[i] <= arr[j]){
                           temp[k] = arr[i];
                           i++;
                           k++;
                           }
                 else{
                      temp[k] = arr[j];
                      j++;
                      k++;
                      inv_count = inv_count + mid + 1 - i;
                      }
                  
                  }
    while( i <= mid){
           temp[k] = arr[i];
           k++;
           i++;
           }
           
    while ( j <= end ){
          temp[k] = arr[j];
          k++;
          j++;
          }
    
    for(long long int l=start; l <=end ; l++){
            arr[l] = temp[l];
            }
    return inv_count;
    }    

