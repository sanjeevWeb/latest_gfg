//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

// Complete this function
class Solution {
  public:
    void reverseArray(vector<int>& arr) {

        // Your code here
        stack<int>s;
        int n = arr.size();
        for(int i =0; i < n; i++)
            s.push(arr[i]);
            
        for(int i =0; i < n; i++)
        {
            arr[i] = s.top();
            s.pop();
        }
        // Reverse the array
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> arr;
        int num;
        while (ss >> num) {
            arr.push_back(num);
        }
        Solution obj;
        obj.reverseArray(arr);

        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }

        cout << endl;
        cout << "~\n";
    }
    return 0;
}
// } Driver Code Ends