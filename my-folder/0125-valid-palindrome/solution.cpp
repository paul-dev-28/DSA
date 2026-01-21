class Solution {
public:
    bool isPalindrome(string s) {
        int i,j;
        for( i=0;i<s.size();)
        {
            if (s[i]>='A' && s[i]<='Z')
                s[i]=(char)tolower(s[i]);
            if (!((s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i]<='9')))
                s.erase(s.begin()+i);
            else
                i++;
        }
        for( i=s.size()-1, j=0;i>=0,j<s.size();i--,j++)
        {
            if (s[i]!=s[j])
                return false;
            if (i==j || (i-j)==1)
                return true;
        }
        return true;
    }
};
