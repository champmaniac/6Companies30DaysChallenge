// TC O(N^N)

vector<int> FindMax(vector<int> &v, int n){
	vector<int> ans;
	unordered_map<int,int> mapp;
	for(int i=0;i<n;i++){
		int max =0;
		int pos =0;
		for(int j=0;j<v.size();j++){
			if(v[j]>max){
				max = v[j];
				pos=j;
			}
		}
		mapp[pos]=max;
		v[pos]=0;
		ans.push_back(max);
	}

	for(auto it:mapp){
		v[it.first]=it.second;
	}
	return ans;
}