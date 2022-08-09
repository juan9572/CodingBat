#include<string>
class Solution{
    public:
    /*
    Given a string, we'll say that the front is the first 3 chars of the string.
    If the string length is less than 3, the front is whatever is there.
    Return a new string which is 3 copies of the front.

    front3("Java") → "JavJavJav"
    front3("Chocolate") → "ChoChoCho"
    front3("abc") → "abcabcabc"
    */
    std::string front3(std::string str) {
        return str.size() <= 3 ? str + str + str : str.substr(0,3) + str.substr(0,3) + str.substr(0,3);
    } // if(str.size() <= 3) that means the solution will be whatever is there in str three times
      // in another case it means the solution is going to be the three first chars of the string three times 
};