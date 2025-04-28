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
        let str = readLine();
        let obj = new Solution();
        if (obj.isBalanced(str)) {
            console.log("true");
        } else {
            console.log("false");
        }

        console.log("~");
    }
}
// } Driver Code Ends



/**
 * @param {string} s
 * @returns {boolean}
 */

class Solution {
    isBalanced(x) {
        // code here
        const stack = [];

    for (let i = 0; i < x.length; i++) {
        const char = x[i];

        if (char === '(' || char === '{' || char === '[') {
            // If it's an opening bracket, push it onto the stack
            stack.push(char);
        } else {
            // If it's a closing bracket, check if it matches the top of the stack
            const top = stack.pop();

            if (
                (top === '(' && char === ')') ||
                (top === '{' && char === '}') ||
                (top === '[' && char === ']')
            ) {
                // Matching pair, continue
                continue;
            } else {
                // Brackets are not balanced
                return false;
            }
        }
    }

    // If the stack is empty, all brackets are balanced
    return stack.length === 0;
    }
}