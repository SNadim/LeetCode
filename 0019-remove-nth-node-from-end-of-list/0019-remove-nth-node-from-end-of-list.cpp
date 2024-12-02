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
    ListNode* removeNthFromEnd(ListNode* head, int n) {    
        pair<ListNode*, int> ans = helper(head, 0, n);
        return ans.first;
}
    
    private:
        pair<ListNode*, int> helper(ListNode* head, int n, int target) {

            if( head == NULL)
            {
                return {head, 1};
            }

        pair<ListNode*, int> x = helper(head->next, n+1, target);

        if(x.second == target) 
        {
            return {head->next, x.second+1};
        }
        else
        {
            head->next = x.first;
            return {head, x.second+1};
        }

    }
  
};