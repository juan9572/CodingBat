#include<string>
class Solution{
    public:
    /*
    Count the number of "xx" in the given string.
    We'll say that overlapping is allowed, so "xxx" contains 2 "xx".

    countXX("abcxx") → 1
    countXX("xxx") → 2
    countXX("xxxx") → 3
    */
    int countXX(std::string str) {
        int countX = 0;
        for(int i = 0; i < str.size(); i++) {
            if(i+2 < str.size()){
                if(str.substr(i,2) == "xx") countX++;
            }
        }
        if(str.size() > 0 && str.substr(str.size()-2) == "xx") countX++;
        return countX;
    }
};