#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node*next;
};
void main(){
    struct node*head,*temp,*newnode;
    int choice=1,count=0;
    head=0;
   while(choice){
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the value:");
    count++;
    scanf("%d",&newnode->data);
    newnode->next=0;
   if(head==0){
    head=newnode;
    temp=newnode;
   }
   else{
    temp->next=newnode;
    temp=newnode;
   }
   printf("do you want to continue(0 or 1):");
   scanf("%d",&choice);

   
   }
   temp=head;
   while(temp!=NULL){
    printf(" your linked list contain: %d\n",temp->data);
    temp=temp->next;
   }
   printf("the linked list contain %d elements..",count);

}