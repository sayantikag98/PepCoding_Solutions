#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, b, ans = 0, p = 0;
    cin>>n>>b;
    
    while(n){
       ans += ((n%10) * pow(b, p++));
       n/=10;
    }
    
    cout<<ans;
}