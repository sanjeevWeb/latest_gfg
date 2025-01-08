//{ Driver Code Starts
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 1000002
int arr[MAX_SIZE];


// } Driver Code Ends
// User function Template for C
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
          
            // Swap if the element found is
          	// greater than the next element
            if (arr[j] > arr[j + 1]) {
                int temp= arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
                // swap(arr[j],arr[j+1]);
                
        }
    }
}

int countTriangles(int arr[], int n) {
    // code here
        bubbleSort(arr,n);;
        int ans=0;
        for(int k=n-1;k>=0;k--){
            int i=0, j=k-1;
            while(i<j){
                if(arr[i]+arr[j]>arr[k]){
                    ans+=j-i;
                    j--;
                }
                else{
                    i++;
                }
            }
        }
        return ans;
}



//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d", &t); // Read number of test cases

    while (t--) {
        int n = 0, input;

        // Reading input until a newline is encountered
        while (scanf("%d", &input) == 1) {
            arr[n++] = input;
            // Break when a newline is encountered
            if (getchar() == '\n')
                break;
        }

        // Print the result of the function call
        printf("%d\n~\n", countTriangles(arr, n));
    }

    return 0;
}

// } Driver Code Ends