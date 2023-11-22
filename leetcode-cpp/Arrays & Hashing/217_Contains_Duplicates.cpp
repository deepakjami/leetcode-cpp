// Solution 1 : 
// Time Complexity: O(n log n)
// Space Complexity: O(log n) 
class Solution {
public:
    bool containsDuplicate(vector<int>&nums)
    {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-1;i++)
        {
            if(nums[i]==nums[i+1])
            {
                return true;
            }
        }
        return false;
    }
};

//Solution 2 :
// Time Complexity: O(n)
// Space Complexity: O(n)
class Solution {
public:
    bool containsDuplicate(vector<int>& nums)
    {
        unordered_set<int> numSet;
        for (int num : nums)
        {
            if (numSet.find(num) != numSet.end())
            {
                return true;
            }
            numSet.insert(num);
        }
        return false;
    }
};
