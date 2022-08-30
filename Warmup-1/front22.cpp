#include<string>
class Solution{
    public:
    /*
    Given a string, take the first 2 chars and return the string with the 2
    chars added at both the front and back, so "kitten" yields"kikittenki".
    If the string length is less than 2, use whatever chars are there.


    front22("kitten") → "kikittenki"
    front22("Ha") → "HaHaHa"
    front22("abc") → "ababcab"
    */
    std::string front22(std::string str) {
        return str.size()>1?str.substr(0,2)+str+str.substr(0,2):str+str+str;
    }
};
