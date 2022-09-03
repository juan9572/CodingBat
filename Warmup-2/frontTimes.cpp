#include<string>
class Solution{
    public:
    /*
    Given a string and a non-negative int n, we'll say that the front of the string
    is the first 3 chars, or whatever is there if the string is less than length 3.
    Return n copies of the front;

    frontTimes("Chocolate", 2) → "ChoCho"
    frontTimes("Chocolate", 3) → "ChoChoCho"
    frontTimes("Abc", 3) → "AbcAbcAbc"
    */
    std::string frontTimes(std::string str, int n) {
        std::string res = "";
        if(str.size() < 3){
            for(int i = 0; i < n; i++){
                res += str;
            }
        }else{
            str = str.substr(0,3);
            for(int i = 0; i < n; i++){
                res += str;
            }
        }
        return res;
    }
};