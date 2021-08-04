#include <bits/stdc++.h>
using namespace std;

void primeFactorization(int temp){
    for(int i = 2; i*i<=temp; i++){  
        while(!(temp%i)){
            cout<<i<<" ";
            temp/=i;
        }
        if(temp == 1) break;
    }
    if(temp!=1) cout<<temp<<endl;
    
}
int main(int argc, char **argv){
    int n;
    cin >> n;

    //write your code here
    primeFactorization(n);
    

}
