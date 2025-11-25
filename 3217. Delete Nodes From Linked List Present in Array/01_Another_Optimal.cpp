// LeetCode (3217. Delete Nodes From Linked List Present in Array): 
// https://leetcode.com/problems/delete-nodes-from-linked-list-present-in-array


#include<bits/stdc++.h>
using namespace std;


// Definition for singly-linked list.
    
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        
        unordered_set<int> deleteNodes(nums.begin(), nums.end());

        ListNode* currNode = head;   
        ListNode* newHead = nullptr;
        ListNode* lastNonDeletedNode = nullptr;

        while (currNode != nullptr) {
            int val = currNode->val;

            if (!deleteNodes.count(val)) {
                if (newHead == nullptr) newHead = currNode;
                if (lastNonDeletedNode) {
                    lastNonDeletedNode->next = currNode;
                }
                lastNonDeletedNode = currNode;
            }

            currNode = currNode->next;
        }

        lastNonDeletedNode->next = nullptr;

        return newHead;
    }
};


// T.C. = O(n + m) 
// S.C. = O(n) 

// Here, n = length of nums, m = length of input LL