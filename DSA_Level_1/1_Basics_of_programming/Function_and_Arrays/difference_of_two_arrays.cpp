#include<bits/stdc++.h>
using namespace std;

int main(){
    int n1, n2;
    cin>>n1;
    int a1[n1];
    for(int &i: a1){
        cin>>i;
    }
    cin>>n2;
    int a2[n2];
    for(int &j: a2){
        cin>>j;
    }
    int sub = 0, carry = 0, i = n1-1, j = n2-1;
    vector<int> ans;
    for(; i>=0 and j>=0; i--, j--){
        if(a2[j] < a1[i] or (a2[j] == a1[i] and carry!=0)){
            a2[j]+=10;
            sub = a2[j] - (a1[i] + carry);
            carry = 1;
        }
        else{
            sub = a2[j] - (a1[i] + carry);
            carry = 0;
        }
        ans.emplace_back(sub);
    }
    while(j>=0){
        if(a2[j]< carry){
            a2[j]+=10;
            sub = a2[j] - carry;
            carry = 1;
        }
        else{
            sub = a2[j] - carry;
            carry = 0;
        }
        ans.emplace_back(sub);
        j--;
    }
    
    for(int k = ans.size()-1; k>=0; k--){
        if(k==ans.size()-1 and ans[k]==0) continue;
        else cout<<ans[k]<<endl;
    }
}