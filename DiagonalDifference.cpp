#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the diagonalDifference function below.
 */
int diagonalDifference(vector <vector<int>> a)
{
    auto firstDiagonal = 0;
    auto secondDiagonal = 0;
    auto n = a.size();

    for (auto i = 0; i < n; ++i)
    {
        firstDiagonal += a[i][i];
        secondDiagonal += a[i][n - 1 - i];
    }

    return abs(firstDiagonal - secondDiagonal);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector <vector<int>> a(n);
    for (int a_row_itr = 0; a_row_itr < n; a_row_itr++)
    {
        a[a_row_itr].resize(n);

        for (int a_column_itr = 0; a_column_itr < n; a_column_itr++)
        {
            cin >> a[a_row_itr][a_column_itr];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = diagonalDifference(a);

    fout << result << "\n";

    fout.close();

    return 0;
}

