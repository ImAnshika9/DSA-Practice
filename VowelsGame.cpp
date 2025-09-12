class Solution {
public:
    bool isvowel(char c)
    {
        c= tolower(c);
        return c=='a'|| c=='e' || c=='i' || c=='o' || c=='u';
    }
    bool doesAliceWin(string s) {
         int count=0;
        int n=s.size();
        for(char c:s)
        {
            if(isvowel(c))
            count++;
        }
        if(count > 0)
        return true;
        else
        return false;
    }
};
