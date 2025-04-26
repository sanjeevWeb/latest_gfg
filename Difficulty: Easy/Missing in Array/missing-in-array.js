//{ Driver Code Starts
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
        let input_ar1 = readLine().split(' ').map(x => parseInt(x));

        let arr = input_ar1;

        let obj = new Solution();
        console.log(obj.missingNum(arr));
        console.log("~");
    }
}
// } Driver Code Ends


/**
 * @param {number[]} arr
 * @returns {number}
 */
class Solution {
    missingNum(arr) {
        // code here
        const sum = arr.reduce((acc,num) => acc+num, 0)
        
        let n = arr.length;
        let total_sum = ((n+1)*(n+2))/2
        
        return total_sum - sum;
    }
}