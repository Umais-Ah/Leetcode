class Solution {
public:
    bool isPalindrome(int x) {
            int revNum = 0;  int temp=x;
    while (temp != 0) {
        int last = temp % 10;  
         if (revNum<INT_MIN/10 || revNum>INT_MAX/10){
           return 0;
       }
        revNum = revNum * 10 + last;
        temp=temp/10;
    }
      
      if(revNum==x && revNum>=0){
      return 1;
      }  
      else{
        return 0;
      }
        
    }
};