#include<string>
class Solution{
    public:
    /*
    Given a string, return a new string made of every other char starting with the first,
    so "Hello" yields "Hlo".

    stringBits("Hello") → "Hlo"
    stringBits("Hi") → "H"
    stringBits("Heeololeo") → "Hello"
    */
    std::string stringBits(std::string str) {
        std::string res = "";
        for(int i = 0; i < str.size(); i++){
            if(i % 2 == 0){
                res = res + str[i];
            }
        }
        return res;
    }

};