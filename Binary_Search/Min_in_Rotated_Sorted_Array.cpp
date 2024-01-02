//Leetcode - Search the Minimum in a rotated sorted array
//https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/

class Solution {
public:
    int findMin(vector<int>& nums) {
        int l = 0;
        int r = nums.size()-1;
        int res = nums[0];
        while(l<=r)
        {
            if(nums[l]<nums[r])
            {
                res = min(res,nums[l]);
            }
            
            int mid = (l+r)/2;
            res = min(res,nums[mid]);
            
            if(nums[mid]>=nums[l])
            {
                l = mid+1;
            }
            else
            {
                r = mid-1;
            }
        }
        return res;
        
    }
};
