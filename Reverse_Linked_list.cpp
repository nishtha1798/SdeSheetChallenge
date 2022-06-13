#include <bits/stdc++.h> 
/****************************************************************
    Following is the class structure of the LinkedListNode class:
    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };
*****************************************************************/
LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    // Write your code here
       LinkedListNode<int> *p = head;
 LinkedListNode<int> *q = NULL;
   LinkedListNode<int> *r = NULL;
   while(p!=NULL){
       r = q;
       q = p;
       p = p->next;
       q->next = r;
   }
   head = q;
   return head;
}