class Solution{
    public:
    /*
    Given an int n, return true if it is within 10 of 100 or 200.
    Note: Math.abs(num) in c++ is abs(num) and computes the absolute value of a number.


    nearHundred(93) → true
    nearHundred(90) → true
    nearHundred(89) → false
    */
    bool nearHundred(int n) {
        return (abs(100-n) <= 10 || abs(200-n) <= 10) ? true : false;
    }
};