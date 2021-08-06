#include <iostream>
using namespace std;
int main(int argc, char**argv){
    int n;
    cin >> n;

    //write your code here
    
    int nsp = n/2, row = 1, nst = 1, val = 1;
    while(row<=n){
        for(int i = 0; i<nsp; i++){
            cout<<"\t";
        }
        for(int i = 1; i<=nst; i++){
            cout<<val<<"\t";
            if(i<=nst/2) val++;
            else if(i!=nst) val--;
        }
        row++;
        cout<<"\n";
        if(row<=(n+1)/2){
            nsp--;
            nst+=2;
            val++;
        }
        else{
            nsp++;
            nst-=2;
            val--;
        }
    }
    
}