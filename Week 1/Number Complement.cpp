/*
Question-Given a positive integer, output its complement number. The complement strategy is to flip the bits of its binary representation.
Example 1:
Input: 5
Output: 2
Explanation: The binary representation of 5 is 101 (no leading zero bits), and its complement is 010. So you need to output 2.
Example 2:
Input: 1
Output: 0
Explanation: The binary representation of 1 is 1 (no leading zero bits), and its complement is 0. So you need to output 0.


class Solution {
public:
    int findComplement(int num) {
        int ans=0;
        int a=1;
        while(num)
        {
            int x=(num&1);
            if(x==0)
            {
                ans+=a;
            }
            a=a<<1;
            num=num>>1;
        }
        return ans;
        
    }
};
