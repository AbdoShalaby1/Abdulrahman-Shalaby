/*

class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/
class Solution {
  public:
    bool areIdentical(Node *head1, Node *head2) {
        Node *curr1 = head1;
        Node *curr2 = head2;

        while (curr1 != nullptr && curr2 != nullptr)
        {
            if (curr1->data != curr2->data)
            {
                return false;
            }
            curr1 = curr1->next;
            curr2 = curr2->next;
        }
        if (curr1 == nullptr && curr2 == nullptr)
            return true;
        return false;
    }
};