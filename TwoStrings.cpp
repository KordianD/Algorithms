#include <bits/stdc++.h>
#include <unordered_map>

using namespace std;

// Complete the twoStrings function below.
string twoStrings(string s1, string s2)
{
    std::unordered_map<char, int> map;

    for (auto elem : s1)
    {
        ++map[elem];
    }

    for (auto elem : s2)
    {
        if (map.find(elem) != map.end())
        {
            return "YES";
        }
    }
    return "NO";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++)
    {
        string s1;
        getline(cin, s1);

        string s2;
        getline(cin, s2);

        string result = twoStrings(s1, s2);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

