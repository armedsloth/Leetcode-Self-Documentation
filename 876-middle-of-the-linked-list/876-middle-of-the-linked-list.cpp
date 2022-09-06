class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *mid=head;
        while(head->next)
        {
            mid=mid->next;
            if(head->next->next)
                head=head->next->next;
            else
                break;
        }
        return mid;
    }        
};