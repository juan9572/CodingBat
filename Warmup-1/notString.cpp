#include<string>
class Solution{
    public:
    /*
    Given a string, return a new string where "not " has been added to the front.
    However, if the string already begins with "not", return the string unchanged.
    Note: use .equals() in C++ we can compare with == to compare 2 strings.


    notString("candy") → "not candy"
    notString("x") → "not x"
    notString("not bad") → "not bad"
    */
    std::string notString(std::string str) {
        return str.size() >= 3 && str.substr(0,3) == "not"?str:"not "+str;
    }
};
