#include<bits/stdc++.h>
using namespace std;

int main(){
    //write your code here
    int n;
    cin>>n;
    int arr[n], min = INT_MAX, max = INT_MIN;
    for(int &i:arr){
        cin>>i;
        if(max<i) max = i;
        if(min>i) min = i;
    }
    cout<<max - min<<endl;
    
}