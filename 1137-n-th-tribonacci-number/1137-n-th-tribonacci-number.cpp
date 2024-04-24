class Solution {
public:
    int tribonacci(int n) {
     int F[38];
     F[0] = 0;
     F[1] = 1;
     F[2] = 1;
        if(n==1 || n == 2) return 1;
     for(int i = 3;i<=n;i++)
     {
        F[i] = F[i-1]+F[i-2]+F[i-3];
        if(i == n) return F[n];
     }
     return 0;
    }
};