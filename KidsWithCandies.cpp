class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n=candies.size();
        int maxi=*max_element(candies.begin(),candies.end());
        vector<bool>res;
        for(int j=0;j<n;j++)
        {
            if(candies[j] + extraCandies >= maxi)
            res.push_back(true);
            else 
            res.push_back(false);
        }
        return res;
    }
};
