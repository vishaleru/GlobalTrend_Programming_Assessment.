#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
    Node(int x)
    {
        next = NULL;
        data = x;
    }
};

void create_linked_list(Node** n1, int x)
{
    if(*n1 == NULL)
    {
        *n1 = new Node(x);
    }
    else{
        Node* n2 = new Node(x);
        n2->next = *n1;
        *n1 = n2;
    }
}
void print_linked_list(Node* n1)
{
    while(n1!=NULL)
    {
        cout<<n1->data<<" ";
        n1 = n1->next;
    }
    cout<<endl;
}
Node* reverse(Node* n1)
{
    Node* head1 = n1;
    Node* ptr1 = NULL;
    while(head1!=NULL)
    {
        Node* nxt = head1->next;
        head1->next = ptr1;
        ptr1 = head1;
        head1 = nxt;
    }
    return ptr1;
}
int main()
{
   Node* head = NULL;
   int n = 5;
   while(n>0)
   {
    int x;
    cin>>x;
    create_linked_list(&head,x);
    n--;
   }
   cout<<"original linked list "<<" ";
   print_linked_list(head);

   Node* new_head = reverse(head);
   cout<<"linked list after reversing " <<" ";
   print_linked_list(new_head);
   return 0;
}