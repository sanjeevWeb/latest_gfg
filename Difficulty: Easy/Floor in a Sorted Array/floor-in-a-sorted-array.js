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
    let tc = parseInt(readLine());
    while (tc > 0) {
        let arr = readLine().split(' ').map(Number);
        let k = parseInt(readLine());

        let obj = new Solution();
        let res = obj.findFloor(arr, k);

        console.log(res); // Print the array as a space-separated string
        console.log("~");
        tc--;
    }
}

// } Driver Code Ends


// User function Template for javascript

/**
 * @param {number[]} arr
 * @param {number} k
 * @returns {number}
 */

class Solution {

    findFloor(arr, k) {
        // your code here
        for(let i=0;i<arr.length;i++){
            if(i>=0 && arr[i] >= k){
                if(arr[i] == k) return i;
                return i-1;
            }
        }
        return -1;
    }
}