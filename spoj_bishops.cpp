#include<iostream>
using namespace std;


int main()
{
	long long int a,n=0;
	char c;
	while( c=getchar() ){
		if(c!='\n' && c != EOF){
                    n = n*10 + (c-48);
                    }
        else{
             if(n==1){
                     cout << "1\n";
                     n=0;
                     }
             else if(n>1){
                  cout << (2*n -2) << "\n";
                  n=0;
                  }
             
             }
             
        if(c == EOF)
             break;
	}
	//cin >> a;
	return(0);
}
