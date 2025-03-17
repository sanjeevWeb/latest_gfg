//{ Driver Code Starts
// Initial Template for javascript

"use strict";

process.stdin.resume();
process.stdin.setEncoding("utf-8");

let inputString = "";
let currentLine = 0;

process.stdin.on("data", (inputStdin) => { inputString += inputStdin; });

process.stdin.on("end", (_) => {
    inputString =
        inputString.trim().split("\n").map((string) => { return string.trim(); });

    main();
});

function readLine() { return inputString[currentLine++]; }

/* Function to print an array */
function printArray(arr, size) {
    let i;
    let s = "";
    for (i = 0; i < size; i++) {
        s += arr[i] + " ";
    }
    console.log(s);
}

function main() {
    let t = parseInt(readLine());
    let i = 0;
    for (; i < t; i++) {

        let inputArr = readLine().split(" ").map((x) => parseInt(x));
        let n = inputArr.length;
        let arr = new Array(n);
        for (let j = 0; j < n; j++) arr[j] = inputArr[j];
        let sum = parseInt(readLine());
        let obj = new Solution();
        let res = obj.isSubsetSum(arr, sum);
        console.log(res);
        console.log("~");
    }
}
// } Driver Code Ends


/**
 * @param {number[]} arr
 * @param {number} target
 * @return {boolean}
 */

class Solution {
    
    isSubsetSum(arr, sum) {
        // code here
       const n = arr.length;

    // Create a 2D array for storing results
    // of subproblems
    const dp = Array.from(Array(n + 1), () => Array(sum + 1).fill(false));

    // If sum is 0, then answer is
    // true (empty subset)
    for (let i = 0; i <= n; i++) {
        dp[i][0] = true;
    }

    // Fill the dp table in bottom-up manner
    for (let i = 1; i <= n; i++) {
        for (let j = 1; j <= sum; j++) {
            if (j < arr[i - 1]) {
            
                // Exclude the current element
                dp[i][j] = dp[i - 1][j];
            } else {
            
                // Include or exclude
                dp[i][j] = dp[i - 1][j] 
                || dp[i - 1][j - arr[i - 1]];
            }
        }
    }

    return dp[n][sum];
    }
}