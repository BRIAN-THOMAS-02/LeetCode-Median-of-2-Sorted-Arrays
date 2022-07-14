Median of 2 Sorted Arrays - "https://leetcode.com/problems/median-of-two-sorted-arrays/"

class Solution 
{
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) 
    {
        for (int j=0; j<=nums2.size(); j++)
        {
            nums1.push_back(nums2[j]);
        }
        
        sort(nums1.begin(), nums1.end());
        
        for (int i=1; i<nums1.size(); i++)
        {
            cout<<nums1[i]<<" ";
        }
        
        
        int n = nums1.size()-1;
        float median;
            
        cout<<"\n\nn : "<<n;
        cout<<"\nn % 2 : "<<n%2;
        if (n%2 == 0)
        {
            cout<<"\n\n\tnums1[(n/2)-1] : "<<nums1[(n/2)-1]<<"\tnums1[n/2])/2 : "<<nums1[n/2];
            median = (nums1[(n/2)-1] + nums1[n/2]);
            median =  median/2;
            cout<<"\n\n\tmedian : "<<median;
        }
            
        else
        {
            median = (nums1[(n-1)/2]);
            cout<<"\n\nmedian : "<<median;
        }    
            
    return median;
    }
};
