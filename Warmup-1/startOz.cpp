#include<string>
class Solution{
    public:
    /*
    Given a string, return a string made of the first 2 chars (if present),
    however include first char only if it is 'o' and include the second only if it is 'z',
    so "ozymandias" yields "oz".

    startOz("ozymandias") → "oz"
    startOz("bzoo") → "z"
    startOz("oxx") → "o"
    */
    std::string startOz(std::string str) {
        std::string resultado = "";
        if(str.size() >= 1 && str[0] == 'o') {
            resultado = str[0];
        }
        if(str.size() >= 2 && str[1] == 'z') {
            resultado += str[1];
        }
        return resultado;
    }
};