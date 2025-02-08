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

        let S1 = readLine();
        let S2 = readLine();

        let obj = new Solution();
        let res = obj.multiplyStrings(S1, S2);

        console.log(res);

        console.log("~");
    }
}
// } Driver Code Ends


// User function Template for javascript

/**
 * @param {string} s1
 * @param {string} s2
 * @returns {string}
 */

class Solution {
    multiplyStrings(s1, s2) {
        // code here
        let isNegative = false;
        if (s1[0] === '-') {
            isNegative = !isNegative;
            s1 = s1.slice(1);
        }
        if (s2[0] === '-') {
            isNegative = !isNegative;
            s2 = s2.slice(1);
        }
    
        // Remove leading zeros
        s1 = s1.replace(/^0+/, '') || '0';
        s2 = s2.replace(/^0+/, '') || '0';
    
        // If either number is zero, return "0"
        if (s1 === "0" || s2 === "0") return "0";
    
        let m = s1.length, n = s2.length;
        let result = new Array(m + n).fill(0);
    
        // Perform multiplication using the standard long multiplication method
        for (let i = m - 1; i >= 0; i--) {
            for (let j = n - 1; j >= 0; j--) {
                let product = (s1[i] - '0') * (s2[j] - '0');
                let sum = product + result[i + j + 1];
    
                result[i + j + 1] = sum % 10; // Store unit place digit
                result[i + j] += Math.floor(sum / 10); // Carry to next place
            }
        }
    
        // Convert result array to string
        let resultStr = result.join('').replace(/^0+/, ''); // Remove leading zeros
    
        // Add negative sign if necessary
        return isNegative ? '-' + resultStr : resultStr;
    }
}