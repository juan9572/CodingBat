#include<string>
#include <algorithm>
class Solution{
    public:
    /*
    Given a string, return a new string where the last 3 chars are now in upper case.
    If the string has less than 3 chars, uppercase whatever is there.
    Note that str.toUpperCase() returns the uppercase version of a string.

    endUp("Hello") → "HeLLO"
    endUp("hi there") → "hi thERE"
    endUp("hi") → "HI"
    */
    std::string endUp(std::string str) {
        if (str.size() <= 3){
            std::transform(str.begin(),str.end(),str.begin(),::toupper);
            return str;
        }else{
            int cutStrig = str.size() - 3;
            std::transform(str.begin()+cutStrig,str.end(),str.begin()+cutStrig,::toupper);
            return str;
        }
    }
};