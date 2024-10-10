class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        if(list1 == NULL & list2==NULL) return NULL;
        ListNode* r = new ListNode();
        ListNode* head = r;
        if(list1 == NULL) return list2;
        if(list2 == NULL) return list1;
        while(list1 != NULL && list2!=NULL) {
        if(list1->val <= list2->val) {
            head->next = list1;
            list1 = list1->next;
        } else {
            head->next = list2;
            list2 = list2->next;
        }

        head = head->next;
    }

    if(list1 == NULL) {
        head->next = list2;
    } else {
        head->next = list1;
    }
    
    return r->next;
    }
};