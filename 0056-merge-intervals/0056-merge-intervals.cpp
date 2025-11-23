class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {
        int n = arr.size();
	sort(arr.begin(),arr.end());
	vector<vector<int>>v;
	for(int i=0;i<n;i++){
		if(v.empty() || arr[i][0]>v.back()[1])v.push_back(arr[i]);
		else{
			v.back()[1]=max(v.back()[1],arr[i][1]);
		}
	}
	return v;
    }
};