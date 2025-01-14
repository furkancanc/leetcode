// Source : https://leetcode.com/problems/remove-duplicates-from-sorted-list
// Date : 2024-01-14

/*
Given the head of a sorted linked list, delete all duplicates such that each element appears only once. Return the linked list sorted as well.

 

Example 1:


Input: head = [1,1,2]
Output: [1,2]
Example 2:


Input: head = [1,1,2,3,3]
Output: [1,2,3]
*/

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

class Solution 
{
public:
    ListNode* deleteDuplicates(ListNode* head) 
    {
        if (head == nullptr) return nullptr;
        if (head->next == nullptr) return head;

        ListNode* currentNode = head;

        while (currentNode != nullptr)
        {
            if (currentNode->next != nullptr && (currentNode->val == currentNode->next->val))
            {
                ListNode* toDeleteNode = currentNode->next;
                currentNode->next = toDeleteNode->next;

                toDeleteNode->next = nullptr;
                delete toDeleteNode;
            }
            else
            {
                currentNode = currentNode->next;
            }
        }

        return head;
    }
};