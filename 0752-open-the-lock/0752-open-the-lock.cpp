class Solution {
public:
    int openLock(vector<string>& deadends, string target) {
       unordered_set<string> deadendSet(deadends.begin(),deadends.end());
       if(deadendSet.count("0000")) return -1;

       queue<pair<string,int>> q;
       q.push({"0000",0});
       unordered_set<string> vis;
       vis.insert("0000");
       while(!q.empty())
       {
        auto curr = q.front();
        q.pop();
        string currStr = curr.first;
        int moves = curr.second;
        if(currStr == target) return moves;

        for(int i =0;i<4;i++)
        {
            for(int del : {-1,1})
            {
                int newDigit = (currStr[i] -'0'+ del+10)%10;
                string newStr = currStr;
                newStr[i] = '0'+ newDigit;

            if(vis.find(newStr) == vis.end() && deadendSet.find(newStr) == deadendSet.end())
            {
                vis.insert(newStr);
                q.push({newStr,moves+1});
            }
            }
        }
       }
         return -1;
    }
};