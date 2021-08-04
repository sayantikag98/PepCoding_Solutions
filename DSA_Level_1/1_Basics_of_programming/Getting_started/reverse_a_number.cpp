#include <iostream>
using namespace std;

void numberReverse(int n){
    while(n){
        cout<<n%10<<endl;
        n/=10;
    }
}

int main(int argc, char **argv){
    int n;
    cin >> n;

    //write your code here
    
    numberReverse(n);
    
}