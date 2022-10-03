class Solution {
public:
    /*int binarySearch(vector<int>& nums, int low, int high, int target){
        
        while(low<high){
            int  mid = low + (high-low)/2;
            if(nums[mid] == target) return nums[mid];
            else if(nums[mid] > target) high = mid-1;
            else low = mid+1;
        }
        return -1;
    }*/
    int search(vector<int>& nums, int target){
        /*int low = 0;
        int high = nums.size()-1;
        // Now I have to write the code for finding the index
        while(low < high)
            int mid = (low + high)/2;
            if(nums[mid] < nums[mid-1] && nums[mid] < nums[mid+1])
                index = mid;
            else if((nums[mid-1] < nums[mid]) && (nums[mid] < nums[mid+1]))
                low = mid + 1;
            else
                high = mid - 1;
        }
        binarySearch(nums,low,index,target);
        binarySearch(nums,index+1,high,target);
        */
        int low = 0;
        int high = nums.size()-1;
        int mid;
        while(low <= high){
            mid = (low + high) >> 1;
            if(nums[mid] == target)
                return mid;
            if(nums[low] <= nums[mid]){
                if(target >= nums[low] && target <= nums[mid]){
                    high = mid-1;
                }
                else{
                    low = mid + 1;
                }
            }
            else{
                if(target >= nums[mid] && target <= nums[high]){
                    low = mid + 1;
                }
                else
                    high = mid - 1; 
            }
        }
        return -1;
    }
};