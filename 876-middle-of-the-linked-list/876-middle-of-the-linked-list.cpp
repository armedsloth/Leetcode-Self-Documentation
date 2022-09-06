class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *mid=head;
        if(head)
        {
            while(head->next)
            {
                mid=mid->next;
                if(head->next->next)
                    head=head->next->next;
                else
                    head=head->next;
            }
    
        }
        return mid;
    }        
};