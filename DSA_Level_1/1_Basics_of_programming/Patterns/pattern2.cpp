#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    
    int nst = n, row = 1;
    while(row<=n){
        for(int i = 0; i<nst; i++){
            cout<<"*\t";
        }
        row++;
        nst--;
        cout<<"\n";
    }
    
}