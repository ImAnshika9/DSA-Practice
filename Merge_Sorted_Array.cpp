class Solution {
private:
    void canbeswap(vector<int>& nums1, vector<int>& nums2,int index1,int index2)
    {
        if(nums1[index1] > nums2[index2])
        {
            swap(nums1[index1],nums2[index2]);
        }
    }
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int length=(n+m);
        int gap=(length + 1) / 2;
        while(gap > 0)
        {
            int left=0;
            int right=gap+left;
            while(right < length)
            {
                //arr1 and arr2
                if(left < m && right >= m)
                {
                    canbeswap(nums1,nums2,left,right-m);
                }
                //arr2 and arr2
                else if(left >= m)
                {
                    canbeswap(nums2,nums2,left-m,right-m);
                }
                else
                //arr1 and arr1
                {
                    canbeswap(nums1,nums1,left,right);
                }
                 left++;
                 right++;
            }
            if(gap == 1)
            break;
            gap=(gap+1)/2;
           }
           for(int i = 0; i < n; i++) {
              nums1[m + i] = nums2[i];

        }
    }
};
