#include<bits/stdc++.h>
using namespace std;


int main(){
    int n, b, ans = 0, p = 0;
    cin>>n>>b;
    while(n){
        ans += ((n%b)*pow(10,p++));
        n/=b;
    }
    cout<<ans<<endl;
}