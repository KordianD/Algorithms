// Code writen for Codility test
// TapeEquilibrium
// Minimize the value |(A[0] + ... + A[P-1]) - (A[P] + ... + A[N-1])

int solution(vector<int> &A) {
    long sum = 0;
    long result;
    long temp = A[0];

    for (long elem : A)
        sum += elem;

    result = abs(temp - sum + temp);
    temp += A[1];

    for (unsigned long i = 2; i < A.size(); i++) {
        if (abs(2 * temp - sum) < result)
            result = abs(2*temp - sum);
        temp += A[i];
    }

    return result;
}
