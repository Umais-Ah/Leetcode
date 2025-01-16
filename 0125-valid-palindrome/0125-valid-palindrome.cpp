#include<cctype>
#include<algorithm>
class Solution {
public:
    bool isPalindrome(string s) {
        string result=""; 
    for(char ch: s){
     if(isalnum(ch)){
          result+=tolower(ch);
     }
    }
   string rev=result;
   reverse(rev.begin(),rev.end());
   if(result==rev){
    return 1;
   }
   else{
    return 0;
   }
    }
};