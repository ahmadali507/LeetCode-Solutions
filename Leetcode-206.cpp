
struct ListNode {
      int val;
      ListNode* next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode* next) : val(x), next(next) {}
  };

class Solution {
    public:
        ListNode* reverseList(ListNode* head) {
    //         ios::sync_with_stdio(false); 
    //         cin.tie(NULL); cout.tie(NULL); 
    //         ListNode curr = head; 
    //         ListNode prev = nullptr; 
    //         ListNode next = nullptr;
    //         while(curr != nullptr){
    //             next = curr->next; 
    //             curr->next = prev; 
    //             prev = curr; 
    //             curr = next; 
    //         }
    
    //         return prev; 
            
            // RECURSIVE SOLUTION 
            
            if(head==nullptr || head->next==nullptr)
            {
                return head; 
            }        
            ListNode* newHead = reverseList(head->next); 
            
            head->next->next = head; 
            head->next = nullptr;
            
            return newHead; 
            
        }
    };