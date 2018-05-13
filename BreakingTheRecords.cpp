#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

/*
 * Complete the breakingRecords function below.
 */
vector<int> breakingRecords(vector<int> score) {
    auto worstScore = score[0];
    auto bestScore = score[0];
    auto howManyTimesImproved = 0;
    auto howManyTimesWorsen = 0;
    
    for (int i = 0; i < score.size(); ++i)
    {
        if (score[i] > bestScore)
        {
            bestScore = score[i];
            ++howManyTimesImproved;
        }
        else if (score[i] < worstScore)
        {
            worstScore = score[i];
            ++howManyTimesWorsen;
        }
        
    }
    
    return {howManyTimesImproved, howManyTimesWorsen};
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string score_temp_temp;
    getline(cin, score_temp_temp);

    vector<string> score_temp = split_string(score_temp_temp);

    vector<int> score(n);

    for (int score_itr = 0; score_itr < n; score_itr++) {
        int score_item = stoi(score_temp[score_itr]);

        score[score_itr] = score_item;
    }

    vector<int> result = breakingRecords(score);

    for (int result_itr = 0; result_itr < result.size(); result_itr++) {
        fout << result[result_itr];

        if (result_itr != result.size() - 1) {
            fout << " ";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}

