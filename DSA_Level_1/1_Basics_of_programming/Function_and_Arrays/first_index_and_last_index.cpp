#include<iostream>
using namespace std;

bool flag = 0, flag_1 = 0;

void firstIndex(int* arr, int ind, int n, int data){
    if(ind == n) return;
    
    if(arr[ind] == data){
        cout<<ind<<endl;
        flag_1 = 1;
        return;
    }
    
    firstIndex(arr, ind+1, n, data);
}

void lastIndex(int* arr, int ind, int n, int data){
    if(ind == n) return;
    lastIndex(arr, ind+1, n, data);
    if(arr[ind] == data and flag == 0) {
        cout<<ind<<endl;
        flag = 1;
    }
}

int main(){
    int n;
    cin>>n;
    int* arr = new int[n];
    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
    }
    int data;
    cin>>data;
    
    // write your code here
    firstIndex(arr, 0, n, data);
    if(!flag_1){
        cout<<-1<<endl;
    }
    lastIndex(arr, 0, n, data);
    if(!flag){
        cout<<-1<<endl;
    }
    
    
}