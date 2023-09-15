class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        //easy approach
        for(int i =m, j =0; i<nums1.size(); i++)
            nums1[i] = nums2[j++];
        sort(nums1.begin(),nums1.end());
    }
};