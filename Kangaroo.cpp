#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int main()
{
    float x1, x2;
    int v1, v2;
    std::cin >> x1 >> v1 >> x2 >> v2;
    if (v2 >= v1)
    {
        std::cout << "NO";
        return 0;
    }

    auto n = (x2 - x1) / (v1 - v2) - int((x2 - x1) / (v1 - v2));
    if (n > 0)
        std::cout << "NO";
    else
        std::cout << "YES";

    return 0;
}

