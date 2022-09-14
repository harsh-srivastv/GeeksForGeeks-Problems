# https://practice.geeksforgeeks.org/problems/anagram-1587115620/1?page=1&curated[]=8&sortBy=submissions

#User function Template for python3
from collections import Counter

class Solution:
    
    #Function is to check whether two strings are anagram of each other or not.
    def isAnagram(self,a,b):
        freq1 = Counter(a)
        freq2 = Counter(b)
        
        if freq1 != freq2:
            return 0
        return 1


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__=='__main__':
    t = int(input())
    for i in range(t):
        a,b=map(str,input().strip().split())
        if(Solution().isAnagram(a,b)):
            print("YES")
        else:
            print("NO") 
# } Driver Code Ends