class Solution {
public:
    bool isvowel(char c)
    {
        c=tolower(c);
        return
         (c=='a' ||  c=='e'||  c=='i'||  c=='o'||  c=='u');
    }
    string sortVowels(string s) {
        int n=s.size();
        vector<char>ans;
        for(int i=0;i<n;i++)
        {
            if(isvowel(s[i]))
            {
                ans.push_back(s[i]);
            }
        }
        sort(ans.begin(),ans.end());
        int i=0;
        for(int k=0;k<n;k++)
        {
            if(isvowel(s[k]))
            {
                s[k]=ans[i];
                i++;
            }
        }
        return s;
    }
};
