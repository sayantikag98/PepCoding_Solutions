#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int a,b,c;
    cin >> a >> b >> c;
    
    //write your code here
    int squareA = a*a, squareB = b*b, squareC = c*c;
    if((squareA+squareB == squareC) or (squareB+squareC == squareA) or (squareA+squareC == squareB)) cout<<"true"<<endl;
    else cout<<"false"<<endl;
    
}