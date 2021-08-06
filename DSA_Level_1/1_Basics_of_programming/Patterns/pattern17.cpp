#include <iostream>
using namespace std;
int main(int agrc, char**argv){
    int n;
    cin >> n;

    //write your code here
    
    int nst = 1, row = 1, nsp = n/2;
    while(row<=n){
        if(row==(n+1)/2){
            for(int i = 0; i<n/2; i++){
                cout<<"*\t";
            }
        }
        else{
            for(int i = 0; i<nsp; i++){
                cout<<"\t";
            } 
        }
        for(int i = 0; i<nst; i++){
            cout<<"*\t";
        }
        
        row++;
        cout<<"\n";
        if(row<=(n+1)/2) nst++;
        else nst--;
    }
    
}