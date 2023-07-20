class Solution {
public:
    double myPow(double x, int n) {
        if (n == 0)
            return 1;
        if (n == 1)
            return x;
        if (n == -1)
            return 1 / x;
        if (n < 0){
            n = abs(n);
            x = 1/x;
        }

        double halfPower = myPow(x, n / 2);
        double result = halfPower * halfPower;
        if (n %2 == 0){
            return result;
        }
        else{
            return x * result;
        }
    }
};
