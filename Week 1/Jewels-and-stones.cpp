/*
Question-
You're given strings J representing the types of stones that are jewels, and S representing the stones you have.  Each character in S is a type of stone you have.  You want to know how many of the stones you have are also jewels.

The letters in J are guaranteed distinct, and all characters in J and S are letters. Letters are case sensitive, so "a" is considered a different type of stone from "A".
 
test case-
Input: J = "aA", S = "aAAbbbb"
Output: 3

*/
class Solution {
public:
    int numJewelsInStones(string j, string s) {
        map<char,int> m;
        for(int i=0;s[i];i++)
        {
            m[s[i]]++;
        }
        int ans=0;
        for(int i=0;j[i];i++)
        {
            ans+=m[j[i]];
        }
        return ans;
    }
};
