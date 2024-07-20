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
    ListNode* mergetwolinkedlist(ListNode*  L1 , ListNode* L2)
    {
        if(!L1) return L2;
        if(!L2) return L1;

        if(L1->val <= L2->val){
            L1->next = mergetwolinkedlist(L1->next , L2);
            return L1;
        }
        else{
            L2->next = mergetwolinkedlist(L1 , L2->next);
            return L2;
        }
        return NULL;
    }

    ListNode* partandmerge(int s , int e , vector<ListNode*>& lists)
    {
        if(s>e)return NULL;
        if(s==e)return lists[s];

        int mid = s+(e-s)/2;

        ListNode* L1 = partandmerge(s , mid ,lists);
        ListNode* L2 = partandmerge(mid+1 , e , lists);

        return  mergetwolinkedlist( L1 , L2);
    }

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int k = lists.size();
        if(k==0)return NULL;

        return partandmerge(0,k-1 , lists);
    }
};