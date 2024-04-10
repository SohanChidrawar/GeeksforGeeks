class Solution:
    def checkTriplet(self, arr, n):
        # Create a dictionary to store the square of each element as keys
        # and the corresponding original element as values.
        square_map = {i * i: i for i in arr}

        # Iterate through the square_map to find triplets with the sum of squares.
        for square1 in square_map:
            for square2 in square_map:
                # Calculate the sum of two squared values.
                sum_of_squares = square1 + square2

                # Check if the sum exists in the square_map, indicating the presence of a triplet.
                if sum_of_squares in square_map:
                    return True

        # If no triplet is found, return False.
        return False
