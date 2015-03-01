#include<stdio.h>
void printAllPrimes(unsigned long,unsigned long);
int checkPrime(unsigned long);
int main(){
        int i,t;
        unsigned long m,n;
        scanf("%d",&t);
        for(i=0;i<t;i++){
                scanf("%ld",&m);
                scanf("%ld",&n);
                printAllPrimes(m,n);
                printf("\n");
                scanf("%d",&t);
        }
        return 0;
}
void printAllPrimes(unsigned long m,unsigned long n){
        unsigned long i;
        for(i=m;i<=n;i+=2){
                if(checkPrime(i))
                        printf("%ld\n",i);
        }
}
int checkPrime(unsigned long n){
unsigned long i;
        if(n <=3)
                return n>1;
        else if((n%2==0) || (n%3==0)){
                return 0;
        }else{
                for(i=5;i*i < n;i+=6){
                        if((n%i ==0)|| (n%(i+2)==0))
                                return 0;
                }
                return 1;
        }
}
