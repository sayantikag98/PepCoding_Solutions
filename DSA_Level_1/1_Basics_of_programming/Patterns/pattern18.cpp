#include <iostream>
using namespace std;
int main(int agrc, char**argv){
    int n;
    cin >> n;

    //write your code here
    int nst = n, row = 1, nsp = 0, nsp1 = n/2;
    while(row<=n){
        for(int i = 0; i<nsp; i++){
            cout<<"\t";
        }
        for(int i = 0; i<nst; i++){
            if(row>1 and row<(n+1)/2){
                if(i==0 or i == nst-1) 
                    cout<<"*\t";
                else 
                    cout<<"\t";
            }
            else cout<<"*\t";
        }
        row++;
        cout<<"\n";
        nsp1-=2;
        if(row<=(n+1)/2){
            nsp++;
            nst-=2;
        }
        else{
            nsp--;
            nst+=2;
        }
    }
    
}