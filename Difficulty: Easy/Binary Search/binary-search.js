//{ Driver Code Starts
// Initial Template for javascript
// Position this line where user code will be pasted.
'use strict';

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', inputStdin => { inputString += inputStdin; });

process.stdin.on('end', _ => {
    inputString = inputString.trim().split('\n').map(string => string.trim());
    main();
});

function readLine() { return inputString[currentLine++]; }

function main() {
    let t = parseInt(readLine());
    for (let i = 0; i < t; i++) {
        let k = parseInt(readLine());
        let arr = readLine().split(' ').map(Number);
        let obj = new Solution();
        let res = obj.binarysearch(arr, k);
        console.log(res);
        console.log("~");
    }
}
// } Driver Code Ends




// User function Template for javascript

class Solution {
    binarysearch(arr, k) {
        // Code Here
        return arr.indexOf(k)
    }
}