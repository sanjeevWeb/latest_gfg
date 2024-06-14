//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int n) {
        // code here
        int sum_of_cubes = 0;
        int temp = n;
        while(n){
            int rem = n%10;
            sum_of_cubes += (rem * rem * rem);
            n = n/10;
        }
        return sum_of_cubes == temp ? "true" : "false";
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}

// } Driver Code Ends