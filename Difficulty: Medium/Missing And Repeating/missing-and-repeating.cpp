//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        int n = arr.size();
        unordered_map<int,int> umap;
        vector<int> output;
        for(int i=0;i<n;i++){
            umap[arr[i]]++;
        }
        
        for(auto itr : umap){
            if(itr.second > 1){
                output.push_back(itr.first);
                break;
            }
        }
        
        for(int i=1;i<=n;i++){
            if(umap.find(i) == umap.end()){
                output.push_back(i);
                break;
            }
        }
        return output;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends