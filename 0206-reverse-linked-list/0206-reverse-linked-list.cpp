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
    ListNode* reverseList(ListNode* head) {
        if(head == NULL || head->next == NULL)
    {
        return head;
    }
    
    ListNode* temp = head;
    ListNode* temp1 = NULL;
    ListNode* temp2 = NULL;
    
    while(temp != NULL)
    {
        temp2 = temp1;
        temp1 = temp;
        temp = temp->next;
        temp1->next = temp2;
    }
    
    return temp1;
    }
};