class Solution{
    public:
    /*
    Given 2 int values, return whichever value is nearest to the value 10,
    or return 0 in the event of a tie.
    Note that abs(n) returns the absolute value of a number.

    close10(8, 13) → 8
    close10(13, 8) → 8
    close10(13, 7) → 0
    */
    int close10(int a, int b) {
        int AbsoluteValueOfA = abs(a - 10);
        int AbsoluteValueOfB = abs(b - 10);
        if(AbsoluteValueOfB > AbsoluteValueOfA){
            return a;
        }else if(AbsoluteValueOfA > AbsoluteValueOfB){
            return b;
        }else{
            return 0;
        }
    }
};