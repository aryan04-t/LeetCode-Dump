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
        
        unordered_set<int> st(nums.begin(), nums.end());

        ListNode* prevNode = nullptr;
        ListNode* currNode = head;
        ListNode* nextNode = nullptr;

        ListNode* newHead = nullptr;

        while (currNode != nullptr) {
            nextNode = currNode->next;

            if (st.count(currNode->val)) {
                // detaching and deleting currNode 
                currNode->next = nullptr;

                if (prevNode) prevNode->next = nextNode;
                // delete currNode;
                
                // moving currNode pointer ahead 
                currNode = nextNode;
            }
            else {
                if (newHead == nullptr) newHead = currNode;
                
                // nothing to be deleted, move pointers ahead 
                prevNode = currNode;
                currNode = nextNode;
            }
        }

        return newHead;
    }
};


// T.C. = O(n + m) 
// S.C. = O(n) 

// Here, n = length of nums, m = length of input LL 