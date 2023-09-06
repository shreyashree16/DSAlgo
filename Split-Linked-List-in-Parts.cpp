class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*> ans;
        int size=0;
        ListNode* temp=head;
        while(temp){
            size++;
            temp=temp->next;
        }
        int left=size%k;
        int persize=size/k;
        temp=head;
        while(temp){
            ListNode* p=temp;
            ListNode* q=NULL;
            int c=persize;
            while(c!=0){
                q=p;
                p=p->next;
                c--;
            }
            if(left>0){
                left--;
                q=p;

                p=p->next;
            }
            q->next=NULL;
            ans.push_back(temp);
            temp=p;
        }
        while(ans.size()!=k){
            ans.push_back(NULL);
        }
        return ans;
    }
};