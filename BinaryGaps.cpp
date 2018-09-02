// Code was writen for Codility

#include <iostream>

std::string binaryDecomposition(int N);
int countSequences(std::string number);

int solution(int N)
{
    std::string number;

    number = binaryDecomposition(N);
    return countSequences(number);
}

std::string binaryDecomposition(int N)
{
    std::string number, temp;
    int moduloNumber;

    while (N != 0)
    {
        moduloNumber = N % 2;
        N = N / 2;
        number += moduloNumber == 1 ? "1" : "0";
    }

    for (int i = number.size() - 1; i >= 0; i--)
        temp += number[i];

    return temp;
}
int countSequences(std::string number)
{
    int lengthOfSequence = 0, newLength;

    for (unsigned long i = 0; i < number.size(); i++)
    {
        if ('1' == number[i])
        {
            lengthOfSequence = newLength > lengthOfSequence ? newLength : lengthOfSequence;
            newLength = 0;
        } else if ('0' == number[i])
            newLength++;
    }
    return lengthOfSequence;
}
