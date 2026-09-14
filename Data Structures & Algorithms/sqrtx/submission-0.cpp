class Solution {
public:
    int mySqrt(int x) {
        if (x == 0 || x == 1) return x;
        for(int m=1;m<x;m++){
            long long ans = (long long)m*m;
            if(m == x/m) {
                return m;
            } else if (ans<x && (m+1)>x/(m+1)){
                return m;
            }
        } return 0;
    } 
};