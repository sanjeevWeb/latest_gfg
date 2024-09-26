//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution {
  public:
    int minJumps(vector<int>& arr) {
        // Your code here
        int n = arr.size();
        int jumps =0;
        int currmax =0;
        int maxpos =0;
        for(int i=0;i<n;i++){
            if(i > maxpos){
                return -1;
                
            }
            if(maxpos >= n-1){
                return jumps;
            }
            if(currmax < i+arr[i]){
                currmax  = i+arr[i];
            }
            if(i == maxpos){
                maxpos = currmax;
                jumps++;
            }
        }
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n, i, j;
        vector<int> arr;
        string ip;
        int number;
        getline(cin, ip);
        stringstream ss(ip);

        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        cout << obj.minJumps(arr) << endl;
    }
    return 0;
}

// } Driver Code Ends