/*
Test this solution visually at : http://www.dynamicdrive.com/dynamicindex12/towerhanoi.htm
 */


#include <iostream>
#include <stdio.h>
#define peg1 1
#define peg2 2
#define peg3 3 
using namespace std;
void toh(int n, int from, int to, int via);

// toh is a puzzle of moving non increasing sized discs on "peg 1" to "peg 3" using "peg 2" 
int main()
{
    int stop,n;
    cout<< "enter number of discs"  << endl;
    cin >> n;
    toh(n,peg1,peg3,peg2);   // Move from peg1 to peg3 using peg2
    cin >> stop;
    return(0);
 }

void toh(int n, int from, int to, int via){
     
     cout << "n = " << n << " from = " << from << " to = " << to << " via =  " << via << endl;
     
     if(n==1)
             cout << "Move from " << from << " to " << to << endl;    // with only 1 disc move it from FROM_PEG to TO_PEG
     
     else{
          toh(n-1, from, via, to );                                   // Move (n-1) discs from FROM_PEG to VIA_PEG using TO_PEG
          cout << "Move from " << from << " to " << to << endl;       // Move nth disc from FROM_PEG to TO_PEG
          toh(n-1, via, to, from);                                    // Move (n-1) discs from VIA_PEG to TO_PEG using FROM_PEG   
          }
                
}
 
