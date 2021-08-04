#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;

    //write your code here
    int nsp_left = 0, nsp_middle = n-2, row = 1;
    while(row<=n){
        for(int i = 0; i<nsp_left; i++){
            cout<<"\t";
        }
        if(row != (n+1)/2) cout<<"*\t";
        for(int i = 0; i<nsp_middle; i++){
            cout<<"\t";
        }
        cout<<"*\n";
        row++;
        if(row<=(n+1)/2){
            nsp_left++;
            nsp_middle-=2;
        }
        else{
            nsp_left--;
            nsp_middle+=2;
        }
    }

}