#include<string>
class Solution{
    public:
    /*
    Given a non-empty string like "Code" return a string like "CCoCodCode".

    stringSplosion("Code") → "CCoCodCode"
    stringSplosion("abc") → "aababc"
    stringSplosion("ab") → "aab"
    */
    std::string stringSplosion(std::string str) {
        std::string res = "";
        for(int i = str.size(); i > 0; i--){
            res = str.substr(0,i) + res;
        }
        return res;
    }
};