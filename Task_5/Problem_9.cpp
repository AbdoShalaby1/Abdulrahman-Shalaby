// struct Node
// {
//     int data;
//     struct Node* next;

//     Node(int x){
//         data = x;
//         next = NULL;
//     }

// };

class Solution {
  public:
    Node* reverseBetween(int a, int b, Node* head) {
        if (head == nullptr || head->next == nullptr)
            return head;
        Node *curr = head;
        Node *prv = nullptr;
        Node *tmp;
        Node *befBegin = nullptr;
        Node *begin;
        Node *end;
        Node *afterEnd = nullptr;
        bool started = false;
        int idx = 0;
        while (curr != nullptr)
        {
            idx++;
            if (idx == a - 1)
                befBegin = curr;

            if (idx == a)
                begin = curr;

            if (idx == b)
                end = curr;

            if (idx == b+1)
                afterEnd = curr;

            if (idx == a + 1)
            {
                started = true;
            }   
            if (idx == b + 1)
            {
                started = false;
            }

            if (started)
            {
                tmp = curr->next;
                curr->next = prv;
                prv = curr;
                curr = tmp;
            }
            else
            {
                prv = curr;
                curr = curr->next;
            }
        }
        if (befBegin != nullptr)
            befBegin->next = end;
        else
            head = end;
        if (begin != nullptr)
            begin->next = afterEnd;
        return head;
        
    }
};