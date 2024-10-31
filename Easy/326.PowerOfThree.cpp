//https://leetcode.com/problems/power-of-three/

#include <math.h>
class Solution {
public:
    bool isPowerOfThree(int n) {long long max = pow(3,19);
        return (n > 0 && (max % n == 0 ));
    }
};