vector<int> twoSum(vector<int>& nums, int target) {
     unordered_map<int, int> m1;
	vector<int> x;
	
    for(int i=0;i<nums.size();i++){
        for(int j=i+1;j<nums.size();j++){
            if(nums[i]+nums[j] == target){
                x.push_back(i);
                x.push_back(j);
                return x;
            }
        }
    }
	
	return x;

	
}
vector<int> twoSum(vector<int>& nums, int target) {
	unordered_map<int, int> m1;
	vector<int> x;
	

	for (int i = 0;i<nums.size();i++) {
		if (m1.find(target - nums[i]) != m1.end()) {
			x.push_back(m1[target - nums[i]]);
			x.push_back(i+1);

			return x;
		}
		m1[nums[i]] = i;
	}
	return x;
}