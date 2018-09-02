def BubbleSort(array):
    for i in range(0, len(array)):
        for j in range(0, len(array) - 1):
            if array[j] > array[j + 1]:
                temp = array[j]
                array[j] = array[j + 1]
                array[j + 1] = temp


unsortedArray = [4, -2, 16, 5, 1, 0, 8, 11]

BubbleSort(unsortedArray)

for elem in unsortedArray:
    print(elem, " ", end="")
