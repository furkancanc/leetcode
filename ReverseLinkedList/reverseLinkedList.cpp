// Source : https://leetcode.com/problems/reverse-linked-list/
// Date : 2024-01-22

/*
Given the head of a singly linked list, reverse the list, and return the reversed list.

 

Example 1:


Input: head = [1,2,3,4,5]
Output: [5,4,3,2,1]
Example 2:


Input: head = [1,2]
Output: [2,1]
Example 3:

Input: head = []
Output: []
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
    ListNode* reverseList(ListNode* head) 
    {
        ListNode* node = nullptr;

        while (head != nullptr)
        {
            ListNode* tempNode = head->next;
            head->next = node;
            node = head;
            head = tempNode;
        }

        return node;
    }
};