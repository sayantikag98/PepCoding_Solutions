#include <iostream>
using namespace std;

int fact (int n){
    if(n == 1 or n == 0) return 1;
    else return n*fact(n-1);
}

int nCr(int n, int r){
    return fact(n)/(fact(r)* fact(n-r));
}

int main(int argc, char **argv){
    int n;
    cin >> n;
    
    //write your code here
    
    int row = 0, nst = 1, val;
    while(row<n){
        val = 0;
        for(int i = 0; i<nst; i++){
            cout<<nCr(row, val)<<"\t";
            if(i<(nst-1)/2) val++;
            else if(nst%2==0 and i>=(nst-1)/2+1) val--;
            else if(nst%2!=0 and i>=(nst-1)/2) val--;
        }
        row++;
        cout<<"\n";
        nst++;
    }
    
}
