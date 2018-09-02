#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the gradingStudents function below.
 */
vector<int> gradingStudents(vector<int> grades)
{
    vector<int> roundedGrades{};

    for (const auto grade: grades)
    {
        if (grade < 38)
        {
            roundedGrades.emplace_back(grade);
            continue;
        }

        auto nextMultipleOf5 = int(grade / 5) * 5 + 5;
        if (nextMultipleOf5 - grade < 3)
        {
            roundedGrades.emplace_back(nextMultipleOf5);
            continue;
        }

        roundedGrades.emplace_back(grade);

    }

    return roundedGrades;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<int> grades(n);

    for (int grades_itr = 0; grades_itr < n; grades_itr++)
    {
        int grades_item;
        cin >> grades_item;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        grades[grades_itr] = grades_item;
    }

    vector<int> result = gradingStudents(grades);

    for (int result_itr = 0; result_itr < result.size(); result_itr++)
    {
        fout << result[result_itr];

        if (result_itr != result.size() - 1)
        {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}

