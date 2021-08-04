#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;

    //write your code here
    
    int nsp = 1, nst = (n+1)/2, row = 1;
    while(row<=n){
        for(int i = 0; i<nst; i++){
            cout<<"*\t";
        }
        for(int i = 0; i<nsp; i++){
            cout<<"\t";
        }
        for(int i = 0; i<nst; i++){
            cout<<"*\t";
        }
        cout<<"\n";
        row++;
        if(row<=(n+1)/2){
            nsp+=2;
            nst--;
        }
        else{
            nsp-=2;
            nst++;
        }
    }    
}