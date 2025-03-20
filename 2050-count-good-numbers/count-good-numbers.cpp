class Solution {
public:
    const int MOD = 1e9 + 7;

    long long power(long long base, long long exp) {
        long long result = 1;
        while (exp > 0) {
            if (exp % 2 == 1) {  // If exponent is odd
                result = (result * base) % MOD;
            }
            base = (base * base) % MOD;  // Square the base
            exp /= 2;  // Reduce exponent
        }
        return result;
    }

    int countGoodNumbers(long long n) {
        long long even_places = n / 2;
        long long odd_places = (n + 1) / 2;  // Covers the case when n is odd

        long long result = (power(5, odd_places) * power(4, even_places)) % MOD;
        return (int) result;
    }
};
