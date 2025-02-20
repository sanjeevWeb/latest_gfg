//{ Driver Code Starts
// Initial Template for javascript

"use strict";

class Node {
    constructor(data) {
        this.data = data;
        this.next = null;
    }
}

function printList(node) {
    let s = "";
    while (node) {
        s += node.data + " ";
        node = node.next;
    }
    console.log(s.trim());
}

// Reading input from stdin and processing it
process.stdin.resume();
process.stdin.setEncoding("utf-8");

let inputString = "";
let currentLine = 0;

process.stdin.on("data", (inputStdin) => { inputString += inputStdin; });

process.stdin.on("end", () => {
    inputString = inputString.trim().split("\n");
    main();
});

function readLine() { return inputString[currentLine++]; }

function main() {
    const t = parseInt(readLine().trim());
    for (let i = 0; i < t; i++) {
        const arr = readLine().trim().split(" ").map(Number);
        const x = parseInt(readLine().trim());

        let head = null;
        if (arr.length >= 0) {
            head = new Node(arr[0]);
            let tail = head;
            for (let j = 1; j < arr.length; j++) {
                tail.next = new Node(arr[j]);
                tail = tail.next;
            }
        }

        const ob = new Solution();
        if (head.data == 0 && head.next == null) head = null;
        const ans = ob.insertInMiddle(head, x);
        printList(ans);
        console.log("~");
    }
}

// } Driver Code Ends


// User function Template for javascript

class Solution {
    insertInMiddle(head, x) {
        // code here
        if(!head) return new Node(x);
        
        let slow = head;
        let fast = head;
        let prev = null;
        
        while(fast != null && fast.next != null){
            prev = slow;
            slow = slow.next;
            fast = fast.next.next;
        }
        
        let newNode = new Node(x);
        
        if(fast === null){
            newNode.next = prev.next;
            prev.next = newNode;
        } else {
            newNode.next = slow.next;
            slow.next = newNode;
        }
        return head;
    }
}