// https://practice.geeksforgeeks.org/problems/implement-atoi/1?page=1&company[]=Morgan%20Stanley&sortBy=submissions

//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string str) {
        int num = 0;
        int sign = 1;
        int i=0;
        
        if(str[i] == '-'){
            sign = -1;
            i++;
        }
        
        while(str[i]){
            if(!(str[i]-'0' >= 0 and str[i]-'0' <= 9)){
                return -1;
            }
            num = num*10 + str[i]-'0';  
            i++;
        }
        return num*sign;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}
// } Driver Code Ends