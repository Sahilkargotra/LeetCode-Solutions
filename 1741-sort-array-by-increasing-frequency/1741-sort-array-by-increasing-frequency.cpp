class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
           vector<int>ans(201,0);
           for(auto x: nums)
           {
            ans[x+100]++;
           }
           sort(nums.begin(),nums.end(),[&](int a,int b){
            if(ans[a+100] == ans[b+100])
             return a>b;
             return ans[a+100] < ans[b+100]; 
           });
           return nums;
    }
};