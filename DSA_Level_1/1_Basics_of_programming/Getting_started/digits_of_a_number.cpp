#include <iostream>
#define int long long int
using namespace std;

void printDigits(int n){
    int temp = n, helperNum = 1;
    while(temp>=10){
        helperNum*=10;
        temp/=10;
    }
    while(helperNum){
        cout<<n/helperNum<<endl;
        n %= helperNum;
        helperNum/=10;
    }
}

int32_t main(int argc, char **argv){
    int n;
    cin >> n;

    //write your code here
    printDigits(n);
    
}
