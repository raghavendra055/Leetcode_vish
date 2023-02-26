class Solution {
public:
    bool isPalindrome(int x) {
   long int dup =x,digit,rev=0;
    dup = x;
    if(x<0)
    return false;
    do {
        digit = dup % 10;
        rev = (rev*10) + digit;
        dup = dup/10;
    }while(dup!=0);
    if(x==rev)
    {
        return true;
    }
return false;
    }
};
