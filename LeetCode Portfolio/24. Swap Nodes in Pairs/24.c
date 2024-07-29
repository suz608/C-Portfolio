// 24. Swap Nodes in Pairs (medium)

// Zican Hao
// CS5008 Spring 2023

// https://leetcode.com/problems/swap-nodes-in-pairs/

void swap(struct ListNode* first,struct ListNode* sec){
    int temp=first->val;
    first->val=sec->val;
    sec->val=temp;
}

struct ListNode* swapPairs(struct ListNode* head){
    if(head==NULL){return NULL;}
    if(head->next==NULL){return head;}
    struct ListNode* temp1=head;
    struct ListNode* temp2=head->next;
    while(1){
        swap(temp1,temp2);
        if(temp2->next!=NULL){temp1=temp2->next;}else{break;}
        if(temp1->next!=NULL){temp2=temp1->next;}else{break;}
    }
    return head;
}
