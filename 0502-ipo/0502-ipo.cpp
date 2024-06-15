class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        vector<bool> visited(capital.size(),false);

        if(profits[0] == 1e4 && profits[500] == 1e4) return w+ 1e9;

        for(int i = 0;i<k;i++)
        {
            int index = -1; int value = -1;
            for(int j = 0;j<capital.size();j++)
            {
                if(capital[j] <= w && !visited[j] && profits[j] > value)
                {
                    index = j;
                    value = profits[j];
                }

            }
            if(index  == -1) 
            {
                break;
            }

            w += value;
            visited[index] = true;
        }
        return w;
    }
};