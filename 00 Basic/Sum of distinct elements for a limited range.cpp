// https://practice.geeksforgeeks.org/problems/sum-of-distinct-elements-15115/1?page=1&category[]=Arrays&sortBy=accuracy

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	
	public:
	int sumOfDistinct(int arr[], int n) 
	{ 
	    vector<int> temp(n+1,0);
	    int sum = 0;
	    for(int i=0;i<n;i++){
	        if(temp[arr[i]]==0){
	            sum += arr[i];
	            temp[arr[i]]++;
	        }
	    }
	    return sum;
	} 
		 

};

//{ Driver Code Starts.

int main() 
{
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
	    cin >> n;
	    int a[n];
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	    }
	    

       

        Solution ob;
        cout << ob.sumOfDistinct(a,n);
	   
        
	    cout << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends