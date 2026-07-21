#include <iostream>
#include <queue>

using namespace std;

class MyStack
{
private:
    queue<int> q;

public:
    MyStack() {}

    void push(int x)
    {
        q.push(x);

        int size = q.size();

        while (size > 1)
        {
            q.push(q.front());
            q.pop();
            size--;
        }
    }

    int pop()
    {
        int topElement = q.front();
        q.pop();
        return topElement;
    }

    int top()
    {
        return q.front();
    }

    bool empty()
    {
        return q.empty();
    }
};

int main()
{
    MyStack stack;

    stack.push(1);
    stack.push(2);
    stack.push(3);

    cout << "Top: " << stack.top() << endl;

    cout << "Pop: " << stack.pop() << endl;

    cout << "Top after pop: " << stack.top() << endl;

    cout << "Is Empty? " << (stack.empty() ? "Yes" : "No") << endl;

    return 0;
}