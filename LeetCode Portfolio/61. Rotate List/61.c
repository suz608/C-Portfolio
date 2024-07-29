// Zican Hao
// CS5008 Spring 2023
// 61. Rotate List (medium)
// https://leetcode.com/problems/rotate-list/

void rotate(struct ListNode* head){
    if(head!=NULL){
        struct ListNode* temp=head;
        int i=temp->val;
        int j=0;
        while(temp->next!=NULL){
            j=temp->next->val;
            temp->next->val=i;
            temp=temp->next;
            i=j;
        }
        head->val=i;
    }
}

struct ListNode* rotateRight(struct ListNode* head, int k){
    if(head==NULL){return head;}

    int size=0;
    struct ListNode* temp=head;
    while(temp!=NULL){
        size++;
        temp=temp->next;
    }

    int limit=k%size;

    int i;
    for(i=0;i<limit;i++){
        rotate(head);
    }
    return head;
}
