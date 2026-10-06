class Solution 
{
    public:
    bool hasDuplicate(vector<int>& nums) 
    {
        // int n;
        // vector<int> arr(nums);

        // for(int i : n) { cin >> arr(n); }

        // if(arr.unique()) return true;
        // else return false;
        unordered_set<int> s(nums.begin(), nums.end());
        return s.size() < nums.size();
    }
};