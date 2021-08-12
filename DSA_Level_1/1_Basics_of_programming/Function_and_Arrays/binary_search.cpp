#include<iostream>
using namespace std;


int main(){
	int arr[] = {24, 45, 56, 78, 89, 90};
	int n = sizeof(arr)/size(arr[0]);
	int low = 0, high = n-1, tar = 45;
	bool flag = 1;
	while(lo<=hi){
		int mid = low + ((high - low)/2);
		if(arr[mid] == tar){
			cout<<mid<<"\n";
			flag = 0;
			break;
		}
		else if(arr[mid]<tar){
			low = mid + 1;
		}
		else{
			high = mid - 1;
		}
	}
	if(flag) cout<<-1<<endl;
}