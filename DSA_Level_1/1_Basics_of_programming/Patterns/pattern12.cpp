#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    
    //write your code here
    int row = 1, nst = 1, a = 0, b = 1, c = 0;
    while(row<=n){
        for(int i = 0; i<nst; i++){
            cout<<a<<"\t";
            c = a + b;
            a = b;
            b = c;
        }
        row++;
        cout<<"\n";
        nst++;        
    }   
}