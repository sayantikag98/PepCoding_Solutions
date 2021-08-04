#include <iostream>
#define int long long int 
using namespace std;

void noOfDigits(int n){
    int countDigits = 0;
    while(n){
        countDigits++;
        n/=10;
    }
    cout<<countDigits<<endl;
}

int32_t main(int argc, char **argv){
    int n;
    cin >> n;
    
    //write your code here
    noOfDigits(n);
    
}