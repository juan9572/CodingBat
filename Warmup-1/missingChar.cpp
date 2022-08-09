#include<string>
class Solution{
    public:
    /*
    Given a non-empty string and an int n,
    return a new string where the char at index n has been removed.
    The value of n will be a valid index of a char in the original string
    (i.e. n will be in the range 0..str.length()-1 inclusive) 
    in C++ we can take the length of the string as size.


    missingChar("kitten", 1) → "ktten"
    missingChar("kitten", 0) → "itten"
    missingChar("kitten", 4) → "kittn"
    */
    std::string missingChar(std::string str, int n) {
        return str.substr(0,n) + str.substr(n+1);
    }
};