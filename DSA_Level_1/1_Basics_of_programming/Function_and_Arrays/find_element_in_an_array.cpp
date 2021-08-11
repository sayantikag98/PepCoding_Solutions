#include<iostream>
using namespace std;

int findElementRecursive(int* arr, int n, int i, int d){
    if(i==n) return -1;
    if(arr[i] == d) return i;
    else return findElementRecursive(arr, n, i+1, d);
}

int findElementIterative (int* arr, int n, int d){
    for(int i = 0; i<n; i++){
        if(arr[i]==d) return i;
    }
    return -1;
}


int main(){
    //write your code here
    
    int n, d;
    cin>>n;
    int arr[n];
    for(int &i:arr){
        cin>>i;
    }
    cin>>d;
    cout<<findElementRecursive(arr, n, 0, d);
    // cout<<findElementIterative(arr, n, d);
    
}