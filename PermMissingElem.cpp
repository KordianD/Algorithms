// Code was writen for Codility
//  PermMissingElem
// Find the missing element in a given permutation.

#include <vector>

int solution(std::vector<int> &A) {
    long sum = 0;

    for (int i = 0; i < A.size() + 1; i++)
        sum += i + 1;

    for (int elem : A)
        sum -= elem;

    return sum;
}