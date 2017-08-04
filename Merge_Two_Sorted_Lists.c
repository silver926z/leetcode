#include <stdio.h>
#include <stdlib.h>


struct ListNode {
     int val;
     struct ListNode *next;
};
 

struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode *current;
    struct ListNode *head;
    if(l1 == NULL && l2 == NULL)
        return NULL;
    if(l1 == NULL)
        return l2;
    if(l2 == NULL)
        return l1;
    if(l1->val <= l2->val){
        head = l1;
        l1 = l1->next;
    }
    else{
        head = l2;
        l2 = l2->next;
    }
    current = head;
    while(l1 != NULL && l2 != NULL ){
        if(l1->val > l2->val){
            current->next = l2;
            l2 = l2->next;
        }else{
            current->next = l1;
            l1 = l1->next;
        }
        current = current->next;
    }
        
    if(l1 == NULL)
        current->next = l2;
    if(l2 == NULL)
        current->next = l1;

    return head;
}