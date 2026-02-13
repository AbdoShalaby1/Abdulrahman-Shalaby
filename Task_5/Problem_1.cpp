/*
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    vector<int> displayList(Node *head) {
        Node *curr = head;
        vector<int> ans;
        while (curr != NULL)
        {
            ans.push_back(curr->data);
            curr = curr->next;
        }
        return ans;
    }
};