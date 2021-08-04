#include<bits/stdc++.h>
using namespace std;


void sieveOfEratosthenes(int low, int high){
    int n = high;
    vector<bool> visited(n+1,1);
    visited[0] = 0;
    visited[1] = 0;
    
    for(int i = 2; i*i<=n; i++){
        if(visited[i]){
            for(int j = i; j*i<=n; j++){
                visited[j*i] = 0;
            }
        }
    }
    
    for(int i = low; i<=high; i++){
        if(visited[i]) cout<<i<<endl;
    }
}





int main(int argc, char **argv){
    int low, high;
    cin>>low>>high;
    sieveOfEratosthenes(low, high);

}