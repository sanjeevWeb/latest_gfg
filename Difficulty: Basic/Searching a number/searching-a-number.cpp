//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int search(int k, vector<int>& arr) {
        // code here
        
        int position = -1;
        
        for(int i=0;i<arr.size();i++){
            if(arr[i] == k){
                position = i+1;
                return position;
            }
        }
        
        return position;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after reading t

    Solution obj; // Instantiate the Solution object outside the loop

    while (t--) {
        int k;
        cin >> k;
        cin.ignore(); // Ignore the newline character after reading k

        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> arr;
        int num;
        while (ss >> num) {
            arr.push_back(num);
        }

        int res = obj.search(k, arr);
        cout << res << endl;
    }

    return 0;
}
// } Driver Code Ends