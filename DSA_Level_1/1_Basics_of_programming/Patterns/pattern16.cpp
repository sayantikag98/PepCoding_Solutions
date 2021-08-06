#include <iostream>
using namespace std;
int main(int argc, char**argv){
    int n;
    cin >> n;

    //write your code here
    int row = 1, nst = 1, nsp = 2*n-3, val;
    while(row<=n){
        val = 1;
        for(int i = 0; i<nst; i++){
            cout<<val<<"\t";
            if(i!=nst-1) val++;
        }
        for(int i = 0; i<nsp; i++){
            cout<<"\t";
        }
        if(row != n){
            for(int i = 0; i<nst; i++){
                cout<<val<<"\t";
                val--;
            }
        }
        else{
            val--;
            for(int i = 0; i<nst-1; i++){
                cout<<val<<"\t";
                val--;
            }
        }
        
        row++;
        cout<<"\n";
        nsp-=2;
        nst++;
    }
    
}