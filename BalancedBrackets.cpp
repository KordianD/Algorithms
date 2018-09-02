#include <bits/stdc++.h>
#include <deque>

using namespace std;

void checkParentheses(const string &parentheses)
{
    std::deque<char> stack;

    for (char elem: parentheses)
    {
        if ('{' == elem or '[' == elem or '(' == elem)
        {
            stack.push_front(elem);
        } else
        {
            if (stack.empty())
            {
                std::cout << "NO" << std::endl;
                return;
            }
            auto &front_elem = stack.front();

            if (('}' == elem and '{' != front_elem) or
                (']' == elem and '[' != front_elem) or
                (')' == elem and '(' != front_elem))
            {
                std::cout << "NO" << std::endl;
                return;
            }

            stack.pop_front();
        }
    }
    if (not stack.empty())
    {
        std::cout << "NO" << std::endl;
        return;
    }

    std::cout << "YES" << std::endl;
}

int main()
{
    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++)
    {
        string expression;
        getline(cin, expression);
        checkParentheses(expression);
    }


    return 0;
}

