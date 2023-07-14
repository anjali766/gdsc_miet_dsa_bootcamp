class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = -1,last=-1;
        int i=0,j=nums.size()-1;

        //for first
        while(i<=j){
            int mid=(i+j)/2;
            if(nums[mid] == target){
                first = mid;
                j=mid-1;
            }
            else if(nums[mid]> target)
            j = mid-1;
            else{
                i=mid+1;
            }

        }
        //for last
         i=0;
         j=nums.size()-1;
         while(i<=j){
            int mid=(i+j)/2;
            if(nums[mid] == target){
                last = mid;
                i=mid+1;
            }
            else if(nums[mid]> target){
                j = mid-1;
            }
            else{
                i = mid+1;
            }
        }
        return {first,last};
    }
};