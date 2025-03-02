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
        let IPadd = readLine();

        let obj = new Solution();
        let res = obj.isValid(IPadd);
        if (res)
            console.log("true");
        else
            console.log("false");
        console.log("~");
    }
}
// } Driver Code Ends


// User function Template for javascript

/**
 * @param {string} s
 * @returns {number}
 */

class Solution {
    isValid(s) {
        // code here
        let arr = s.split(".")
        if(arr.length != 4) return false
        
        for(let i = 0; i < arr.length; i++){
            if(arr[i].length == 0 || (arr[i].length > 1  && arr[i][0] == "0")) return false
            if(!(Number(arr[i]) >= 0 && Number(arr[i]) <= 255)){
                return false
            }
        }
        
        return true
    }
}