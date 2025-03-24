class Solution {
    public:
      // Function to reverse a doubly linked list
      DLLNode* reverseDLL(DLLNode* head) {
          if(head == nullptr || head->next == nullptr) return head;
          DLLNode* current = head;
          DLLNode* newHead = nullptr;
          while(current){
              DLLNode* temp = current->prev;
              current->prev = current->next;
              current->next = temp;
              newHead = current;
              current = current->prev;
          }
          return newHead;
      }
};