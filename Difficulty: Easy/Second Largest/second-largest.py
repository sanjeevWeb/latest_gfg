class Solution:
    def getSecondLargest(self, arr):
        # Code Here
        arr.sort()
        for i in range(len(arr)-1,-1, -1):
            if arr[i]!= arr[i-1]:
                return arr[i-1]
        return -1




#{ 
 # Driver Code Starts
# Initial Template for Python 3

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        arr = list(map(int, input().split()))
        ob = Solution()
        ans = ob.getSecondLargest(arr)
        print(ans)
        print("~")
# } Driver Code Ends