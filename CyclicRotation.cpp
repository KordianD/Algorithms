// Code was writen for Codility

vector<int> solution(vector<int> &A, int K)
{

    unsigned int howManyMoves = K % A.size();

    vector<int> temp(A.size());

    for (unsigned int i = 0; i < A.size(); i++)
    {
        if (i + howManyMoves >= A.size())
            temp.at(i + howManyMoves - A.size()) = A[i];
        else
            temp.at(i + howManyMoves) = A[i];
    }

    for (unsigned int i = 0; i < A.size(); i++)
        A[i] = temp[i];

    return A;

}