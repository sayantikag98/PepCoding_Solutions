#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    
    int nst = 1, nsp = n-1, row = 1;
    while(row<=n){
        for(int i = 0; i<nsp; i++){
            cout<<"\t";
        }
        for(int i = 0; i<nst; i++){
            cout<<"*\t";
        }
        cout<<"\n";
        nsp--;
        nst++;
        row++;
    }
    
}