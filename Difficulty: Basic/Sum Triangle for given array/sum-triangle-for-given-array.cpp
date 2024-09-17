//{ Driver Code Starts
// C++ program to print sum triangle for a given array
#include <bits/stdc++.h>
using namespace std;

vector<long long> getTriangle(int arr[], int n);

// Driver Program
int main()
{
    int t ;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        cin>>a[i];
        
        vector<long long> Triangle = getTriangle(a, n);
        
        for(auto it: Triangle)
            cout<<it<<" ";
        cout<<endl;
    }
    return 0;
}

// } Driver Code Ends




vector<long long> getTriangle(int arr[], int n)
{
  vector<long long> lastRow(arr, arr + n);
    vector<vector<long long>> triangle;

    // Initialize the triangle with the last row
    triangle.push_back(lastRow);

    // Build the triangle from bottom to top
    while (triangle.back().size() > 1) {
        vector<long long> currentRow;
        vector<long long>& lastRow = triangle.back();
        
        // Compute the current row from the last row
        for (size_t i = 0; i < lastRow.size() - 1; ++i) {
            currentRow.push_back(lastRow[i] + lastRow[i + 1]);
        }
        
        // Add the current row to the triangle
        triangle.push_back(currentRow);
    }
    
    // Flatten the triangle into a single vector
    vector<long long> result;
    for (auto it = triangle.rbegin(); it != triangle.rend(); ++it) {
        result.insert(result.end(), it->begin(), it->end());
    }
    
    return result;
}