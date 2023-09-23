class Solution {
public:


    int lowerBound(vector<int> arr, int n, int x) {
	// Write your code here
	int s = 0, e = n-1;
	int ans = n;
	while(s<=e)
	{
		int mid = s+(e-s)/2;
		if(arr[mid]>=x)
		{
			ans = mid;
			e = mid-1;
		}
		else 
			s = mid+1;
	}
	return ans;
    }

    int upperBound(vector<int> &arr, int n, int x){
	// Write your code here.
	int s = 0, e= n-1;
	int ans = n;
	while(s<=e)
	{
		int mid = s+(e-s)/2;
		if(arr[mid]>x)
		{
			ans = mid;
			e = mid-1;
		}
		else	
			s = mid+1;
	}	
	return ans;
}

    vector<int> searchRange(vector<int>& nums, int target) {
        int lb = lowerBound(nums, nums.size(), target);
        if(lb==nums.size() || nums[lb]!=target)
            return {-1,-1};
        return {lb, upperBound(nums, nums.size(), target)-1};
    }
};