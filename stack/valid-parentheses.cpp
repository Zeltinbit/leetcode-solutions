#include <stack>
#include <string>
using namespace std;

class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> stk;

        for (int i = 0; i < s.size(); i++)
        {

            // Push opening brackets onto the stack
            if (s[i] == '(' || s[i] == '[' || s[i] == '{')
            {
                stk.push(s[i]);
            }
            else
            {
                // No opening bracket to match
                if (stk.empty())
                {
                    return false;
                }

                char top = stk.top();

                // Check if the brackets match
                if ((top == '(' && s[i] == ')') ||
                    (top == '[' && s[i] == ']') ||
                    (top == '{' && s[i] == '}'))
                {
                    stk.pop();
                }
                else
                {
                    return false;
                }
            }
        }

        // Valid only if no unmatched opening brackets remain
        return stk.empty();
    }
};