class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        // This approach is take the 0(nlogn) time
        //     for(int i=0; i<nums.size(); i++){
        //         nums[i] = nums[i]*nums[i];

        //     }
        //     sort(nums.begin(), nums.end());

        // return nums;

        //-- solving the problem using the two pointer approach

        int left = 0;
        int right = nums.size() - 1;

        vector<int> result(nums.size());
        // the index is start from the size(-1)  bcz the array is sorted in the non decreasing order
        
        for (int i = nums.size() - 1; i >= 0; i--) {

            if (abs(nums[left]) > abs(nums[right])) {
                result[i] = nums[left] * nums[left];
                left++;
            } else {
                result[i] = nums[right] * nums[right];
                right--;
            }
        }

        return result;
    }
};
