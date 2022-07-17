class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        /*int n=arr.size(),start=0, end=n-1;
        while(start<=end){
           int mid=start+(end-start)/2;
           if((mid-1)<0 && arr[mid] < arr[mid+1])
               start=mid+1;
           if((mid+1)==n && arr[mid] > arr[mid-1])
               end=mid-1;
           if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
               return mid;
           if(arr[mid]<arr[mid+1] && arr[mid] > arr[mid-1])
               start=mid+1;
       }
        return 0; */
        
        int start=0;
        int end=arr.size()-1;
        while(start<end){
            int mid=start+(end-start)/2;
            if(arr[mid+1]>arr[mid]) 
                start=mid+1;
            else end=mid;
        }
        return start;
    }
};