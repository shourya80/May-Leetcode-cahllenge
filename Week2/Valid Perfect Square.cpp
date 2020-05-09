/*
Question- Given a positive integer num, write a function which returns True if num is a perfect square else False.

Note: Do not use any built-in library function such as sqrt.

Example 1:

Input: 16
Output: true
Example 2:

Input: 14
Output: false
*/
//CODE

#define ll long long int
class Solution {
public:
    bool isPerfectSquare(int n) {
       ll l=1,h=n;
        if(n==0)
        {return 1;}
        if(n<0)
        {
            return 0;
        }
        while(l<=h)
        {
            ll mid=(l+h)/2;
            ll c=mid*mid;
            if(c>n)
            {
                h=mid-1;
            }
            else if(c==n)
            {
                return 1;
            }
            else
            {
                l=mid+1;
            }
        }
        return 0;
        
    }
};
