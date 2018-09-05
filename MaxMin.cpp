#include <bits/stdc++.h>

using namespace std;

// Complete the maxMin function below.
int maxMin(int k, vector<int> arr) {
    std::sort(std::begin(arr), std::end(arr));
    
    auto minimalValue = arr[k-1] - arr[0];
    
    for (auto i = 1; i < arr.size() - k + 1; ++i)
    {
        if (arr[i+k-1] - arr[i] < minimalValue)
        {
            minimalValue = arr[i+k-1] - arr[i];
        }
    }

    return minimalValue;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int k;
    cin >> k;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item;
        cin >> arr_item;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        arr[i] = arr_item;
    }

    int result = maxMin(k, arr);

    fout << result << "\n";

    fout.close();

    return 0;
}

