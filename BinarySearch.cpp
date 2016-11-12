#include <iostream>

int BinarySearch(int *array, int number, int arrayLength);

int main() {

    int amountOfNumbers = 10;
    int array[amountOfNumbers] = {0, 1, 2, 13, 13, 16, 17, 19, 32, 42};

    std::cout << BinarySearch(array, 13, amountOfNumbers);
}

int BinarySearch(int *array, int number, int arrayLength) {
    int first = 0;
    int last = arrayLength - 1;

    while (first <= last) {
        int mid = (int) (first + last) / 2;
        if (array[mid] == number) {
            while (array[--mid] == number);
            return mid + 2;
        } else {
            if (number < array[mid])
                last = mid - 1;
            else
                first = mid + 1;
        }
    }
    return -1;
}
