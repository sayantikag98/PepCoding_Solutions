#include<bits/stdc++.h>
using namespace std;

int main(){
	// vector<vector<int>>v(7,vector<int>(5,0));
	// for(auto &i: v){
	// 	for(int &j: i){
	// 		cout<<j<<" ";
	// 	}
	// 	cout<<"\n";
	// }


	// vector<int> arr[2];
	// vector<int> v;
	// for(int i = 0; i<3; i++){
	// 	v.emplace_back(i);
	// }
	// arr[0] = v;
	// while(!(v.empty())){
	// 	v.pop_back();
	// }
	// for(int i = 0; i<5; i++){
	// 	v.emplace_back(i);
	// }
	// arr[1] = v;
	// for(int i = 0; i<2; i++){
	// 	for(auto &j: arr[i]){
	// 		cout<<j<<" ";
	// 	}
	// 	cout<<"\n";
	// }

	set<int> s;
	s.insert(5);
	s.insert(4);
	s.insert(5);
	s.insert(3);
	for(auto it = s.begin(); it!=s.end(); it++){
		cout<<*it<<" ";
	}
	cout<<endl;
	if(s.find(3)!=s.end() and s.find(4)!=s.end()) {
		auto it = s.find(3);
		auto it1 = s.find(4);
		it1++;
		s.erase(it, it1);
	}

	for(auto &i:s){
		cout<<i<<" ";
	}
	cout<<"\n";

	priority_queue<int> pq;
	pq.push(10);
	pq.push(3);
	pq.push(4);

	


}