#include<bits/stdc++.h>
using namespace std;

int main(){
    int n1, n2;
    cin>>n1;
    int* a1 = new int[n1];
    for(int i = 0 ; i < n1; i++){
        cin>>a1[i];
    }
    
    cin>>n2;
    int* a2 = new int[n2];
    for(int i = 0 ; i < n2; i++){
        cin>>a2[i];
    }
    
    //write your code here
    int sum = 0, carry = 0, i = n1-1, j = n2-1; 
    vector<int> ans;
    
    for(; j>=0 and i>=0; j--, i--){
        sum = a1[i] + a2[j] + carry;
        ans.emplace_back(sum%10);
        carry = sum/10;
    }
    while(i>=0){
        sum = a1[i] + carry;
        ans.emplace_back(sum%10);
        carry = sum/10;
        i--;
    }
    while(j>=0){
        sum = a2[j] + carry;
        ans.emplace_back(sum%10);
        carry = sum/10;
        j--;
    }
    if(carry){
        ans.emplace_back(carry);
    }
    for(int k = ans.size()-1; k>=0; k--){
        cout<<ans[k]<<endl;
    }   
}