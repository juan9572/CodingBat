#include<string>
class Solution{
    public:
    /*
    Given a string, return true if the first instance of "x" in the string is immediately
    followed by another "x".

    doubleX("axxbb") → true
    doubleX("axaxax") → false
    doubleX("xxxxx") → true
    */
    bool doubleX(std::string str) {
        for(int i = 0; i < str.size(); i++){
            if(str[i] == 'x'){ // If we found a "x"
                if(i+1 < str.size() && str[i+1] == 'x') return true; // The following character must be "x"
                else return false;
            }
        }
        return false; // There aren't any x in the string
    }
};