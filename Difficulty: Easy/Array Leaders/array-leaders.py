class Solution:
    def leaders(self, nums):
        # code here
        ans=[nums[-1]]
        mx_sofr=nums[-1]
        for i in range(len(nums)-2,-1,-1):
            if nums[i]>=mx_sofr:
                ans.append(nums[i])
                mx_sofr=nums[i]
        return ans[::-1]


#{ 
 # Driver Code Starts
t = int(input())  # number of test cases
for _ in range(t):
    arr = list(map(int, input().split()))  # input array
    s = Solution().leaders(arr)  # find the leaders

    # Output formatting
    if s:
        print(" ".join(map(str, s)))  # Print leaders in the required order
    else:
        print("[]")  # Print empty list if no leaders are found

    print("~")

# } Driver Code Ends