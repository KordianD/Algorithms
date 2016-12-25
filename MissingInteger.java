// Code was written for Codility task
// MissingInteger
// Find the minimal positive integer not occurring in a given sequence.

import java.util.HashSet;

class MissingInteger {
    public int solution(int[] A) {
        HashSet<Integer> array = new HashSet<>();

        for (int elem : A)
            array.add(elem);

        for (int i = 1; i <= A.length; i++)
            if (!array.contains(i))
                return i;

        return A.length + 1;
    }
}