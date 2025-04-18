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
        let str = readLine();
        let obj = new Solution();
        console.log(obj.ReverseSort(str));

        console.log("~");
    }
}

// } Driver Code Ends


// User function Template for javascript
/**
 * @param {string} s
 * @returns {string}
 */

class Solution {
    // Function to Reverse Sort the given string.
    ReverseSort(s) {
        // your code here
        return s.split('').sort().reverse().join('')
    }
}