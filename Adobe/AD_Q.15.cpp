#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;

	vector<vector<int>> arr(n);
	for(int i=0;i<n;i++){
		string version;
		cin>>version;
		arr[i].push_back(0);
		for(char c:version){
			if(c=='.')
				arr[i].push_back(0);
			else
				arr[i].back()=arr[i].back()*10+(c-48);
		}
	}

	sort(arr.begin(),arr.end());
	bool dot = false;
	for(auto n:arr.back()){
		if(dot)
			cout<<".";
		cout<<n;
		dot=true;
	}
	return 0;
}