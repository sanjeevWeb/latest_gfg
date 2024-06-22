//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    long long ExtractNumber(string sentence) {

        // code here
        long long largest_num = -1;
        long long current = 0;
        bool flag = false;
        for(int i=0;i<sentence.size();i++){
            if(sentence[i] >= '0' and sentence[i] <= '9'){
                    current = current*10 + (sentence[i] - '0');
                    if(sentence[i] == '9') flag = true;
                }
                else if(sentence[i] == ' '){
                    if(!flag){
                        largest_num = max(largest_num,current);
                    
                    }
                    flag = false;
                    current = 0;
                }
        }
        if(!flag) largest_num = max(largest_num,current);
        return largest_num == 0 ? -1 : largest_num;
    }
};

//{ Driver Code Starts.
int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--) {
        string s;
        getline(cin, s);

        Solution ob;
        cout << ob.ExtractNumber(s) << "\n";
    }

    return 0;
}

// } Driver Code Ends