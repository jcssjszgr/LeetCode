class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums;
        int allsize = nums1.size() + nums2.size();
        int i = 0;
        int j = 0;
        while(nums.size() <= allsize / 2)
        {
            if(i < nums1.size() && j < nums2.size())
            {
                if(nums1[i] <= nums2[j])
                    nums.push_back(nums1[i++]);
                else
                    nums.push_back(nums2[j++]);
            }
            else if(i == nums1.size())
                nums.push_back(nums2[j++]);
            else if(j == nums2.size())
                nums.push_back(nums1[i++]);
        }
        return (double)(nums[(allsize - 1) / 2] + nums[allsize / 2]) / 2;
    }
};
