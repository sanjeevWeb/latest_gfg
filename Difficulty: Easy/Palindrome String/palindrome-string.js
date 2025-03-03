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
    let t = parseInt(readLine());
    for (let i = 0; i < t; i++) {
        let s = readLine().trim(); // Use lowercase 's'
        let obj = new Solution();
        let res = obj.isPalindrome(s); // Check if the string is a palindrome
        console.log(res);              // Print the result (true or false)
        console.log("~");              // Print the result (true or false)
    }
}

// } Driver Code Ends


// User function Template for javascript

/**
 * @param {string} s
 * @return {boolean}
 */

class Solution {
    // Function to check if a given string is a palindrome.
    isPalindrome(s) {
        // code here
        let start = 0;
        let end = s.length-1;
        
        let flag = true;
        
        while(start<=end) {
            if(s.charAt(start) != s.charAt(end)){
                flag = false;
                break;
            }
            start++;
            end--;
        }
        return flag;
    }
}