class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0, r = s.length()-1;

        while(l<r){
            while(l<r and !alphaNum(s[l])){
                l++;
            }
            while(r > l and !alphaNum(s[r])){
                r--;
            }
            if(tolower(s[l]) != tolower(s[r])){
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
    bool alphaNum(char c){
        return(c >= 'A' and c <= 'Z' ||
               c >= 'a' and c <= 'z' ||
               c>= '0'  and c <= '9');
    }
};
