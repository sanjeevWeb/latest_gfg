#User function Template for python3


class Solution:

    def kthSmallest(self, arr,k):
        c=0
        for i in range(len(arr)):
            for j in range(i,len(arr)):
                if arr[j]<arr[i]:
                    temp=arr[i]
                    arr[i]=arr[j]
                    arr[j]=temp
            c+=1
            if c==k:
                return arr[k-1]
        



#{ 
 # Driver Code Starts
#Initial Template for Python 3

#contributed by RavinderSinghPB
if __name__ == '__main__':
    import random
    t = int(input())
    for tcs in range(t):
        # n = int(input())
        arr = list(map(int, input().strip().split()))
        k = int(input())
        ob = Solution()
        print(ob.kthSmallest(arr, k))
        print("~")
# } Driver Code Ends