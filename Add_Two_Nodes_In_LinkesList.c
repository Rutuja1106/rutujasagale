/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* createNode(int data )
{
    struct ListNode* temp = NULL ;
    temp = (struct ListNode*)malloc(sizeof(struct ListNode));
    temp->val = data;
    temp->next = NULL ; 
    return temp ; 
    
}

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2)
{
   struct ListNode* result = createNode(0);
    struct ListNode* final = result;
    int carry = 0;
    
    while (l1 || l2 || carry) 
    {
        if (l1) 
        {
            carry += l1->val;
            l1 = l1->next;
        }
        if (l2) 
        {
            carry += l2->val;
            l2 = l2->next;
        }
        
        final->next = createNode(carry % 10);
        final = final->next;
        
        carry = carry / 10;
    }
    
    return result->next;

}