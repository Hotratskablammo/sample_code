/*
* Template class to calculate the sum of squares, the square
* of sums, and the differnce between the two.
*
*/

#include <iostream>

template<class T>
class TempEuler
{
    private:
        T obj;
    public:
        //Default constructor
        TempEuler(int obj)
        {
            this->obj = obj;
        }
        //Function to calculate the sum of squares
        T SumOfSquares()
        {
            T sumOfSqr = 0;
            for(int idx = 1; idx <= obj; idx++)
            {
                sumOfSqr += static_cast<T> (idx * idx);
            }
            return sumOfSqr;
        }
        //Function to calculate the square of sums
        T SquareOfSums()
        {
            T sqrOfSum = 0;
            for(int idx = 1; idx <= obj; idx++)
            {
                sqrOfSum += static_cast<T>(idx);
            }
            return sqrOfSum * sqrOfSum;
        }
        //Function to calculate the difference between the sum of squares and the square of sums
        T CalculateDifference(T sumOfSqr, T sqrOfSum)
        {
            return std::abs(sumOfSqr - sqrOfSum);
        }

};