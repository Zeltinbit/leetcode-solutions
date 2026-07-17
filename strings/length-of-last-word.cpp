#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        int i = s.length() - 1;

        // Skip trailing spaces
        while (i >= 0 && s[i] == ' ')
        {
            i--;
        }

        int length = 0;

        // Count characters of the last word
        while (i >= 0 && s[i] != ' ')
        {
            length++;
            i--;
        }

        return length;
    }
};

int main()
{
    Solution sol;

    cout << sol.lengthOfLastWord("Hello World") << endl;                 // 5
    cout << sol.lengthOfLastWord("   fly me   to   the moon  ") << endl; // 4
    cout << sol.lengthOfLastWord("luffy is still joyboy") << endl;       // 6

    return 0;
}