#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s)
{
    auto timeFlag = s.substr(s.size() - 2);
    auto hoursToAdd = 12;

    if ("PM" == timeFlag)
    {
        if ("12" == s.substr(0, 2))
        {
            return s.substr(0, s.size() - 2);
        }

        auto hour = std::stoi(s.substr(0, 2)) + hoursToAdd;
        return string(std::to_string(hour) + s.substr(2, s.size() - 4));
    }

    if ("AM" == timeFlag and "12" == s.substr(0, 2))
    {
        return "00" + s.substr(2, s.size() - 4);
    }

    return s.substr(0, s.size() - 2);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

