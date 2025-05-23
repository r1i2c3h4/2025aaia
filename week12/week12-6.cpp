class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int N = nums.size(); // 陣列的大小
        vector<int> ans(N); // ans 的大小, 是 N 。小心是圓括號 C++的陣列
        for(int i=0; i<N; i++){
            ans[i] = nums[nums[i]]; // 題目要你做這個
        }
        return ans;
    }
};
