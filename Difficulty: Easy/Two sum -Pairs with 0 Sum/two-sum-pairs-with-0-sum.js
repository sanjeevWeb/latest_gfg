//{ Driver Code Starts
process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', inputStdin => { inputString += inputStdin; });

process.stdin.on('end', _ => {
    inputString =
        inputString.trim().split("\n").map(string => { return string.trim(); });

    main();
});

function readLine() { return inputString[currentLine++]; }

function main() {
    let t = parseInt(readLine());
    let i = 0;
    for (; i < t; i++) {
        let arr = readLine().split(' ').map(x => parseInt(x));

        let obj = new Solution();
        let res = obj.getPairs(arr);
        if (res.length == 0) {
            console.log();
        } else {
            for (let row of res) {
                let tmp = '';
                for (let col of row) {
                    tmp += col;
                    tmp += ' ';
                }
                console.log(tmp.trim());
            }
        }
        console.log("~");
    }
}

// } Driver Code Ends


// User function Template for javascript

/**
 * @param {number[]} arr
 * @returns {number[][]}
 */
class Solution {
    getPairs(arr) {
        // code here
        let seen = new Set();
    let pairs = new Set();

    for (let num of arr) {
        if (seen.has(-num)) {
            let pair = [Math.min(num, -num), Math.max(num, -num)];
            pairs.add(pair.toString()); // Store as string to ensure uniqueness
        }
        seen.add(num);
    }

    // Convert set back to array and parse the pairs
    return Array.from(pairs).map(str => str.split(',').map(Number)).sort((a, b) => a[0] - b[0]);
    }
}