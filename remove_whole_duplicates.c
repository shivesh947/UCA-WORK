/*#include<stdio.h>
struct node
{
    int data;
    struct node *next;
};
void append(struct node **head_ref,int val)
{
    struct node *curr=*head_ref;
    struct node *temp=(struct node *)malloc(sizeof(struct node));
    temp->data=val;
    temp->next=NULL;
    if(*head_ref==NULL)
    {
        *head_ref=temp;
        return;
    }
    while(curr->next)
        curr=curr->next;
    curr->next=temp;
}
void removeAllDup(struct node **head1)
{
struct node *dummy=(struct node *)malloc(sizeof(struct node));
   dummy->next=*head1;
    struct node* ptr1=dummy,*ptr2=ptr1->next;
    while(ptr2)
    {
        while(ptr2->next&&ptr1->next->data==ptr2->next->data)
            ptr2=ptr2->next;
        if(ptr1->next==ptr2)
            ptr1=ptr1->next;
        else
        ptr1->next=ptr2->next;
        ptr2=ptr2->next;
    }
  *head1=dummy->next;
}
int main()
{
    struct node *head=NULL;
    int n;
    printf("enter the no.elements:");
    scanf("%d",&n);
    int i=0,ele=0;
    for(i=0;i<n;i++)
     {
        scanf("%d",&ele);
         append(&head,ele );
     }
    removeAllDup(&head);
    while(head!=NULL)
    {
        printf("%d ",head->data);
        head=head->next;
    }
    return 0;
}*/
#include<stdio.h>
struct node
{
    int data;
    struct node* next;
};
void insertAtBeg(struct node** head,int data)
{
    struct node* n=(struct node*)malloc(sizeof(struct node));
    n->data=data;
    n->next=*head;
    *head=n;
}
void printList(struct node* head)
{
  while(head!=NULL)
  {
      printf("%d ",head->data);
      head=head->next;
  }
}
void removeAll(struct node** head)
{
    struct node* dummy=(struct node*)malloc(sizeof(struct node));
   dummy->next=*head;
   struct node* ptr1=dummy,*ptr2=ptr1->next;
   while(ptr2)
   {
   while(ptr2->next&&ptr1->next->data==ptr2->next->data)
    ptr2=ptr2->next;
   if(ptr1->next==ptr2)
       ptr1=ptr1->next;
   else
       ptr1->next=ptr2->next;
       ptr2=ptr2->next;
   }
   *head=dummy->next;
}
int main()
{
   struct node* head=NULL;
   insertAtBeg(&head,5);
   insertAtBeg(&head,4);
   insertAtBeg(&head,2);
   insertAtBeg(&head,1);
   insertAtBeg(&head,1);
   removeAll(&head);
   printList(head);
}

