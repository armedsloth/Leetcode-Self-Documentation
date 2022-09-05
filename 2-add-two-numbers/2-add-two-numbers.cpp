class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode* l3= new ListNode(0);
        
        ListNode*res=l3;
        
        int c=0;
        int sum;
        while(l1&&l2)
        {
           sum=l1->val+l2->val+c;
            
            if(l3==NULL)
            {
                l3=l1;
                
            }else{
                l3->next=l1;
                l3=l3->next;
            }
            
            l3->val=sum%10;
            c=sum/10;
            l1=l1->next;
            l2=l2->next;
                 
        }
        
        while(l1)
        {
            sum=l1->val+c;
            l3->next=l1;
            l3=l3->next;
            l3->val=sum%10;
            c=sum/10;
            l1=l1->next;
        }
       while(l2)
        {
           sum=l2->val+c;
            l3->next=l2;
            l3=l3->next;
            l3->val=sum%10;
            c=sum/10;
            l2=l2->next;
        }
        
        if(c==1)
        {
            ListNode* t= new ListNode(c);
            l3->next=t;
            
         }
        
        
        return res->next;
     
        
        
    }
};