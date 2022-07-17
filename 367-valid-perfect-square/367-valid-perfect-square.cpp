class Solution {
public:
    bool isPerfectSquare(int num) {
        /* make an array of size num from 1 to num in sorted order
        int arr[num];
        for(int i=1; i<=num ; i++){
            arr[i]=i;
        }
        int start=1;
        int end=num;
        while(start<end){
            int mid=start+(end-start)/2;
            int temp=arr[mid]*arr[mid];
            if(temp==num) return true;
            else if(temp>num) end=mid-1;
            else start=mid+1;
        }
        return false; */
        int i=1;
        while(num>0){
            num=num-i;
            i=i+2;
            if(!num) return true;
        }
        return false;
    }
};