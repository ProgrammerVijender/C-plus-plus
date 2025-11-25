class Solution {
public:
    bool hasCycle(ListNode *head) {
        unordered_map <ListNode * , bool  > map;

        ListNode* temp = head;

        while(temp != NULL)
        {
            if(map.find(temp) != map.end())
            {
                return true;
            }
            else
            {
                map[temp] = true;
            }

            temp = temp ->next;
        }

        return 0;
    }
};