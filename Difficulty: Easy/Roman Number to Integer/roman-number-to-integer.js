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
        let str = readLine();
        let obj = new Solution();
        let res = obj.romanToDecimal(str);
        console.log(res);

        console.log("~");
    }
}
// } Driver Code Ends


// User function Template for javascript

/**
 * @param {string} str
 * @returns {number}
 */

class Solution {
    romanToDecimal(s) {
        // code here
        var romanMatrix = [
          [1000, "M"],
          [900, "CM"],
          [500, "D"],
          [400, "CD"],
          [100, "C"],
          [90, "XC"],
          [50, "L"],
          [40, "XL"],
          [10, "X"],
          [9, "IX"],
          [5, "V"],
          [4, "IV"],
          [1, "I"],
        ];
        let num = 0;
        let i = 0;
        while(i < s.length) {
            for(let [value, symbol] of romanMatrix) {
                if(s.startsWith(symbol, i)) {
                    num += value;
                    i += symbol.length;
                    break;
                }
            }
        } 
        return num;
        
    }
}