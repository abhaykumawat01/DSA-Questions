/*
class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node* intersectPoint(Node* head1, Node* head2) {
        //  Code Here
        Node *first = head1;
        Node *second = head2;
        int len1 = 1;
        int len2 = 1;
        //find lenth of first linklist
        while(first){
            first = first->next;
            len1++;
        }
        //length of second linklist
        while(second){
            second = second->next;
            len2++;
        }
        first = head1;
        second = head2;
        if(len1>len2){
            int diff = len1-len2;
            while(diff--){
                first = first->next;
            }
        }
        else{
            int diff = len2-len1;
            while(diff--){
                second = second->next;
            }
        }
        while(first!=second){
            first = first->next;
            second = second->next;
        }
        return first;
    }
};