/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* temp = headA;
        unordered_set<ListNode*> st;

        while(temp != NULL)
        {
            st.insert(temp);
            temp = temp->next;
        }

        temp = headB;
        ListNode* ans = NULL;
        while(temp != NULL)
        {
            if(st.count(temp))
            {
                ans = temp;
                break;
            }
            temp = temp->next;
        }

        return ans;

    }
};