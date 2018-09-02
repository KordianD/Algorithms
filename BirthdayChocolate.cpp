#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int main()
{
    auto howManyNumbers = 0;
    std::cin >> howManyNumbers;

    std::vector<int> numbers(howManyNumbers);

    for (auto i = 0; i < howManyNumbers; ++i)
    {
        std::cin >> numbers[i];
    }

    auto sum = 0;
    auto howMany = 0;
    auto result = 0;

    std::cin >> sum >> howMany;

    for (auto i = 0; i < numbers.size(); ++i)
    {
        auto temporarySum = 0;
        for (int j = 0; j < howMany and i + j < numbers.size(); ++j)
        {
            temporarySum += numbers[i + j];
        }

        if (temporarySum == sum)
            ++result;
    }

    std::cout << result;
    return 0;
}

