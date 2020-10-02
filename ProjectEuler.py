""" 
Project Euler question 6 Class
Author: Seth Ward
Date: 10/1/20

Class to compute the sum of squares, the square of sums, and the 
difference between the sum of squares and the square of sums.
"""
import math
import fractions

class ProjEuler6:

    def __init__(self, last_number=1000):
        """
        Class initiation.
        param last_number: The last number in the range to compute.
        """
        self.last_number = last_number

    def sum_of_the_squares(self):
        """
        Method to calculate the sum of squares for the range of a
        given number.
        return: The sum of squares.
        rtype: int.
        """
        sum_of_sqr = [x * x for x in range(1, self.last_number +1)]
        return sum(sum_of_sqr)


    def square_of_the_sums(self):
        """
        Method to calculate the square of sums for the range of a
        given number.
        return: The square of sums.
        rtype: int.
        """
        sqr_of_sum = sum(range(1, self.last_number + 1))
        return sqr_of_sum * sqr_of_sum


    def calc_the_difference(self):
        """
        Method to calculate the difference between the sum of squares and the 
        square of sums.
        return: None.
        """
        sum_of_sqr = self.sum_of_the_squares()
        sqr_of_sum = self.square_of_the_sums()
        difference = abs(sum_of_sqr - sqr_of_sum)
        print("The sum of the squares: {0}\nThe square of the sums: {1}\nThe difference:         {2}"
        .format(sum_of_sqr, sqr_of_sum, difference))


if __name__=='__main__':
    pass
