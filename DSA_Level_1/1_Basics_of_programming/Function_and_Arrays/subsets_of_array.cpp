#include<bits/stdc++.h>
using namespace std;

void subset(int* arr, int ind, int n, vector<int> v){
    if(ind == n){
        for(int i = 0; i<v.size(); i++){
            if(v[i] == -1) cout<<"-\t";
            else cout<<v[i]<<"\t";
        }
        cout<<endl;
        return;
    }
    v.push_back(-1);
    subset(arr, ind+1, n, v);
    v.pop_back();
    v.push_back(arr[ind]);
    subset(arr, ind+1, n, v);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int &i: arr){
        cin>>i;
    }
    vector<int>v;
    subset(arr, 0, n, v);
}