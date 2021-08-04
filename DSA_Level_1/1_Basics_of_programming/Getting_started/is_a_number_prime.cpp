#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        bool flag = 1;
        for(int i = 2; i*i<=n; i++){
            if(n%i==0){
                flag = 0;
                break;
            }
        }
        if(flag) cout<<"prime\n";
        else cout<<"not prime\n";
    }
    
}