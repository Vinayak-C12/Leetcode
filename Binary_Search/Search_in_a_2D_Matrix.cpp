//Leetcode - Search in a 2D Matrix - Medium
//https://leetcode.com/problems/search-a-2d-matrix/

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int l = 0;
        int r = m*n -1;
        while(l<=r)
        {
            int mid = (l+r)/2;
            if(matrix[mid/n][mid%n]==target)
            {
                return true;
            }
            else
                if(matrix[mid/n][mid%n]<target)
                {
                    l = mid+1;
                }
            else
            {
                r = mid-1;
            }
        }
        return false;
        
    }
};
