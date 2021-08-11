#include<bits/stdc++.h>
using namespace std;

int getAddition (int b, int n1, int n2){
    int ans = 0, carry = 0, sum = 0, rem = 0, p = 0;
    while(n1 or n2){
        sum = (n1%10) + (n2%10) + carry;
        rem = sum%b;
        carry = sum/b;
        ans += (rem * pow(10, p++));
        n1/=10;
        n2/=10;
    }
    if(carry) ans += (carry*pow(10, p));
    return ans;
}


int getProduct(int b, int n1, int n2) {
    int new_ans = 0, pro = 1;
    while(n1){
        int dig1 = n1%10, carry = 0, ans = 0, p = 0, temp = n2;
        while(temp){
            int dig2 = temp%10, mul = (dig1*dig2)+carry, rem = mul%b;
            carry = mul/b;
            ans += (rem * pow(10, p++));
            temp/=10;
        }
        if (carry) ans += (carry * pow(10, p)); 
        ans *= pro;
        pro*=10;
        new_ans = getAddition(b, ans, new_ans);
        n1/=10;
    }
    return new_ans;
}



int main() {
    int b, n1, n2;
    cin >> b >> n1 >> n2;
    cout << getProduct(b, n1, n2) << endl;
}