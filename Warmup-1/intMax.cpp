class Solution{
    public:
    /*
    Given three int values, a b c, return the largest.

    intMax(1, 2, 3) → 3
    intMax(1, 3, 2) → 3
    intMax(3, 2, 1) → 3
    */
    int intMax(int a, int b, int c) {
        if((a>b && b>=c) || (a>c && c>=b)){
            return a;
        }else if((b>c && c>=a) || (b>a && a>=c)){
            return b;
        }else{
            return c;
        }
    }
};