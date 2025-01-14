class Solution {
public:
      int reverse(int x) {
                int revNum = 0;  // This will store the reversed number

    while (x != 0) {
        int last = x % 10;  

         if (revNum<INT_MIN/10 || revNum>INT_MAX/10){
           return 0;
       }

        revNum = revNum * 10 + last;

        x /= 10;
    }
     return revNum;
    }
};