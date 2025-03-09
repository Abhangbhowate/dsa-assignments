#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;

};
void swap(struct node *tail,struct node *temp){
    
   int  box=temp->data;
    temp->data=tail->data;
    tail->data=box;


}
int main(){
    int size;
    printf("enter the size of linked list:");
    scanf("%d",&size);
    struct node *head=NULL,*temp=NULL,*nnode=NULL,*tail=NULL;
    for(int i=0;i<size;i++){
        nnode=(struct node*)malloc(sizeof(struct node));
     if(nnode==NULL){
        printf("memory allocation failed!");
        return -1;

     }
      printf("enter the data:");
      scanf("%d",&nnode->data);
      nnode->next=NULL;
      if(head==NULL){
           head=nnode;
           temp=nnode;
        }
      else{
          temp->next=nnode;
          temp=nnode;
        }
    
    }
    temp=head;
    
  while(temp->next!=NULL){
     tail=temp;
     temp=temp->next;
     swap(tail,temp);
  }
    temp=head;
    printf("printing the data of all nodes:");
    while(temp!=NULL){
        printf("\n%d",temp->data);
        temp=temp->next;
    }

    return 0;

}