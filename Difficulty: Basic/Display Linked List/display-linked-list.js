//{ Driver Code Starts
//Initial Template for javascript

"use strict";

process.stdin.resume();
process.stdin.setEncoding("utf-8");

let inputString = "";
let currentLine = 0;



process.stdin.on("data", (inputStdin) => {
  inputString += inputStdin;
});

process.stdin.on("end", (_) => {
  inputString = inputString
    .trim()
    .split("\n")
    .map((string) => {
      return string.trim();
    });

  main();
});

function readLine() {
  return inputString[currentLine++];
}

class Node {
  constructor(x){
    this.data = x;
    this.next = null;
  }
}



function main() {
  let t = parseInt(readLine());
  let i = 0;
  for (; i < t; i++) {
    let N = parseInt(readLine());
    let arr = readLine().trim().split(" ").map((x) => parseInt(x));
    let list = new Node(arr[0]);
    let tail = list;
    for(let j = 1;j<N;j++){
      tail.next = new Node(arr[j]);
      tail = tail.next;
    }
    
    let obj = new Solution();
    let res = obj.displayList(list);
    let s = "";
    for(let it of res){
      s+=it+" ";
    }
    console.log(s);
  
console.log("~");
} 

}
// } Driver Code Ends


//User function Template for javascript



/*LINKED LIST NODE
class Node {
  constructor(x){
    this.data = x;
    this.next = null;
  }
}
*/


/**
 * @param {Node} head
 * @return {number[]}
*/

class Solution {
  displayList(head){
    //code here
    let ptr = head
    let arr = []
    while(ptr !== null){
        arr.push(ptr.data)
        ptr = ptr.next
    }
    return arr
  }
}
