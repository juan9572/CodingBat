#include<string>
class Solution{
    public:
    /*
    Given a string, return a new string where the first and last chars have been exchanged.

    frontBack("code") → "eodc"
    frontBack("a") → "a"
    frontBack("ab") → "ba"
    */
    std::string frontBack(std::string str) {
        return str.size() < 2 ? str:str[str.size()-1] + str.substr(1, str.size()-2) + str[0];
    } // if(str.size() >= 2) take the last char and concatenate it with middle chars then concatenate with the first char.
};