//{ Driver Code Starts
// Initial Template for javascript
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
    let t = parseInt(readLine());
    let i = 0;
    for (; i < t; i++) {
        let a = parseInt(readLine());
        let b = parseInt(readLine());
        let obj = new Solution();
        obj.swap(a, b);

        console.log("~");
    }
}
// } Driver Code Ends


// User function Template for javascript
/**
 * @param {number} a
 * @param {number} b
 * @returns {void}
 */

class Solution {
    // Function to calculate the utility of two numbers.
    swap(a, b) {
        // your code here
        let temp;
        temp = a;
        a = b;
        b = temp;
        console.log(a, b);
    }
}