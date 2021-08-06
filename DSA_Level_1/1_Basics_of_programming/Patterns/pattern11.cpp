#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    
    //write your code here
    int nst = 1, row = 1, val = 1;
    while(row<=n){
        for(int i = 0; i<nst; i++){
            cout<<val<<"\t";
            val++;
        }
        row++;
        nst++;
        cout<<"\n";
    }
    
}