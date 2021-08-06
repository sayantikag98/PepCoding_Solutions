#include <iostream>
using namespace std;
int main(int argc, char**argv){
    int n;
    cin >> n;

    if(n==1){
        cout<<"*";
        return 0;
    }
    
    int nsp1 = n-2, nsp2 = n/2-1, nsp3 = -1, row = 1;
    while(row<=n){
        if(row<(n+1)/2 or row == n){
            cout<<"*\t";
            for(int i = 0; i<nsp1; i++){
                cout<<"\t";
            }
            cout<<"*";
        }
        else{
            cout<<"*\t";
            for(int i = 0; i<nsp2; i++){
                cout<<"\t";
            }
            cout<<"*\t";
            if(row!=(n+1)/2){
                for(int i = 0; i<nsp3; i++){
                    cout<<"\t";
                }
                cout<<"*\t";
            }
            
            for(int i = 0; i<nsp2; i++){
                cout<<"\t";
            }
            cout<<"*\t";
            nsp2--;
            nsp3+=2;
        }
        row++;
        cout<<"\n";
    }
    

}