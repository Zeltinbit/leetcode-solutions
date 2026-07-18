#include <iostream>
#include <string>
#include <cctype>

using namespace std;

class Solution
{
public:
    bool isPalindrome(string s)
    {

        int left = 0;
        int right = s.size() - 1;

        while (left < right)
        {

            // Skip non-alphanumeric characters from the left
            while (left < right && !isalnum(s[left]))
            {
                left++;
            }

            // Skip non-alphanumeric characters from the right
            while (left < right && !isalnum(s[right]))
            {
                right--;
            }

            // Compare characters (case-insensitive)
            if (tolower(s[left]) != tolower(s[right]))
            {
                return false;
            }

            left++;
            right--;
        }

        return true;
    }
};

int main()
{

    Solution solution;

    string s = "A man, a plan, a canal: Panama";

    if (solution.isPalindrome(s))
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }

    return 0;
}