// https://practice.geeksforgeeks.org/problems/odd-to-even0537/1?page=1&company[]=Morgan%20Stanley&sortBy=difficulty

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    string makeEven(string s)
    {
        int n = s.size();
        int last = n-1;
        
        for(int i=0;i<n;i++){
            if(s[i]%2==0 and s[i]<s[n-1]){
                swap(s[i], s[n-1]);
                return s;
            }
            else if(s[i]%2==0){
                last = i;
            }
        }
        swap(s[last], s[n-1]);
        return s;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--){
	    string str;
	    cin>>str;
	    Solution ob;
	    cout<<ob.makeEven(str)<<endl;
	}
	return 0;
}

// } Driver Code Ends