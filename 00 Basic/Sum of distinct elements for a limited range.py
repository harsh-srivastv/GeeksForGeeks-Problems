# https://practice.geeksforgeeks.org/problems/sum-of-distinct-elements-15115/1?page=1&category[]=Arrays&sortBy=accuracy

class Solution:
    def sumOfDistinct(self, arr, n):
        temp = set(arr)
        return sum(temp)


#{ 
 # Driver Code Starts
if __name__ == '__main__': 
    
    t=int(input())
    for _ in range(0,t):
        n=int(input())
        a=list(map(int,input().split()))
        ob = Solution()
        ans=ob.sumOfDistinct(a,n)
        print(ans)
            
# } Driver Code Ends