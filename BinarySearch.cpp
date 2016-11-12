#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<iostream>

long BinarySearch(long * array, long number, long arrayLength);

int main() {
    long amountOfNumbers;
    long searchesNumbers;

    std::cin >> amountOfNumbers >> searchesNumbers;

    long * array = new long[amountOfNumbers];
    long * searchesArray = new long[searchesNumbers];

    for (long i = 0; i < amountOfNumbers; i++)
        std::cin >> array[i];

    for (long i = 0; i < searchesNumbers; i++)
        std::cin >> searchesArray[i];

    for (long i = 0; i < searchesNumbers; i++)
        std::cout << BinarySearch(array, searchesArray[i], amountOfNumbers) << " ";


}

long BinarySearch(long * array, long number, long arrayLength) {
    long first = 0;
    long last = arrayLength - 1;

    while (first <= last) {
        long mid = (long)(first + last)/2;
        if (array[mid] == number) {
            while (array[--mid] == number);
                return mid + 2;
        }
        else {
            if (number < array[mid])
                last = mid - 1;
            else
                first = mid + 1;
        }
    }
    return -1;
}
