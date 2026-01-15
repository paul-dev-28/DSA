#include<iostream>
#include<limits>
using namespace std;
class Solution {
public:
    long int reverse(long int x) {  
        long int rev=0;

        while(x!=0)
        {
            int digit=x%10;
            x/=10;
            if ((rev > INT_MAX / 10) || (rev == INT_MAX / 10 && digit > 7)) 
                return 0;
            if ((rev < INT_MIN / 10) || (rev == INT_MIN / 10 && digit < -8)) 
                return 0;
                rev=rev*10+digit;
        }
            return rev;
    }
    void main()
    {
        long int n;
        cin >> n;
        cout << reverse(n);
    }
};
