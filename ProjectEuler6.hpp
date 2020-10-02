/*
* Header file for sample code to find the difference of the sum of squares and the square of sums.
* Problem was taken from my attempt at the 6th problem from projecteuler.net
* 
*/

#include <iostream>


class ProjEuler
{
    private:
        //Declare private class member variable
        int endNum;

    public:

        //Default constructor
        ProjEuler(): endNum(0)
        {

        }
        //Constructor to accept the end number
        ProjEuler(int endNum);

        //Class function prototypes
        long long SumOfSquares();
        long long SquareOfSums();
        long long CalculateDifference(long long sumOfSqr, long long sqrOfSum);

};
