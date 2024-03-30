def duplicates(self, arr, n):
        # Initialize a dictionary to store the frequency of each element
        freq = {}

        # Count the frequency of each element in the input array
        for num in arr:
            freq[num] = freq.get(num, 0) + 1

        # Initialize a set to store the indices of elements occurring more than once
        indices = set()

        # Iterate through the frequency dictionary to find elements occurring more than once
        for key, value in freq.items():
            if value > 1:
                indices.add(key)

        # If no duplicate elements are found, insert -1 into the set
        if not indices:
            indices.add(-1)

        # Convert the set to a list and return it
        return sorted(indices)  
