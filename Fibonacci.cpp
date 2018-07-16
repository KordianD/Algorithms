#include <iostream>
#include <vector>


using namespace std;

int fibonacci(int n) {

    if (0 == n)
    {
        return 0;
    }
    
    std::vector<int> sum(n+1);
    sum[0] = 0;
    sum[1] = 1;
    
    for (int i = 2; i < n+1; ++i)
    {
        sum[i] = sum[i-1] + sum[i-2];
    }
    
    return sum[n];

}

int main() {
    int n;
    cin >> n;
    cout << fibonacci(n);
    return 0;
}
