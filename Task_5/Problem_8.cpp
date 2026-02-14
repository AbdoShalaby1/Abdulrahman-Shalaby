/*
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
    // Function to remove duplicates from sorted linked list.
    Node* removeDuplicates(Node* head) {
        Node *curr = head;
        Node *tmp;

        while (curr != nullptr && curr->next != nullptr)
        {
            while (curr->next != nullptr && curr->next->data == curr->data)
            {
                tmp = curr->next->next;
                curr->next = tmp;
            }
            if (curr != nullptr && curr->next != nullptr)
                curr = curr->next;
            else
                break;
        }
        return head;
    }
};