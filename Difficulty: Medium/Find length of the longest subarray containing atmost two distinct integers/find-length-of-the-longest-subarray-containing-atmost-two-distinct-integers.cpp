//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int totalElements(vector<int> &arr) {
        // code here
        unordered_map <int,int> elementCount ;
        int left =0; int maxLength =0;
        for(int right =0;right<arr.size();right++){
            elementCount[arr[right]]++;
            while(elementCount.size() > 2){
                elementCount[arr[left]]--;
                if(elementCount[arr[left]]==0){
                    elementCount.erase(arr[left]);
                }
                left++;
            }
            maxLength = max(maxLength, right - left + 1);
        }
        return maxLength;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To ignore any newline character left in the buffer
    while (t--) {
        string line;
        getline(cin, line); // Read the entire line of input
        stringstream ss(line);
        vector<int> arr;
        int num;

        // Parse the input line into integers and add to the vector
        while (ss >> num) {
            arr.push_back(num);
        }
        Solution ob;
        int ans = ob.totalElements(arr);

        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends