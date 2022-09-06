class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *l1= list1, *l2=list2, *result;
        if(!l1)
            return l2;
        if(!l2)
            return l1;
        if(l2->val>l1->val)
        {
            result= new ListNode(l1->val, NULL);
            l1=l1->next;
        }
        else
        {
            result= new ListNode(l2->val,NULL);
            l2=l2->next;
        }
        ListNode *temp=result;
        while(l1 && l2)
        {
            if(l1->val>=l2->val)
            {
                result->next= new ListNode(l2->val, NULL);
                l2=l2->next;
            }
            else
            {
                result->next= new ListNode(l1->val, NULL);
                l1=l1->next;
            }
            result=result->next;
        }
        if(l1==NULL)
            result->next=l2;
        else if(l2==NULL)
            result->next=l1;
        return temp;
    }
};