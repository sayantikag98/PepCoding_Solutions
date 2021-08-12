#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int* arr = new int[n];
    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
    }
    int data;
    cin>>data;
    
    // write your code here
    int low = 0, high = n-1, floorVal = -1, ceilVal = -1;
    while(low<=high){
        int mid = low + ((high - low) / 2);
        if(arr[mid] == data){
            cout<<data<<"\n";
            cout<<data<<"\n";
            return 0;
        }
        else if(arr[mid]<data){
            floorVal = arr[mid];
            low = mid + 1;
        }
        else{
            ceilVal = arr[mid];
            high = mid - 1;
            
        }
    }
    cout<<ceilVal<<endl;
    cout<<floorVal<<endl;
    
}