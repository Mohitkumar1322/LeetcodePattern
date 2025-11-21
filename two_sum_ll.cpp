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
        ListNode* dummy=new ListNode(-1); // Dummy node to simplify head insertion
        ListNode* curr=dummy; // Current pointer to build the result list
        ListNode* temp1=l1; // Temporary pointer to traverse l1
        ListNode* temp2=l2; // Temporary pointer to traverse l2
        int carry =0; // Initialize carry to 0
        while(temp1!=nullptr || temp2!=nullptr){ // Iterate while either list has nodes
            int sum =carry; // Initialize sum with the carry from the previous digit
            if(temp1) sum+=temp1->val; // Add the value of the current node in l1 if it exists
            if(temp2) sum+=temp2->val; // Add the value of the current node in l2 if it exists
            ListNode* newNode=new ListNode(sum%10); // Create a new node with the digit sum % 10
            carry=sum/10; // Update carry for the next digit
            curr->next=newNode; // Attach the new node to the result list
            curr=curr->next; // Move the current pointer to the new node
            if(temp1) temp1=temp1->next; // Move to the next node in l1 if it exists
            if(temp2) temp2=temp2->next; // Move to the next node in l2 if it exists


        }
        if(carry){ // If there's a carry left after processing all digits
            ListNode* newNode=new ListNode(carry); // Create a new node for the carry
            curr->next=newNode; // Attach the new node to the result list

        }
        return dummy->next; // Return the result list, skipping the dummy node
        
    }
};