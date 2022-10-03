# https://practice.geeksforgeeks.org/problems/count-the-numbers2359/1?page=1&company[]=Morgan%20Stanley&sortBy=difficulty

#User function Template for python3

class Solution:
    def countNumbers(self, n):
        arr = [1,2,3,4,5]
        count=0
        
        for i in range(n+1):
            flag = False
            temp = i
            while temp>0:
                if temp%10 not in arr:
                    flag = False
                    break
                else:
                    flag = True
                temp=temp//10
            if flag==True:
                # print(i,end="")
                count+=1
        return count

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    tc = int(input())
    while tc > 0:
        n = int(input())
        ob = Solution()
        ans = ob.countNumbers(n)
        print(ans)
        tc -= 1

# } Driver Code Ends