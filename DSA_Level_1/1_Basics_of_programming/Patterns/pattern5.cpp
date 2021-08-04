#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;

    //write your code here
    int nsp = n/2, nst = 1, row = 0;
    while(row<n){
        for(int i = 0; i<nsp; i++){
           cout<<"\t"; 
        }
        for(int i = 0; i<nst; i++){
            cout<<"*\t";
        }
        row++;
        cout<<"\n";
        if(row<(n+1)/2) {
            nst+=2;
            nsp--;
        }
        else {
            nst -=2;
            nsp++;
        }
        
        
    }

}