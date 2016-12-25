// Code written for Codility task
// PermCheck
// Check whether array A is a permutation.

import java.util.HashSet;

class Solution {
    public int solution(int[] A) {
        HashSet<Integer> table = new HashSet<>();
        long sum = 0;
        long hashSum = 0;

        for (int elem : A)
            if (table.add(elem))
                hashSum += elem;

        for (long i = 1; i <= A.length; i++)
            sum += i;

        return hashSum == sum  ? 1 : 0;
    }
}