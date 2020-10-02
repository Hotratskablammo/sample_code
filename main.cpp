/*
* Sample code to find the difference of the sum of squares and the square of sums.
* Project Euler problem 6.
* projecteuler.net.
* 
*/

#include <iostream>
#include "ProjectEuler6.hpp"
#include "TempEuler.hpp"


int main()
{
    //Instantiate class
    ProjEuler testProj(1000);

    long long sumOfSqr = testProj.SumOfSquares();
    long long sqrOfSum = testProj.SquareOfSums();
    long long difference = testProj.CalculateDifference(sumOfSqr, sqrOfSum);
    //Print the outputs
    std::cout << "The sum of the squares: " << sumOfSqr << std::endl;
    std::cout << "The square of sums:     " << sqrOfSum << std::endl;
    std::cout << "The difference:         " << difference << std::endl;

    //Instantiate template class
    TempEuler<std::int64_t> testEular(1000);

    std::int64_t sumOfSqr2 = testEular.SumOfSquares();
    std::int64_t sqrOfSum2 = testEular.SquareOfSums();
    std::int64_t difference2 = testEular.CalculateDifference(sumOfSqr2, sqrOfSum2);

    //Print the outputs
    std::cout << "The sum of the squares: " << sumOfSqr2 << std::endl;
    std::cout << "The square of sums:     " << sqrOfSum2 << std::endl;
    std::cout << "The difference:         " << difference2 << std::endl;

    return 0;
}
