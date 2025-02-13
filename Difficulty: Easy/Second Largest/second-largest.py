#User function Template for python3
class Solution:
    def getSecondLargest(self, arr):
        # Code Here
        max = 0
        smax = 0
        for num in arr:
            if num > max:
                if max > smax:
                    smax = max
                max = num
            elif num > smax and num < max:
                smax = num
        if smax == 0:
            smax = -1
        return smax

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