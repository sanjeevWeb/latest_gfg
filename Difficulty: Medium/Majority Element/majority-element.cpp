//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int majorityElement(vector<int>& a) {

        // your code here
         int candidate = -1; // Initialize candidate as -1
    int count = 0;
    int N = a.size();

    // Find the potential candidate for the majority element
    for (int i = 0; i < N; i++) {
        if (count == 0) {
            candidate = a[i];
            count = 1;
        } else {
            if (a[i] == candidate) {
                count++;
            } else {
                count--;
            }
        }
    }

    // Check if the candidate is the actual majority element
    count = 0;
    for (int i = 0; i < N; i++) {
        if (a[i] == candidate) {
            count++;
        }
    }

    if (count > N / 2) {
        return candidate;
    } else {
        return -1; // No majority element found
    }
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n;
        vector<int> a, b;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);

        Solution obj;
        cout << obj.majorityElement(a) << endl;
    }

    return 0;
}

// } Driver Code Ends