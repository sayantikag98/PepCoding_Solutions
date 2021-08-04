#include <iostream>
#define int long long int 
using namespace std;

void fibonacciNumbers(int n){
    int a = 0, b = 1, c = 0, count = 0;
    while(count<n){
        cout<<a<<"\n";
        c = a + b;
        a = b;
        b = c;
        count++;
    }
}

int32_t main(int argc, char **argv)
{
    int n;
    cin >> n;
    
    //write your code here
    
    fibonacciNumbers(n);
    
}