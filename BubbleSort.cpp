#include<iostream>

void BubbleSort(long *array, int sizeOfArray);

int main() {
    int sizeOfArray;
    std::cin >> sizeOfArray;

    long *array = new long[sizeOfArray];

    for (int i = 0; i < sizeOfArray; i++)
        std::cin >> array[i];

    BubbleSort(array, sizeOfArray);

    for (int i = 0; i < sizeOfArray; i++)
        std::cout << array[i] << " ";
}

void BubbleSort(long *array, int sizeOfArray) {
    int temp;

    for (int i = 0; i < sizeOfArray - 1; i++)
        for (int j = 0; j < sizeOfArray - 1; j++)
            if (array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
}