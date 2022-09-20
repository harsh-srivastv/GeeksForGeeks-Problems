# https://practice.geeksforgeeks.org/problems/check-if-two-arrays-are-equal-or-not3847/1?page=1&difficulty[]=-1&curated[]=1&sortBy=submissions

#User function Template for python3
from collections import Counter
class Solution:
    #Function to check if two arrays are equal or not.
    def check(self,A,B,N):
        freq1 = Counter(A)
        freq2 = Counter(B)
        
        for key, values in freq1.items():
            if(freq1[key] != freq2[key]):
                return False
        return True

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__=='__main__':
    t=int(input())
    for tc in range(t):
        
        N=int(input())
        
        A = [int(x) for x in input().replace('  ',' ').strip().split(' ')]
        B = [int(x) for x in input().replace('  ',' ').strip().split(' ')]
        ob=Solution()
        if ob.check(A,B,N):
            print(1)
        else:
            print(0)
        
                
                
# } Driver Code Ends