#include<string>
class Solution{
    public:
    /*
    Given a string, if the string "del" appears starting at index 1,
    return a string where that "del" has been deleted. Otherwise, return the string unchanged.

    delDel("adelbc") → "abc"
    delDel("adelHello") → "aHello"
    delDel("adedbc") → "adedbc"
    */
    std::string delDel(std::string str) {
        return str.size() >= 4 && str.substr(1,3) == "del"?str.substr(0,1) + str.substr(4):str;
    }
};