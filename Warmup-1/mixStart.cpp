#include<string>
class Solution{
    public:
    /*
    Return true if the given string begins with "mix", except the 'm' can be anything,
    so "pix", "9ix" .. all count.

    mixStart("mix snacks") → true
    mixStart("pix snacks") → true
    mixStart("piz snacks") → false
    */
    bool mixStart(std::string str) {
        return str.size() >= 3 && str.substr(1,2) == "ix";
    }
};