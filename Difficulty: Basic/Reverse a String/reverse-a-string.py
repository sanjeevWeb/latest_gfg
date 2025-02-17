#User function Template for python3

class Solution:
     def reverseString(self, s: str) -> str:
        # code here
        rev_str = ""
        for str in s:
            rev_str = str + rev_str
        return rev_str

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == "__main__":
    t = int(input())
    while (t > 0):
        s = input()
        ob = Solution()
        print(ob.reverseString(s))
        t = t - 1

        print("~")

# } Driver Code Ends