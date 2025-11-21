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
        ListNode* dummy=new ListNode(-1); // Dummy node to simplify the code
        ListNode* curr=dummy; // Current node to build the result list
        ListNode* temp1=l1; // Iterator for the first list
        ListNode* temp2=l2; // Iterator for the second list
        int carry =0; // Initialize carry to 0
        while(temp1!=nullptr || temp2!=nullptr){ // Iterate until both lists are exhausted
            int sum =carry; // Initialize sum with the carry from the previous digit
            if(temp1) sum+=temp1->val; // Add the digit from the first list, if it exists
            if(temp2) sum+=temp2->val; // Add the digit from the second list, if it exists
            ListNode* newNode=new ListNode(sum%10); // Create a new node with the digit sum modulo 10
            carry=sum/10; // Calculate the new carry
            curr->next=newNode; // Append the new node to the result list
            curr=curr->next; // Move the current node to the new node
            if(temp1) temp1=temp1->next; // Move to the next digit in the first list, if it exists
            if(temp2) temp2=temp2->next; // Move to the next digit in the second list, if it exists


        }
        if(carry){ // If there's a carry left after processing all digits
            ListNode* newNode=new ListNode(carry); // Create a new node for the carry
            curr->next=newNode; // Append the new node to the result list

        }
        return dummy->next; // Return the result list, skipping the dummy node
        
    }
};