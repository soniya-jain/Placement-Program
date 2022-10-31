//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    long long sumBetweenTwoKth(long long arr[], int N, int k1,int k2){
        long long first = kth(arr,N,k1);
        long long second = kth(arr,N,k2);
        long long ans = 0;
        for(int i = 0; i < N; i++){
            if(arr[i] > first && arr[i] < second){
                ans += arr[i];
            }
        }
       return ans; 
    }
    long long kth(long long arr[], long long N,long long k){
        priority_queue<int>maxh;
        for(int i = 0; i < N; i++){
            maxh.push(arr[i]);
            if(maxh.size() > k){
                maxh.pop();
            }
        }
        return maxh.top();
    }
 
};

//{ Driver Code Starts.
int main()
 {
    long long t;
    cin>>t;
    while(t--)
    {
        long long n, k;
        cin>>n;
        long long a[n+5];
        for(int i =0;i<n;i++)
            cin >> a[i];
        
        long long k1, k2;
        cin >> k1 >> k2;
        Solution ob;
        cout << ob.sumBetweenTwoKth(a, n, k1, k2) << endl;
        
    }
	return 0;
}

// } Driver Code Ends