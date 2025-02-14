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
    let t = parseInt(readLine()); // Number of test cases
    for (let i = 0; i < t; i++) {
        let arr = readLine().split(' ').map(x => parseInt(x)); // Input array
        let obj = new Solution();
        const result = obj.findDuplicates(arr);
        result.sort((a, b) => a - b); // Ensure the result is in ascending order
        // Print the result in the required format
        if (result.length > 0) {
            console.log(result.join(' ')); // Print duplicates in ascending order
        } else {
            console.log("[]"); // Print empty list if no duplicates are found
        }
        console.log("~"); // Print empty list if no duplicates are found
    }
}

// } Driver Code Ends


// User function Template for javascript

/**
 * @param {number[]} arr
 * @returns {number[]}
 */

class Solution {
    findDuplicates(arr) {
        // code here
        
        let myArray = []
        let myObject = {}

        for (let element of arr) {
                (!myObject[element]) ? myObject[element] = 1 : myObject[element]++;
        }

        for (let key in myObject) {
                if (myObject[key]> 1    ){
                        myArray.push(key)
                }
        }


        return myArray
    }
}