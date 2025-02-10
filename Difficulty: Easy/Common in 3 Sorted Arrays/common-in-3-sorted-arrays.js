//{ Driver Code Starts
// Initial Template for javascript

let inputString = '';
let currentLine = 0;

process.stdin.on('data', inputStdin => { inputString += inputStdin; });

process.stdin.on('end', _ => {
    inputString = inputString.trim().split("\n").map(string => string.trim());
    main();
});

function readLine() { return inputString[currentLine++]; }

function main() {
    let t = parseInt(readLine());
    for (let i = 0; i < t; i++) {
        const arr = readLine().split(' ').map(x => parseInt(x));
        const brr = readLine().split(' ').map(x => parseInt(x));
        const crr = readLine().split(' ').map(x => parseInt(x));

        let obj = new Solution();
        let res = obj.commonElements(arr, brr, crr);

        if (res.length === 0)
            console.log(-1);
        else
            console.log(res.join(' '));

        console.log("~");
    }
}
// } Driver Code Ends


// User function Template for javascript

class Solution {
    // Function to find common elements in three arrays.
    commonElements(arr1, arr2, arr3) {
        // Code Here
        let m1=new Map();
        let arr=[]
        for(let i=0;i<arr1.length;i++){
            m1.set(arr1[i],1)
        }
        for(let j=0;j<arr2.length;j++){
            if(m1.has(arr2[j])){
            m1.set(arr2[j],2)
                
            }
        }
        for(let k=0;k<arr3.length;k++){
            if(m1.has(arr3[k]) && m1.get(arr3[k])==2){
            m1.set(arr3[k],3)
                
            }
        }
        for(let [key,value] of m1.entries() ){
            if(value==3){
            arr.push(key)
        }
            
        }
        return arr;
    }
}