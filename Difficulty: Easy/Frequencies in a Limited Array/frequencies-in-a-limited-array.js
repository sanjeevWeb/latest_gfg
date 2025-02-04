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
        const result = obj.frequencyCount(arr);

        // Print the result in the required format
        if (result.length > 0) {
            console.log(result.join(' ')); // Print counts in ascending order
        } else {
            console.log("[]"); // Print empty list if no counts are found
        }
    }
}

// } Driver Code Ends


// User function Template for javascript

/**
 * @param {number[]} arr
 * @returns {number[]}
 */

class Solution {
    // Function to count the frequency of all elements from 1 to N in the array.
    frequencyCount(arr) {
        // code here
        const maxElement = arr.length;
        let arr2 = [];
        let obj = {};
        
        for(let i=0;i<arr.length;i++){
            if(obj[arr[i]]){
                obj[arr[i]]++;
            }else{
                obj[arr[i]] = 1;
            }
        }
        // console.log(obj)
        // console.log(maxElement)
        for(let i=0;i<maxElement;i++){
            if(obj[i+1]){
                arr2.push(obj[i+1]);
                // arr2[i-1] = obj[i];
            }
            else{
                // arr2[i-1] = 0;
                arr2.push(0);
            }
        }
        return arr2;
    }
}