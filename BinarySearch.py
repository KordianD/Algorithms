def BinarySearch(array, number):
    first = 0
    last = len(array) - 1
    while first <= last:
        mid = (first + last) // 2
        if array[mid] == number:
            return mid + 1
        else:
            if number < array[mid]:
                last = mid - 1
            else:
                first = mid + 1
    return -1


array = [0, 1, 2, 8, 13, 17, 19, 32, 42]

print(BinarySearch(array, 7))
