/*
Question-Given an arbitrary ransom note string and another string containing letters from all the magazines, write a function that will return true if the ransom note can be constructed from the magazines ; otherwise, it will return false.

Each letter in the magazine string can only be used once in your ransom note.

Note:
You may assume that both strings contain only lowercase letters.
example-
canConstruct("a", "b") -> false
canConstruct("aa", "ab") -> false
canConstruct("aa", "aab") -> true
*/
class Solution {
public:
    bool canConstruct(string s1, string s2) {
        int n1=s1.size();
        int n2=s2.size();
        map<char,int> m;
        for(int i=0;i<n2;i++)
        {
            m[s2[i]]++;
        }
        for(int i=0;i<n1;i++)
        {
            if(m[s1[i]]>0)
            {
                m[s1[i]]--;
            }
            else
                return 0;
        }
        return 1;
    }
};
