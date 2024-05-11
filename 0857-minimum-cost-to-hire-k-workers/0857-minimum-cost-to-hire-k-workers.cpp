class Solution {
public:
    double mincostToHireWorkers(vector<int>& quality, vector<int>& wage, int k) {
       int n = quality.size();
       double min_cost = DBL_MAX;
       double qualityTillNow = 0;
       vector<pair<double,int>> wageQualityRatio;
       for(int i = 0;i<n;i++)
       {
        wageQualityRatio.emplace_back(static_cast<double>(wage[i])/quality[i],quality[i]);
       }
        sort(wageQualityRatio.begin(),wageQualityRatio.end());
        priority_queue<int> highQualityWorkers;
        for(int i = 0; i <n; i++)
        {
            double ratio = wageQualityRatio[i].first;
            int qua = wageQualityRatio[i].second;
            qualityTillNow += qua;
            highQualityWorkers.push(qua);


            if(highQualityWorkers.size() >k )  
            {
                qualityTillNow -= highQualityWorkers.top();
                highQualityWorkers.pop();
            }            
            if(highQualityWorkers.size() == k)
            {
                min_cost = min(min_cost , qualityTillNow *ratio);
            }

        }
             return min_cost;
       }
    };