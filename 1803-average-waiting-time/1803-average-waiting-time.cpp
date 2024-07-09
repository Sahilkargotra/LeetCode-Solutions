class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        int n = customers.size();
        vector<int> waiting;
        double ans = 0;
        int arrive = customers[0][0];
        for(auto x: customers)
        {
         if(arrive >= x[0])
         {
            int a = (arrive+ x[1])-x[0];
            if(a > 0){
            waiting.push_back(a);
            }
            arrive += x[1];
            cout<<arrive << endl;
         }  
         else
         {
                int a = x[1];
                waiting.push_back(a);
                arrive = x[0] + x[1];
         }
        }
        for(int i = 0;i<waiting.size();i++){
            ans += waiting[i];
            cout<<waiting[i];
        }
        ans /= waiting.size();
        return ans;
    }
};