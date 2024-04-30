class Solution {
public:
    int addDigits(int num) {
        string n = to_string(num);
        int sum = 0;
        while(n.size() >= 1){
        for(auto x: n)
        {
            sum += x-'0';
        }
        if(n.size() ==1 ) break;
            n = to_string(sum);
            sum =0;
        }
        return sum;
    }
};