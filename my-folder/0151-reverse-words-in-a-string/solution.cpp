class Solution {
public:
    string reverseWords(string s) {
        int str=0;
        int n=s.size();
        string s1;
        string s2;
        while(s[str]==' ')
            str++;
        while(s[n-1]==' ')
            n--;
        for(int i=str;i<n;i++)
        {
            if (s[i]!=' ')
            {
                s2=s2+s[i];
            }   
            else
            {
                s1=' '+s2+s1;
                s2="";
                while(s[i]==' ')
                    i++;
                i--;
            }    
        }
        s1=s2+s1;
        return s1;
    }
};
