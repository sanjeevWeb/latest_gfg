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
        let arr = readLine().split(" ").map((x) => parseInt(x));
        let obj = new Solution();
        let res = obj.minJumps(arr);
        console.log(res);

        console.log("~");
    }
}
// } Driver Code Ends




// User function Template for javascript

/**
 * @param {number[]} arr
 * @return {number}
 */

class Solution {
    minJumps(arr) {
        // code here
        let n = arr.length;

    // Return -1 if not possible to jump
    if (arr[0] === 0)
        return -1;

    // Stores the maximal reachable index
    let maxReach = 0;

    // stores the number of steps we can still take
    let currReach = 0;

    // stores the number of jumps needed 
    // to reach current reachable index
    let jump = 0;

    // Start traversing array
    for (let i = 0; i < n; i++) {
        maxReach = Math.max(maxReach, i + arr[i]);
        
        

        // If we can reach last index by jumping 
        // from current position return Jump + 1
        if (maxReach >= n - 1) {
            return jump + 1;
        }

        // Increment the Jump as we reached the 
        // Current Reachable index
        if (i === currReach) {

            // If Max reach is same as current index
            // then we can not jump further
            if (i === maxReach) {
                return -1;
            }

            // If Max reach > current index then increment 
            // jump and update current reachable index 
            else {
                jump++;
                currReach = maxReach;
            }
        }
    }

    return -1;
    }
}