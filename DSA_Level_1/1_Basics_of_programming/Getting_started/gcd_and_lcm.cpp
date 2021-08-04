#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    if(b==0) return a;
    else return gcd(b, a%b);
}

int gcdIter(int a, int b){
    int rem = 0;
    while(b){
        rem = a%b;
        a = b;
        b = rem;
    }
    return a;
}


int main(int argc, char **argv){
    int num1, num2;
    cin >> num1 >> num2;

    //int gcdValue = __gcd(num1, num2);  --> gcd of STL
    //int gcdValue = gcd(num1, num2);  --> recursive gcd implementation
    
    int gcdValue = gcdIter(num1, num2);  // iterative gcd implementation
    cout<<gcdValue<<endl;
    cout<<(num1*num2)/gcdValue<<endl;
    
}