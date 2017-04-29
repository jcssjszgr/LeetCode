class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        int i, j;
        bool flag = false;
        for(i = 0; i < nums.size(); i++)
        {
            for(j = i + 1; j < nums.size(); j++)
            {
                if(nums.at(i) + nums.at(j) == target)
                {
                    result.push_back(i);
                    result.push_back(j);
                    flag = true;
                    break;
                }
            }
            if(flag)
                break;
        }
        return result;
    }
};
