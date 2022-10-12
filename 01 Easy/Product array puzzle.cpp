// https://practice.geeksforgeeks.org/problems/product-array-puzzle4525/1?page=2&company[]=Morgan%20Stanley&sortBy=submissions

//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
        vector<long long int> P;
        long long int product = 1;
        int zero = 0;
        for(int i=0;i<n;i++){
            if(nums[i])
                product *= nums[i];
            else
                zero++;
        }
        if(zero == 0){
            for(int i=0;i<n;i++){
                P.push_back(product/nums[i]);
            }
        }
        
        else if(zero == 1){
            for(int i=0; i<n; i++)
            {
                if(nums[i]){
                    P.push_back(0);
                }
                else{
                    P.push_back(product);
                }
            }   
        }
        else{
            for(int i=0;i<n;i++){
                P.push_back(0);
            }
        }
        
        
        return P;
    }
};


//{ Driver Code Starts.
int main()
 {
    int t;  // number of test cases
    cin>>t;
    while(t--)
    {
        int n;  // size of the array
        cin>>n;
        vector<long long int> arr(n),vec(n);
        
        for(int i=0;i<n;i++)    // input the array
        {
            cin>>arr[i];
        }
        Solution obj;
        vec = obj.productExceptSelf(arr,n);   // function call
        
        for(int i=0;i<n;i++)    // print the output
        {
            cout << vec[i] << " ";
        }
        cout<<endl;
    }
	return 0;
}
// } Driver Code Ends