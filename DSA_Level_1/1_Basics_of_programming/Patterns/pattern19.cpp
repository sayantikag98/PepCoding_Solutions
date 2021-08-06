#include <iostream>
using namespace std;
int main(int argc, char** argv){
    int n;
    cin >> n;

    //write your code here
    int nsp1 = n/2, nsp2 = n/2-1, row = 1;
    while(row<=n){
        if(row == 1){
            for(int i = 1; i<=(n+1)/2; i++){
                cout<<"*\t";
            }
            for(int i = 0; i<nsp2; i++){
                cout<<"\t";
            }
            cout<<"*";
        }
        else if(row == n){
            cout<<"*\t";
            for(int i = 0; i<nsp2; i++){
                cout<<"\t";
            }
            for(int i = 1; i<=(n+1)/2; i++){
                cout<<"*\t";
            }
        }
        else if(row == (n+1)/2){
            for(int i = 0; i<n; i++){
                cout<<"*\t";
            }
        }
        else if(row>1 and row<(n+1)/2){
            for(int i = 0; i<nsp1; i++){
                cout<<"\t";
            }
            cout<<"*\t";
            for(int i = 0; i<nsp2; i++){
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
            for(int i = 0; i<nsp1; i++){
                cout<<"\t";
            }
        }
        row++;
        cout<<"\n";
        
        
    }
}