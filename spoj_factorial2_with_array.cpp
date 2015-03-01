
#include<stdio.h>


void multiply (int i, char * const& result ,int  &m);

int main(){
    int stop;
    int N,num;
    scanf("%d",&N);
    while(N--){
               int m = 1;
               char result[200];
               result[0] = 1;
               m=0;
               scanf("%d",&num);
               for(int i=2; i<=num; i++){
                       multiply(i, result, m);
                       }
               
               for(int i=m ; i>=0 ; i--){
                       printf("%d",result[i]);
                       }              
               printf("\n");
               }
               
    //scanf("%d",&stop);
    return(0);
}

void multiply (int i, char * const& result ,int  &m){
     int bal=0, temp;
     for(int j=0 ; j<=m ; j++){
              temp = (i * result[j] ) + bal;
              result[j] = temp % 10  ;
              //printf("result[i] = %d\n",result[j] );
              bal = temp /10;
              //printf("bal = %d\n",bal );
              //printf("last_index(m) = %d\n",m ); 
             }
     if (bal){
        //printf("inside bal");
        while(bal){
                   m++;     
                   //printf("last_index(m) = %d\n",m );     
                   result[m] = bal % 10;
                   bal = bal/10;
                   }
     
     }

}

