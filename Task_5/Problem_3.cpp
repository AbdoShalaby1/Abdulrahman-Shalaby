/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

// Function to insert a node in the middle of the linked list.
class Solution {
  public:
    Node *insertInMiddle(Node *head, int x) {
        Node *curr = head;
        int len = 0;
        while (curr != nullptr)
        {
            len++;
            curr = curr->next;
        }
        if (len == 0) return new Node(x);
        if (len % 2 == 1) len++;
        curr = head;
        for (int i = 1; i < len/2; i++)
        {
            curr = curr->next;
        }
        Node *newNode = new Node(x);
        newNode->next = curr->next;
        curr->next = newNode;
        return head;
    }
};