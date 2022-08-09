class Solution{
    public:
    /*
    Given 2 int values, return true if one is negative and one is positive.
    Except if the parameter "negative" is true,
    then return true only if both are negative.


    posNeg(1, -1, false) → true
    posNeg(-1, 1, false) → true
    posNeg(-4, -5, true) → true
    */
    bool posNeg(int a, int b, bool negative) {
        return !negative ? (a < 0 && b > 0) || (a > 0 && b < 0) ? true:false: (a < 0 && b < 0) ? true:false;
    } // if(!negative) we should validate that one value is negative and one is positive.
      // if(negative) we should validate that both values are negative.
};