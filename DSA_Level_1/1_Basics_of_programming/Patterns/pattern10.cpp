#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;

    //write your code here
    
    int nsp_left = n/2, nsp_middle = -1, row = 1;
     while(row<=n){
         for(int i = 0; i<nsp_left; i++){
             cout<<"\t";
         }
         if(row!=1 and row!=n) cout<<"*\t";
         for(int i = 0; i<nsp_middle; i++){
             cout<<"\t";
         }
         cout<<"*\n";
         row++;
         if(row<=(n+1)/2) nsp_left--;
         else nsp_left++;
         
         if(row == 1 and row == n-1) nsp_middle = 1;
         else if(row<=(n+1)/2) nsp_middle += 2;
         else nsp_middle -= 2;
    }
    
}