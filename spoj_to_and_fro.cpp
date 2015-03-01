#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    int stop,col;
    char msg[200];
    char result[200];
    
    while(1){
             cin >> col;
             if(col ==0)
                  break;
                  
             cin >> msg;
             int len = strlen(msg);
             int row = (len + (len%col)) / col;
             int i = 1,index=0,lr_switch=1,rl_switch=0;
             result[0] = msg[0];
             while(msg[i] != '\0'){
                          if(lr_switch && (i%col)!=0){
                                        index += row;
                                        result[index] = msg[i];
                                        }
                          if(lr_switch && (i%col)==0 ){
                                       lr_switch = 0;
                                       rl_switch = 1;
                                       result[++index] = msg[i];
                                       i++;
                                       continue;
                                       }
                          if(rl_switch && (i%col)!=0){
                                       index -= row;
                                       result[index] = msg[i];
                                       }
                          if(rl_switch && (i%col)==0 ){
                                       rl_switch = 0;
                                       lr_switch = 1;
                                       result[++index] = msg[i];
                                       }
                           i++;
                           
                           } 
                           result[i] = '\0'; 
                           cout << result << endl;
             }
    //cout << result;
    //cin >> stop;
    return(0);
    
    }
