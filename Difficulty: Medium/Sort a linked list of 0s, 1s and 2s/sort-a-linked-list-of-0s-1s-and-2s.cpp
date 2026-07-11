/* Node is defined as
  class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* segregate(Node* head) {
        // code here
        Node *tail = head;
        Node *ptr = head;
        Node *prev = NULL;
        Node *temp = NULL;
        int count = 1;
        while(tail->next){
            tail = tail->next;
            count++;
        }
        while(count--){
            // if we found 0
            if(ptr->data==0 && ptr!=head){
                    temp = ptr;
                    ptr = ptr->next;
                    prev->next = ptr;
                    temp->next = head;
                    head = temp;
            }
            //if we found 2
            else if(ptr->data==2 && ptr!=tail){
                //if at head
                if(ptr==head){
                    temp = ptr;
                    ptr = ptr->next;
                    head = ptr;
                    temp->next = NULL;
                    tail->next = temp;
                    tail = temp;
                }
                else{
                    temp = ptr;
                    ptr = ptr->next;
                    prev->next = ptr;
                    temp->next = NULL;
                    tail->next = temp;
                    tail = temp;
                    }
            }
            else{
                prev = ptr;
                ptr = ptr->next;
                
            }
        }
        return head;
    }
};