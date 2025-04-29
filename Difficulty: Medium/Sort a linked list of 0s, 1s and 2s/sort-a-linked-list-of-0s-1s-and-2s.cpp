//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

/* Link list Node */
class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};

void printList(Node* node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << "\n";
}

void freeList(struct Node* head) {
    struct Node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        delete temp;
    }
}


// } Driver Code Ends

/*  Node is defined as
  struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};*/
class Solution {
  public:
    Node* segregate(Node* head) {
        // code here
        int cnt[3] = {0, 0, 0};
    Node *ptr = head;

    // Traverse and count total number of '0', '1' and '2'
    // cnt[0] will store total number of '0's
    // cnt[1] will store total number of '1's
    // cnt[2] will store total number of '2's
    while (ptr != NULL) {
        cnt[ptr->data] += 1;
        ptr = ptr->next;
    }

    int idx = 0;
    ptr = head;

    // Fill first cnt[0] nodes with value 0
    // Fill next cnt[1] nodes with value 1
    // Fill remaining cnt[2] nodes with value 2
    while (ptr != nullptr) {

        if (cnt[idx] == 0)
            idx += 1;
        else {
            ptr->data = idx;
            cnt[idx] -= 1;
            ptr = ptr->next;
        }
    }
    return head;
    }
};



//{ Driver Code Starts.

// Driver program to test above functions
int main() {
    int t, k;
    cin >> t;
    cin.ignore(); // Ignore the newline character after t

    while (t--) {
        string input;
        getline(cin, input); // Read the entire line for the array elements

        stringstream ss(input);
        Node *head = nullptr, *tail = nullptr;
        int x;

        if (ss >> x) {
            head = new Node(x);
            tail = head;

            while (ss >> x) {
                tail->next = new Node(x);
                tail = tail->next;
            }

            // Link the last node to the head if k is 1 to make it circular
            if (k == 1) {
                tail->next = head;
            }
        }

        Solution ob;
        Node* newHead = ob.segregate(head);
        printList(newHead);
        cout << "~" << endl;
    }

    return 0;
}
// } Driver Code Ends