
class Solution:
    def findDuplicates(self, arr):
        # code here
        hash_map = {}
        repeatations = []
        for i in arr:
            if i not in hash_map:
                hash_map[i] = 1
            else:
                if hash_map[i] ==1 :
                    repeatations.append(i)
                hash_map[i] += 1
        return repeatations



#{ 
 # Driver Code Starts
# Initial Template for Python 3

t = int(input())  # number of test cases
for _ in range(t):
    arr = list(map(int, input().split()))  # input array
    s = Solution().findDuplicates(arr)  # find the duplicates
    # Sort the result in ascending order
    s.sort()
    # Output formatting
    if s:
        print(" ".join(map(str, s)))  # Print duplicates in ascending order
    else:
        print("[]")  # Print empty list if no duplicates are found
    print("~")

# } Driver Code Ends