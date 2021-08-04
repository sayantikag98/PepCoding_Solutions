#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;

    //write your code here
    int nsp = 0, nst = n, row = 1;
    while(row<=n){
        for(int i = 0; i<nsp; i++){
            cout<<"\t";
        }
        for(int i = 0; i<nst; i++){
            cout<<"*\t";
        }
        row++;
        cout<<"\n";
        nst--;
        nsp++;
    }

}