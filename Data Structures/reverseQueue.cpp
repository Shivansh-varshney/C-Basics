#include <iostream>
#include <queue>
#include <stack>

using namespace std;

int main()
{

    stack<int> stck;
    queue<int> que;

    que.push(1);
    que.push(2);
    que.push(3);
    que.push(4);
    que.push(4);
    que.push(5);

    while (not que.empty())
    {
        stck.push(que.front());
        que.pop();
    }

    while (not stck.empty())
    {
        que.push(stck.top());
        stck.pop();
    }

    while (not que.empty())
    {
        cout << que.front()<<" ";
        que.pop();
    }

    cout << endl;

    return 0;
}