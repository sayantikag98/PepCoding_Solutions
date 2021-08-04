#include <iostream>
#include <math.h>
using namespace std;


void inverseNumber(int n){
    int digit = 0, index = 1, ans = 0, helper;
    while(n){
        digit = n%10;
        helper = pow(10, digit-1);
        ans += (helper*index);
        n/=10;
        index++;
    }
    cout<<ans<<endl;
}

int main(int argc, char **argv){
    int n;
    cin >> n;

    //write your code here
    inverseNumber(n);
    
}