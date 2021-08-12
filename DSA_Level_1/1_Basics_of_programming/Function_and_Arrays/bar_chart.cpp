#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n], max = INT_MIN;
    for(int &i: arr){
        cin>>i;
        if(max<i) max = i;
    }

    for(int j = max; j>0; j--){    
        for(int &i: arr){
            if(j>i) cout<<"\t";
            else cout<<"*\t";
        }
        cout<<"\n";
    }
}