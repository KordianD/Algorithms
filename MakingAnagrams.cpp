#include <bits/stdc++.h>

using namespace std;

// Complete the makeAnagram function below.
int makeAnagram(string a, string b)
{
    std::unordered_map<char, int> firstWord;

    for (const auto &letter : a)
    {
        auto it = firstWord.find(letter);
        if (firstWord.end() == it)
        {
            firstWord[letter] = 1;
        } else
        {
            (*it).second++;
        }
    }

    auto counter = 0;

    for (const auto &letter : b)
    {
        auto it = firstWord.find(letter);
        if (firstWord.end() != it and (*it).second > 0)
        {
            counter += 2;
            (*it).second--;
        }
    }

    return a.size() + b.size() - counter;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string a;
    getline(cin, a);

    string b;
    getline(cin, b);

    int res = makeAnagram(a, b);

    fout << res << "\n";

    fout.close();

    return 0;
}

