//{ Driver Code Starts
// Initial Template for javascript

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
    let t = parseInt(readLine());
    let i = 0;
    for (; i < t; i++) {
        let arr = readLine().trim().split(" ").map((x) => parseInt(x));
        let obj = new Solution();
        let res = obj.minimumApple(arr);
        console.log(res);
    }
}

// } Driver Code Ends


// User function Template for javascript
/**
 * @param {number[]} arr
 * @returns {number}
 */

class Solution {
    // Function to find the minimum number of apples eaten.
    minimumApple(arr) {
        // your code here
        const uniquePerson = new Set();

        for(let i=0;i<arr.length;i++)
        {
            uniquePerson.add(arr[i]);
        }
    
        return uniquePerson.size;
    }
}