#include <stdio.h>
#include <stdlib.h>
struct node
{
  int info;
  struct node *next;
};

void push(struct node **head, int val)
{
  struct node *newNode = malloc(sizeof(struct node));
  newNode->info = val;
  newNode->next = NULL;
  if (*head == NULL)
    *head = newNode;
  else
  {
    struct node *lastNode = *head;
    while (lastNode->next != NULL)
    {
      lastNode = lastNode->next;
    }
    lastNode->next = newNode;
  }
}
void sort(struct node *head)
{
  struct node *temp;
  while(head!=NULL)
  {
   temp=head->next;
    while(temp!=NULL)
    {
       if(head->info>temp->info)
       {
         int hold=head->info;
         head->info=temp->info;
         temp->info=hold;
       }
      temp=temp->next;
    }
   head=head->next;
  }
}
void merge(struct node *l1,struct node *l2)
{
  while(l1->next!=NULL)
  {
    l1=l1->next;
  }
  l1->next=l2; 
}
void print(struct node *ptr)
{
  struct node *temp = ptr;
  while (temp != NULL)
  {
    printf("%d ", temp->info);
    temp = temp->next;
  }
}
int main()
{
  struct node *l1 = NULL,*l2 = NULL;
  push(&l1,19);
  push(&l1,18);
  push(&l1,12);
  push(&l1,11);
  push(&l1,10);
  sort(l1);
  push(&l2,1);
  push(&l2,21);
  push(&l2,8);
  push(&l2,17);
  push(&l2,16);
  sort(l2);
  merge(l1,l2);
  print(l1);
 
}
