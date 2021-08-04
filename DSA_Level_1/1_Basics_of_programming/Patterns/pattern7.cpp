#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;

    //write your code here
    int nsp = 0, row = 1;
    while(row<=n){
        for(int i = 0; i<nsp; i++){
            cout<<"\t";
        }
        cout<<"*\n";
        row++;
        nsp++;
    }   
}