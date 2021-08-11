#include<bits/stdc++.h>
using namespace std;

void digitFrequency(int n, int d){
    int count = 0;
    while(n){
        int digit = n%10;
        if(digit == d) count++;
        n/=10;
    }
    cout<<count<<endl;
}

int main(){
    int n,d;
    cin>>n>>d;
    digitFrequency(n,d);
}