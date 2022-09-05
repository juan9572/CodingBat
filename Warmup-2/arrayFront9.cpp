class Solution{
    public:
    /*
    Given an array of ints, return true if one of the first 4 elements in the array is a 9.
    The array length may be less than 4.

    arrayFront9([1, 2, 9, 3, 4]) → true
    arrayFront9([1, 2, 3, 4, 9]) → false
    arrayFront9([1, 2, 3, 4, 5]) → false
    */
    bool arrayFront9(int[] nums, int size) {
        for(int i = 0; i < size; i++){
            if(nums[i] == 9 && i < 4){
                return true;
            }else if(i > 4) break;
        }
        return false;
    }
    // Explanation of why we pass two parametres instead of one
}; // When you pass an array to a function, it decays into a pointer to the first element, at which point knowledge of its size is lost.
  // https://stackoverflow.com/questions/25680014/find-the-size-of-integer-array-received-as-an-argument-to-a-function-in-c