class Solution{
    public:
    /*
    Given an array of ints, return the number of 9's in the array.

    arrayCount9([1, 2, 9]) → 1
    arrayCount9([1, 9, 9]) → 2
    arrayCount9([1, 9, 9, 3, 9]) → 3
    */
    int arrayCount9(int nums[], int size) {
        int count = 0;
        for(int i = 0; i < size; i++){ //Explanation of how to get the size
            if(nums[i] == 9){                 
                count++;
            }
        }
        return count;
    }
    // Explanation of why we pass two parametres instead of one
}; // When you pass an array to a function, it decays into a pointer to the first element, at which point knowledge of its size is lost.
  // https://stackoverflow.com/questions/25680014/find-the-size-of-integer-array-received-as-an-argument-to-a-function-in-c
