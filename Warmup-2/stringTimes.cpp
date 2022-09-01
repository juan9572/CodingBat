#include<string>
class Solution{
    public:
    /*
    Given a string and a non-negative int n, return a larger string that is n copies
    of the original string.

    stringTimes("Hi", 2) → "HiHi"
    stringTimes("Hi", 3) → "HiHiHi"
    stringTimes("Hi", 1) → "Hi"
    */
    std::string stringTimes(std::string str, int n) {
        int x = 0;
        std::string res = "";
        while(x<n){
            res += str;
            x++;
        }
        return res;
    }
};