class Solution {
public:
    int findLengthOfShortestSubarray(vector<int>& arr) {
        int n = arr.size();
        int left = 0;
        int right = n-1;
        while(right > 0 && arr[right] >= arr[right-1]) right--;

        int shortest = right;
        while(left < right)
        {
            while( right < n && arr[left] > arr[right]) right++;

            shortest = min(shortest , right-left-1);
            left++;

            if(arr[left-1] > arr[left]) break;
        }
        return shortest;
    }
};