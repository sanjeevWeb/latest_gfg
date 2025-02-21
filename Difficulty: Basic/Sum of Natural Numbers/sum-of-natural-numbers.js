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

        let n = parseInt(readLine());

        let obj = new Solution();
        let res = obj.seriesSum(n);
        console.log(res);
        console.log("~");
    }
}

// } Driver Code Ends



class Solution {
    /**
    * @param number n

    * @returns number
    */
    seriesSum(n) {
        // code here
        if(n==0){
            return 0
        }
        let sum = 0
        for(let i=1;i<=n;i++){
            sum += i;
        }
        return sum
    }
}
