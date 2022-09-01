class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        /* My intutive approach 
        int n = digits.size();
        int sum = 0;
        for(int i = 0; i < n; i++){
            sum = sum*10 + digits[i]; // sum = 0*10 + 4 = 4 then sum = 4*10 + 3 = 43 then 432 then 4321
        }
        sum++;
        int temp = sum%10; // divide by 10 only when last element in array in ones digit 
        digits[n-1] = temp;
        return digits;*/
        // After looking at a code of discuss for some seconds 
        for(int i = digits.size()-1; i>=0; i--){
            if(digits[i]!=9){
                digits[i]++;
                return digits;
            }else{
                digits[i] = 0;
            }
        }
        digits.insert(digits.begin(),1);
        return digits;
    }
};