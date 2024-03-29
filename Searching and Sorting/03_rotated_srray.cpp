class Solution {
public:
    int search(vector<int>& nums, int target) {
         int n = nums.size();
        int s = 0 , e = n-1;

        while(s <= e){
            int mid = s +(e-s)/2;
            if(nums[mid] == target) return mid;
            
            //if left half is sorted 
            if(nums[s] <= nums[mid]){
                // check if target lies in left side
                if(target <= nums[mid] && target >= nums[s]) e = mid-1;
                else s = mid + 1;
            }    
            //if right side is sorted 
            else{
                // check if target lies in right side
                if(target >= nums[mid] && target <= nums[e]) s = mid+1;
                else e = mid-1;
            }
        }
        return -1;
    }
};