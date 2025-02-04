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
        // Reading first array (arr)
        let arr = readLine().split(' ').map(x => parseInt(x, 10));

        // Reading second array (dep)
        let dep = readLine().split(' ').map(x => parseInt(x, 10));

        // Create a new Solution object and call the findPlatform function
        let obj = new Solution();
        let res = obj.findPlatform(arr, dep);
        console.log(res);
        console.log("~");
    }
}

// } Driver Code Ends


// User function Template for javascript

/**
 * @param {number[]} arr
 * @param {number[]} dep
 * @returns {number}
 */

class Solution {
    // Function to find the minimum number of platforms required at the
    // railway station such that no train waits.
    findPlatform(arr, dep) {
        // your code here
        let count = 1;
        let maxCount = count;
       arr.sort((a,b) => a-b);
          dep.sort((a,b) => a-b);
           let depIndex = 0;
           let arrIndex = 1;
           while(arrIndex < arr.length && depIndex <arr.length){
               if(arr[arrIndex] <= dep[depIndex]){
                   count++;
                   maxCount = Math.max(maxCount, count);
                   arrIndex++;
               }
               else{
                   count = Math.max(count-1,0);
                   depIndex++;
               }
           }
        return maxCount;
    }
}