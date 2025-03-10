//{ Driver Code Starts
"use strict";

process.stdin.resume();
process.stdin.setEncoding("utf-8");

let inputString = "";
let currentLine = 0;

process.stdin.on("data", (inputStdin) => { inputString += inputStdin; });

process.stdin.on("end", () => {
    inputString = inputString.trim().split("\n").map((string) => string.trim());
    main();
});

function readLine() { return inputString[currentLine++]; }

class Node {
    constructor(x) {
        this.data = x;
        this.next = null;
    }
}

function printList(head) {
    let s = "";
    while (head !== null) {
        s += head.data + " ";
        head = head.next;
    }
    console.log(s.trim());
}

function main() {
    let t = parseInt(readLine());
    while (t--) {
        let arr = readLine().split(" ").map(Number);

        if (arr.length === 0) {
            console.log("");
            continue;
        }

        let head = new Node(arr[0]);
        let tail = head;
        for (let j = 1; j < arr.length; j++) {
            tail.next = new Node(arr[j]);
            tail = tail.next;
        }

        let obj = new Solution();
        let res = obj.removeDuplicates(head);
        printList(res);
    }
}

// } Driver Code Ends


// User function Template for javascript

/**
 * @param {Node} head
 * @returns {Node}
 */

/*
class Node{
    constructor(data){
        this.data = data;
        this.next = null;
    }
}
*/

class Solution {
    // Function to remove duplicates from unsorted linked list.
    removeDuplicates(head) {
        // your code here
        const hashSet = new Set();
        let curr = head;
        let prev = null;
    
        while (curr !== null) {
        
            // Check if the element is already in the hash table
            if (hashSet.has(curr.data)) {
            
                // Element is present, remove it
                prev.next = curr.next;
                curr = curr.next;
            } else {
            
                // Element is not present, add it to hash table
                hashSet.add(curr.data);
                prev = curr;
                curr = curr.next;
            }
        }
        return head;
    }
}