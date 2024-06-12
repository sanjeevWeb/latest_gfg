//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
  
    // int countofFour(int num){
    //     int cnt = 0;
    //     while(num){
    //         int rem = num%10;
    //         if(rem == 4){
    //             cnt++;
    //             break;
    //         }
    //         num = num/10;
    //     }
    //     return cnt;
    // }
    int countNumberswith4(int n) {
        // code here
        
        int cnt = 0;
        for(int i=4;i<=n;i++){
            int j=i;
            while(j){
            int rem = j%10;
            if(rem == 4){
                cnt++;
                break;
            }
            j = j/10;
        }
        }
        return cnt;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int n;
        scanf("%d", &n);

        Solution obj;
        int res = obj.countNumberswith4(n);

        cout << res << endl;
    }
}

// } Driver Code Ends