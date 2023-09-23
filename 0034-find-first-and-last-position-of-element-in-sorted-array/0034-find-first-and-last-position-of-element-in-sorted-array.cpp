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

int firstElement(vector<int> &nums, int target)
{
    int low = 0 , high = nums.size()-1;
        int first = -1;
        while(low<=high)
        {
            int mid = low +(high-low)/2;
            if(nums[mid]==target)
            {
                first = mid;
                high = mid-1;
            }
            else if (nums[mid]<target)
                low=mid+1;
            else
                high = mid-1;
        }
        return first;
}

int lastElement(vector<int> &nums, int target)
{
    int low = 0 , high = nums.size()-1;
        int last = -1;
        while(low<=high)
        {
            int mid = low +(high-low)/2;
            if(nums[mid]==target)
            {
                last = mid;
                low = mid+1;
            }
            else if (nums[mid]<target)
                low=mid+1;
            else
                high = mid-1;
        }
        return last;
}
    vector<int> searchRange(vector<int>& nums, int target) {
        /*
        //lower bound and upper bound solution
        int lb = lowerBound(nums, nums.size(), target);
        if(lb==nums.size() || nums[lb]!=target)
            return {-1,-1};
        return {lb, upperBound(nums, nums.size(), target)-1};
        */

        return {firstElement(nums, target), lastElement(nums, target)};
    }
};