//{ Driver Code Starts
'use strict';

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', inputStdin => { inputString += inputStdin; });

process.stdin.on('end', _ => {
    inputString =
        inputString.trim().split('\n').map(string => { return string.trim(); });
    main();
});

function readLine() { return inputString[currentLine++]; }

function main() {
    let t = parseInt(readLine()); // Number of test cases
    for (let i = 0; i < t; i++) {
        let arr = readLine().split(' ').map(x => parseInt(x)); // Input array
        let obj = new Solution();
        const result = obj.nextLargerElement(arr);

        // Print the result in the required format
        if (result.length > 0) {
            console.log(result.join(' ')); // Print the next larger elements
        } else {
            console.log("[]"); // Print empty list if no next larger element
        }
        console.log("~");
    }
}

// } Driver Code Ends


// User function Template for javascript

/**
 * @param {int[]} arr
 * @returns {int[]}
 */
class Solution {
    // Function to find the next greater element for each element of the array.
    nextLargerElement(arr) {
        // code here
        let n = arr.length;
        let res = new Array(n).fill(-1);
        let stk = [];
    
        // Traverse the array from right to left
        for (let i = n - 1; i >= 0; i--) {
    
            // Pop elements from the stack that are less
            // than or equal to the current element
            while (stk.length > 0
                   && stk[stk.length - 1] <= arr[i]) {
    
                stk.pop();
            }
    
            // If the stack is not empty, the top element
            // is the next greater element
            if (stk.length > 0) {
                res[i] = stk[stk.length - 1];
            }
    
            // Push the current element onto the stack
            stk.push(arr[i]);
        }
    
        return res;
    }
}