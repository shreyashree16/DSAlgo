class Solution {
public:
    unordered_map<Node*,Node*> map;
public:
    Node* copyRandomList(Node* head) {
        if(head==NULL)
        return NULL;
        if(map.count(head))
        return map[head];
        Node* newnode=new Node(head->val);
        map[head]=newnode;
        newnode->next=copyRandomList(head->next);
        newnode->random=copyRandomList(head->random);
        return newnode;
    
    }
};