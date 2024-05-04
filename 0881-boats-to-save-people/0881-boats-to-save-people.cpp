class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int l = 0;
        int r = people.size()-1;
        sort(people.begin(),people.end());
        int cap = limit;
        int boats = 0;
        while(l<=r)
        {
           if(people[r] + people[l]<= cap)
           {
             l++;
             r--;
             boats++;
           }
          else{
            boats++;
           r--;
          }
        }
        return boats;
    }
};