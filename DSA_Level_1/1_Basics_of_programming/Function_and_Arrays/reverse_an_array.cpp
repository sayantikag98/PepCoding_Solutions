#include<iostream>
using namespace std;

void swap(int* arr, int i, int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void reverse(int* arr, int n){
    // write your code here
    for(int i = 0; i<(n+1)/2; i++){
        swap(arr, i, n-i-1);
    }
}

void display(int* arr, int n){
    for(int i = 0 ; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    
    int* arr = new int[n];
    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
    }
    reverse(arr,n);
    display(arr,n);
}