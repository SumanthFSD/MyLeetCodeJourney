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
    bool hasCycle(ListNode *head) {
        //Faster
        ListNode* slowPtr = head;
        ListNode* fastPtr = head;
        while(fastPtr!=NULL && fastPtr->next !=NULL){
            slowPtr = slowPtr->next;
            fastPtr = (fastPtr->next)->next;
            if(slowPtr == fastPtr){
                return true;
            }
        }
        return false;


        // Brute force
        // unordered_set<ListNode *> tracker;
        // while(head!=NULL){
        //     if(tracker.find(head) == tracker.end()){
        //         tracker.insert(head);
        //     }
        //     else{
        //         return true;
        //     }
        //     head = head->next;
        // }
        // return false;
    }
};