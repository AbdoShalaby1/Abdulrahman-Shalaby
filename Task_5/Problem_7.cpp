
// class Node
// {
// public:
//     int data;
//     Node *prev;
//     Node *next;

//     Node(int x)
//     {
//         data = x;
//         prev = nullptr;
//         next = nullptr;
//     }
// };


class Solution {
  public:
    Node *rotateDLL(Node *head, int p) {
        Node *curr = head;
        while (curr->next != nullptr)
        {
            curr = curr->next;
        }

        curr->next = head;
        head->prev = curr;
        curr = head;
        for (int i = 0; i < p; i++)
        {
            curr = curr->next;
        }
        head = curr;
        head->prev->next = nullptr;
        head->prev = nullptr;
        
        return head;
    }
};