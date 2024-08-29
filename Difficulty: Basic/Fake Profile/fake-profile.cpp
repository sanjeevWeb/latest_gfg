//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string solve(string a);

int main() {
    int t;
    cin >> t;
    while (t--) {
        string a;
        cin >> a;
        cout << solve(a) << endl;
    }
}

// } Driver Code Ends


string solve(string a) {
    // code here
    string str = "";
    for(char ch : a){
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
            continue;
        }
        else{
            str += ch;
        }
    }
    
    set<char>st;
    
    for(char ch : str){
        st.insert(ch);
    }
    string newStr = "";
    for(auto it : st){
        newStr += it;
    }
    
    if(int(newStr.size())%2 == 0){
        return "SHE!";
    }
    else{
        return "HE!";
    }
}