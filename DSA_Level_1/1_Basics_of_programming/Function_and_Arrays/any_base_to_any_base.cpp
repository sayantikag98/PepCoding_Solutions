#include<bits/stdc++.h>
using namespace std;

int numberBaseConvertion (int n, int b1, int b2){
    int ans = 0, p = 0;
    while(n){
        ans += ((n%b2)*pow(b1, p++));
        n/=b2;
    }
    return ans;
}

int main(){
    int n, b1, b2, ans = 0, p = 0;
    cin>>n>>b1>>b2;
    int number10 = numberBaseConvertion(n, b1, 10);
    if(b2==10) 
        cout<<number10;
    else
        cout<<numberBaseConvertion(number10, 10, b2);
}