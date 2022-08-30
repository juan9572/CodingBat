#include<string>
class Solution{
    public:
    /*
    Given a string, return true if the string starts with "hi" and false otherwise.


    startHi("hi there") → true
    startHi("hi") → true
    startHi("hello hi") → false
    */
    bool startHi(std::string str) {
        return str.size() >= 2 && str.substr(0,2) == "hi";
    }
};