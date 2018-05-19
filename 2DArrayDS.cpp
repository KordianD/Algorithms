#include <bits/stdc++.h>

using namespace std;

// Complete the array2D function below.
int array2D(vector<vector<int>> arr) {
    auto sum = -10000;
    
    for (auto i = 0; i < arr.size() - 2; ++i)
    {
        for (auto j = 0; j< arr[0].size() - 2; ++j)
        {
            auto tempSum = arr[i][j] + arr[i][j+1] + arr[i][j+2] + arr[i+1][j+1] +
                           arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2];
            if (tempSum > sum)
            {
                sum = tempSum;
            }
        }
    }
    
    return sum;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = array2D(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}

