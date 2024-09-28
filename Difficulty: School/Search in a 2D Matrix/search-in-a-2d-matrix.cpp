//{ Driver Code Starts


#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool searchMatrix(vector<vector<int> >& matrix, int target) {
        // code here
        int n=matrix.size();
        int m =matrix[0].size();
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(matrix[i][j]==target)
                return true;
            }
        }
        return false;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int> > matrix(n, vector<int>(m));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> matrix[i][j];
            }
        }
        int target;
        cin >> target;
        cin.ignore();

        Solution sol;
        cout << (sol.searchMatrix(matrix, target) ? "true" : "false") << endl;
    }

    return 0;
}

// } Driver Code Ends