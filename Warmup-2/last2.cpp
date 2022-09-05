#include<string>
class Solution{
    public:
    /*
    Given a string, return the count of the number of times that a substring length 2 appears
    in the string and also as the last 2 chars of the string,
    so "hixxxhi" yields 1 (we won't count the end substring).

    last2("hixxhi") → 1
    last2("xaxxaxaxx") → 1
    last2("axxxaaxx") → 2
    */
    int last2(std::string str) {
        if(str.size() <= 2){
            return 0;
        }
        std::string postF = str.substr(str.size()-2);
        int count = 0;
        for(int i = 0; i < str.size()-2; i++){
            std::string sub = str.substr(i, 2);
            if(sub == postF){
                count++;
            }
        }
        return count;
    }
};
