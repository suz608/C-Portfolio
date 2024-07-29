// 2. Add Two Numbers (medium)
// Zican Hao
// CS5008 Spring 2023
// https://leetcode.com/problems/add-two-numbers/description/


struct ListNode* create_new_node(){
    struct ListNode* newNode=malloc(sizeof(struct ListNode));
    newNode->val=0;
    newNode->next=NULL;
    return newNode;
}

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    struct ListNode* temp1=l1;
    struct ListNode* temp2=l2;
    struct ListNode* head=create_new_node();;
    struct ListNode* temp3=head;
    int sum=0;
    while(temp1!=NULL && temp2!=NULL){
        sum+=temp1->val+temp2->val;
        if(sum>9){
            temp3->val=sum-10;
            sum=1;
        }else{
            temp3->val=sum;
            sum=0;
        }
        temp1=temp1->next;
        temp2=temp2->next;
        if(temp1!=NULL && temp2!=NULL){
            temp3->next=create_new_node();
            temp3=temp3->next;
        }
    }

    while(temp1!=NULL){
        temp3->next=create_new_node();
        temp3=temp3->next;
        sum+=temp1->val;
        if(sum>9){
            temp3->val=sum-10;
            sum=1;
        }else{
            temp3->val=sum;
            sum=0;
        }
        temp1=temp1->next;
    }

    while(temp2!=NULL){
        temp3->next=create_new_node();
        temp3=temp3->next;
        sum+=temp2->val;
        if(sum>9){
            temp3->val=sum-10;
            sum=1;
        }else{
            temp3->val=sum;
            sum=0;
        }
        temp2=temp2->next;
    }

    if(sum==1){
        temp3->next=create_new_node();
        temp3=temp3->next;
        temp3->val=1;
    }
    return head;
}
