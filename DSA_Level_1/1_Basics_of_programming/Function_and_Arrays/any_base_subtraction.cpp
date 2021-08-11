#include<bits/stdc++.h>
using namespace std;

int getDifference(int b, int n1, int n2){
    // write your code here
    int ans = 0, p = 0, sub = 0, dig1, dig2, carry = 0;
    while(n2){
        dig1 = n1%10;
        dig2 = n2%10;
        if(dig2<(dig1+carry)){
            sub = (b*1+dig2)-(dig1+carry);
            carry = 1;
        }
        else{
            sub = dig2 - (dig1+carry);
            carry = 0;
        }
        n1/=10;
        n2/=10;
        ans += (sub * pow(10, p++));
    }
    return ans;
}


int main(){
    int b, n1, n2;
    cin>>b>>n1>>n2;
    cout<<getDifference(b,n1,n2);
}