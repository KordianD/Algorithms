#include <bits/stdc++.h>

using namespace std;

vector <string> split_string(string);

/*
 * Complete the countApplesAndOranges function below.
 */
void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges)
{
    auto numberOfApplesInHouse = 0;
    auto numberOfOrangesInHouse = 0;

    for (const auto elem: apples)
    {
        auto point = a + elem;
        if (point >= s and point <= t)
        {
            ++numberOfApplesInHouse;
        }
    }


    for (const auto elem: oranges)
    {
        auto point = b + elem;
        if (point >= s and point <= t)
        {
            ++numberOfOrangesInHouse;
        }
    }

    std::cout << numberOfApplesInHouse << std::endl;
    std::cout << numberOfOrangesInHouse;

}

int main()
{
    string st_temp;
    getline(cin, st_temp);

    vector <string> st = split_string(st_temp);

    int s = stoi(st[0]);

    int t = stoi(st[1]);

    string ab_temp;
    getline(cin, ab_temp);

    vector <string> ab = split_string(ab_temp);

    int a = stoi(ab[0]);

    int b = stoi(ab[1]);

    string mn_temp;
    getline(cin, mn_temp);

    vector <string> mn = split_string(mn_temp);

    int m = stoi(mn[0]);

    int n = stoi(mn[1]);

    string apple_temp_temp;
    getline(cin, apple_temp_temp);

    vector <string> apple_temp = split_string(apple_temp_temp);

    vector<int> apple(m);

    for (int apple_itr = 0; apple_itr < m; apple_itr++)
    {
        int apple_item = stoi(apple_temp[apple_itr]);

        apple[apple_itr] = apple_item;
    }

    string orange_temp_temp;
    getline(cin, orange_temp_temp);

    vector <string> orange_temp = split_string(orange_temp_temp);

    vector<int> orange(n);

    for (int orange_itr = 0; orange_itr < n; orange_itr++)
    {
        int orange_item = stoi(orange_temp[orange_itr]);

        orange[orange_itr] = orange_item;
    }

    countApplesAndOranges(s, t, a, b, apple, orange);

    return 0;
}

vector <string> split_string(string input_string)
{
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [](const char &x, const char &y)
    {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ')
    {
        input_string.pop_back();
    }

    vector <string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos)
    {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}

