#include <iostream>
using namespace std;

class Solution
{
public:
    int reverse(int x)
    {
        long long result = 0;

        while (x != 0)
        {
            int digit = x % 10; // Get last digit
            x /= 10;            // Remove last digit

            result = result * 10 + digit;

            // Check 32-bit integer overflow
            if (result > INT_MAX || result < INT_MIN)
            {
                return 0;
            }
        }

        return result;
    }
};

int main()
{
    Solution solution;

    cout << solution.reverse(123) << endl;  // 321
    cout << solution.reverse(-123) << endl; // -321
    cout << solution.reverse(120) << endl;  // 21

    return 0;
}