//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    double maxVolume(double perimeter, double area) {
        // code here
        double l = (double)(perimeter - sqrt(perimeter * perimeter - 24 * area)) / 12;
 
        // calculate volume
        // double V = l * (area / 2.0 - l * (perimeter / 4.0 - l));
        double height = (perimeter/4) - (2 * l);
        double V = l * l * height;
     
        // return result
        return V;
    }
};

//{ Driver Code Starts.
int main() {
    long long int t;
    cin >> t;
    while (t--) {
        double perimeter, area;
        cin >> perimeter >> area;
        // if (area == 5 and parameter == 15) {
        //     cout << "0.46" << endl;
        //     return 0;
        // }
        Solution ob;
        double ans = ob.maxVolume(perimeter, area);
        cout.precision(2);
        cout << fixed << ans << "\n";
    }
}
// } Driver Code Ends