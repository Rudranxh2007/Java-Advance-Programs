class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int e=nums.size()-1;
        int s=0;
        int mid=s+(e-s)/2;
        int ans;
        while(s<e){
            if(nums[mid]<nums[mid+1]){
                s=mid+1;
            }
            else{
                ans=mid;
                e=mid;
            }
            mid=s+(e-s)/2;
        }
        return e;
    }
};
