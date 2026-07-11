/* Structure of linked list Node
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* removeDuplicates(Node* head) {
        // code here
        Node *first = head;
        Node *second = head->next;
        Node *temp = NULL;
        while(second){
            if(first->data==second->data){
                temp = second;
                second = second->next;
                first->next = second;
                delete temp;
            }
            else{
                first = first->next;
                second = second->next;
            }
        }
        return head;
    }
};