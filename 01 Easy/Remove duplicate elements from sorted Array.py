# https://practice.geeksforgeeks.org/problems/remove-duplicate-elements-from-sorted-array/1?page=1&company[]=Morgan%20Stanley&sortBy=difficulty

#User function template for Python


def remove_duplicate(self, a, n):
    while j<n:
        if a[i]==a[j]:
            j+=1
        else:
            i+=1
            a[i] = a[j]
            j+=1
    return i+1
		    

#{ 
 # Driver Code Starts
#Initial template for Python

if __name__=='__main__':
    t = int(input())
    for i in range(t):
        N = int(input())
        A = list(map(int, input().strip().split()))
        n = remove_duplicate(A,N)
        for i in range(n):
            print(A[i], end=" ")
        print()


# } Driver Code Ends