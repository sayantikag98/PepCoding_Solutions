#include<bits/stdc++.h>
using namespace std;

int getSum(int b, int n1, int n2) {
    // write your code here
    int ans = 0, p = 0, carry = 0, sum = 0, rem = 0;
    while(n1>0 or n2>0){
        sum = (n1%10) + (n2%10) + carry;
        rem = sum%b;
        carry = sum/b;
        ans += (rem * pow(10, p++));
        n1/=10;
        n2/=10;
    }
    if(carry) 
        ans += (carry*pow(10,p++));
    return ans;
}


int main() {
    int b, n1, n2;
    cin >> b >> n1 >> n2;
    cout << getSum(b, n1, n2) << endl;
}