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

function main() {
    let t = parseInt(readLine());
    let i = 0;

    for (; i < t; i++) {
        // let N = parseInt(readLine());
        let arr = readLine().trim().split(" ").map((x) => parseInt(x));
        let k = parseInt(readLine());
        let obj = new Solution();
        let res = obj.kthSmallest(arr, k);
        console.log(res);

        console.log("~");
    }
}

// } Driver Code Ends


// User function Template for javascript

/**
 * @param {number[]} arr
 * @param {number} k
 * @return {number}
 */

class Solution {
    kthSmallest(arr, k) {
        // code here
        let max_element = arr[0];
        let n = arr.length;
        for (let i = 1; i < n; i++) {
            if (arr[i] > max_element) {
                max_element = arr[i];
            }
        }

        // Create an array to store the frequency of each element in the input array
        let freq = new Array(max_element + 1).fill(0);
        for (let i = 0; i < n; i++) {
            freq[arr[i]]++;
        }

        // Keep track of the cumulative frequency of elements in the input array
        let count = 0;
        for (let i = 0; i <= max_element; i++) {
            if (freq[i] != 0) {
                count += freq[i];
                if (count >= k) {
                    // If we have seen k or more elements, return the current element
                    return i;
                }
            }
        }
        return -1;
    }
}