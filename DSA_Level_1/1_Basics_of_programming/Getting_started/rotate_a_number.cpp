#include <iostream>
#include<cmath>
using namespace std;

void rotateNumber(int n, int k){
    int temp = n, count = 0;
    while(temp){
        count++;
        temp/=10;
    }
    k%=count; 
    if(k<0) k = count + k;

    int multiplier = pow(10,k), quotient = n/multiplier, rem = n%multiplier;
    
    rem = (rem* (pow(10, count-k)))+quotient;
    cout<<rem<<"\n";
}


int main(){
    int n,k;
    cin>>n>>k;
    
    //write your code here
    rotateNumber(n,k);

}