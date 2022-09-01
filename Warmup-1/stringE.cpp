#include<string>
class Solution{
    public:
    /*
    Return true if the given string contains between 1 and 3 'e' chars.

    stringE("Hello") → true
    stringE("Heelle") → true
    stringE("Heelele") → false
    */
    bool stringE(std::string str) {
        int count = 0;
        for (int i=0; i<str.size(); i++) {
            if (str[i] == 'e') count++;
        }
        return (count >= 1 && count <= 3);
    }
};