//{ Driver Code Starts
// Driver code
const readline = require('readline');
const rl = readline.createInterface({input : process.stdin, output : process.stdout});

let inputLines = [];
let currentLine = 0;

rl.on('line', (line) => { inputLines.push(line.trim()); });

rl.on('close', () => { main(); });

function readLine() { return inputLines[currentLine++]; }

function main() {
    let tc = parseInt(readLine());
    while (tc > 0) {
        let arr = readLine().split(' ').map(Number);
        let ob = new Solution();
        ob.immediateSmaller(arr);
        console.log(arr.join(' '));
        console.log("~");
        tc--;
    }
}
// } Driver Code Ends


// User function Template for javascript

/**
 * @param {number[]} arr
 * @param {number} n
 */

class Solution {
    immediateSmaller(arr) {
        // code here
        let n = arr.length;
        
        for(let i = 0; i < n; i++) {
            if(arr[i+1] < arr[i]) {
                let temp = arr[i+1];
                arr[i] = temp;
            }
            else {
                arr[i] = -1;
            }
        }
        return arr;
    }
}