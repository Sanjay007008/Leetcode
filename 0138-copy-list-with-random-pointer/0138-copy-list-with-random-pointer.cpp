/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        map<Node*, Node*> mp;

        Node* temp = head;

        while (temp != NULL) {
            Node* curr = new Node(temp->val);
            mp[temp] = curr;

            temp = temp->next;
        }

        Node* temp1 = head;
        while (temp1 != nullptr) {
            Node* curr = mp[temp1];
            curr->next = mp[temp1->next];
            curr->random = mp[temp1->random];
            temp1 = temp1->next;
        }

        return mp[head];
    }
};