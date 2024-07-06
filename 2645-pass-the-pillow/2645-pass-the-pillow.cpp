class Solution {
public:
    int passThePillow(int n, int time) {
        int index = 1;
        int curr = 0;
        int direction = 1;
        while(curr < time)
        {
            if( 0 < index + direction && index + direction <=n)
            {
                index += direction;
                curr++;
            }
            else 
            direction *= -1;
        }
        return index;
    }
};