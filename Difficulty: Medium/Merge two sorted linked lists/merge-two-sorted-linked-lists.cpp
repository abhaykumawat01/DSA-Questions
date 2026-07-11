/*
class Node {
 public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node* sortedMerge(Node* head1, Node* head2) {
        // code here
        Node *first = head1;
        Node *second = head1;
        Node *temp = NULL;
        while(second && head2){
            if(second->data>=head2->data){
                //if we are at first node
                if(first==second){
                    temp = head2;
                    head2 = head2->next;
                    temp->next = second;
                    head1 = temp;
                    first = temp;
                }
                //if we are not at first node
                else{
                    temp = head2;
                    head2 = head2->next;
                    temp->next = second;
                    first->next = temp;
                    first = temp;
                }
            }
            else{
                first = second;
                second = second->next;
            }
        }
        if(head2!=NULL){
            first->next = head2;
        }
        return head1;
    }
};