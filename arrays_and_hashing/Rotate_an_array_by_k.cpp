//Leetcode - Reverse a string by k
//https://leetcode.com/problems/rotate-array/

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
    k=k%nums.size();
    reverse(nums.begin(),nums.begin()+(nums.size()-k));
    reverse(nums.begin()+(nums.size()-k),nums.end());
    reverse(nums.begin(),nums.end());
    }
};
