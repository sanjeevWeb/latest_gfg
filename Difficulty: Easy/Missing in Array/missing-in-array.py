#User function Template for python3
class Solution:
    def missingNumber(self, arr):
        # code here
        n = len(arr)+1
        s = sum(arr)
        m= (n*(n+1))//2 - s
        if(len(arr)>1):
            return m
        elif(len(arr) == 1 and arr[0] == 1):
            return 2
        else:
            return 1


#{ 
 # Driver Code Starts
#Initial Template for Python 3

t = int(input())
for _ in range(0, t):
    arr = list(map(int, input().split()))
    s = Solution().missingNumber(arr)
    print(s)

    print("~")
# } Driver Code Ends