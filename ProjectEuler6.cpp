/*
* Sample code to find the difference of the sum of squares and the square of sums.
* Problem was taken from my attempt at the 6th problem from projecteuler.net
* 
*/

#include "ProjectEuler6.hpp"

ProjEuler::ProjEuler(int endNum): endNum(endNum){}

//Function to calculate the sum of squares
long long ProjEuler::SumOfSquares()
{
    long long sumOfSqr = 0;
    for(int idx = 1; idx <= endNum; idx++)
    {
        sumOfSqr += idx * idx;
    }
    return sumOfSqr;
}

//Function to calculate the square of sums
long long ProjEuler::SquareOfSums()
{
    long long sqrOfSum = 0;
    for(int idx = 1; idx <= endNum; idx++)
    {
        sqrOfSum += idx;
    }
    return sqrOfSum * sqrOfSum;
}

//Function to calculate the difference between the sum of squares and the square of sums
long long ProjEuler::CalculateDifference(long long sumOfSqr, long long sqrOfSum)
{
    return std::abs(sumOfSqr - sqrOfSum);
}