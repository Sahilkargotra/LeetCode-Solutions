class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0;
        int r = height.size()-1;
        int ans = 0;
        while(l < r)
        {
           int ht ;
           int breadth = r-l;
           if(height[l] < height[r])
           {
            ht = height[l];
            l++;
           }
            else
            {
                ht = height[r];
                r--;
            }
              int area = ht * breadth;
              if(area > ans ) 
              {
                ans = area;
              }
        }
        return ans;
    }
};