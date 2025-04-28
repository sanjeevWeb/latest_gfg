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
        let res = obj._push(arr);
        obj._pop(res);
    }
}

// } Driver Code Ends


// User function Template for javascript

class Solution {

    /**
     * @param {number[]} arr
     * @param {number} n
     * @return {number[]}
     */
    _push(arr) {
        // code here
        let stack = [];

        for (let k = arr.length - 1; k >= 0; k--) {
            stack.push(arr[k]);
        }

        return stack;   
    }

    /**
     * @param {number[]} s
     */
    _pop(s) {
        
        // code here
        let str=""
        while(s.length){
            str+=s.shift()+" "
        }
        console.log(str)
    }
}