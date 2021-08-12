#include<bits/stdc++.h>
using namespace std;

void rotate(int* arr, int n, int k){
   // write your code here
   queue<int>v;
   k%=n;
   if(k<0) k = n+k;
   for(int i = 0; i<n; i++){
       while(i<n-k){
           v.push(arr[i]);
           i++;
       }
       if(i>=n-k){
           arr[i-(n-k)] = arr[i];
       }
   }
   for(int i = k; i<n; i++){
       arr[i] = v.front();
       v.pop();
   }
    
}

void display(int* arr, int n){
    for(int i = 0 ; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n, r;
    cin>>n;
    int* arr = new int[n];
    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
    }
    cin>>r;
    
    rotate(arr,n,r);
    display(arr,n);
}