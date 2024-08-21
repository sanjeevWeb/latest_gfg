//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
  public:
    long long int findMaxOddSubarraySum(long long int arr[], long long int n)
    {
        //code here.
        // Here min_odd is the minimum odd number (in
    // absolute terms). Initializing with max value
    // of int .
    int min_odd = INT_MAX;
 
    // To check if there is al-least one odd number.
    bool isOdd = false;
 
    int sum = 0;  // To store sum of all positive elements
    for (int i=0 ; i<n ; i++)
    {
        // Adding positive number would increase
        // the sum.
        if (arr[i] > 0)
            sum = sum + arr[i];
 
        // To find the minimum odd number(absolute)
        // in the array.
        if (arr[i]%2 != 0)
        {
            isOdd = true;
            if (min_odd> abs(arr[i]))
                min_odd = abs(arr[i]);
        }
    }
 
    // If there was no odd number
    if (isOdd == false)
       return -1;
 
    // Now, sum will be either odd or even.
    // If even, changing it to odd. As, even - odd = odd.
    // since m is the minimum odd number(absolute).
    if (sum%2 == 0)
        sum = sum - min_odd;
 
    return sum;
    }
 
};

//{ Driver Code Starts.


int main()
{   
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        long long int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;    
        cout <<ob.findMaxOddSubarraySum(arr, n);
        cout<<endl;
    }

    
    return 0;
}
// } Driver Code Ends