#include <bits/stdc++.h>
using namespace std;
bool valid(string str)
{
    /*
    algo
    if stack is empty insert element
    if stack has some element compare top element of stack with first  element of string like s.top() to str[0]
    if they cancel each other then remove top element of stack
    do it in loop
    if stack is empty then valid otherwise invalid
    */
    stack<char> s;
    for (int i = 0; i < str.length(); i++)
    {
        if (s.empty())
        {

            s.push(str[i]);
        }
        else if ((s.top() == '(' && str[i] == ')') || (s.top() == '{' && str[i] == '}') || (s.top() == '[' && str[i] == ']'))
        {

            s.pop();
        }
        else
        {
            s.push(str[i]);
        }
    }
    if (s.empty())
    {

        return true;
    }
    return false;
}
int main()
{
    string str;
    getline(cin, str);
    if (valid(str))
    {
        cout << "valid";
    }
    else
    {
        cout << "invalid";
    }
}
