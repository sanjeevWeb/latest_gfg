//{ Driver Code Starts
//Initial Template for javascript


'use strict';

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', inputStdin => {
    inputString += inputStdin;
});

process.stdin.on('end', _ => {
    inputString = inputString.trim().split('\n').map(string => {
        return string.trim();
    });
    
    main();    
});

function readLine() {
    return inputString[currentLine++];
}


function main() {
    let t = parseInt(readLine());
    let i = 0;
    for(;i<t;i++)
    {
        let s = readLine().trim();
        let obj = new Solution();
        let res = obj.firstRep(s);
        console.log(res);
    }
}

// } Driver Code Ends


//User function Template for javascript

/**
 * @param {string} s
 * @return {string}
*/

class Solution {
    firstRep(s){
       //code here
       for(let i=0;i<s.length;i++){
           for(let j=i+1;j<s.length;j++){
               if(s[i] === s[j]){
                   return s[i];
               }
           }
       }
       return '-1';
    }
}
