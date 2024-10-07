/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        ListNode* ans = NULL;
        ListNode* temp3 = ans;
        
        int carry = 0;
        
        while(temp1 != NULL && temp2 != NULL)
        {
            int x = temp1->val + temp2->val + carry;
            if(x >= 10) {
                x = x  - 10;
                carry = 1;
            }
            else carry = 0;
            ListNode*  newNode = new ListNode(x);            
            if(ans == NULL) 
            {
                temp3 = newNode;
                ans = temp3;
            }
            else
            {
                temp3->next = newNode;     
                temp3 = temp3->next;
            }                       
            temp1 = temp1->next;
            temp2 = temp2->next; 
        }
        
        while(temp1 != NULL)
        {
            int x = temp1->val + carry;
            if(x >= 10) {
                x = x  - 10;
                carry = 1;
            }
            else carry = 0;
            ListNode*  newNode = new ListNode(x);
            if(ans == NULL) 
            {
                temp3 = newNode;
                ans = temp3;
            }
            else
            {
                temp3->next = newNode;     
                temp3 = temp3->next;
            }    
            temp1 = temp1->next;
        }
        
        while(temp2 != NULL)
        {
            int x = temp2->val + carry;
            if(x >= 10) {
                x = x  - 10;
                carry = 1;
            }
            else carry = 0;
            ListNode*  newNode = new ListNode(x);
            if(ans == NULL) 
            {
                temp3 = newNode;
                ans = temp3;
            }
            else
            {
                temp3->next = newNode;     
                temp3 = temp3->next;
            }    
            temp2 = temp2->next;
        }
        
        if(carry == 1) temp3->next = new ListNode(1);
        return ans;
        
    }
};