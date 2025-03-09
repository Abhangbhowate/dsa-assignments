#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;

};
int main(){
    int size ;
    printf("Enter the size of linked list:");
    scanf("%d",&size);
    struct node *temp,*head,*nnode,*prevnode=NULL,*last3rdprevnode=NULL;
    for(int i=0;i<size;i++){
        nnode=(struct node*)malloc(sizeof(struct node));
        if(nnode==NULL){
            printf("memory allocation failed");
            return -1;

        }
        printf("enter the value:");
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
    prevnode=NULL;
    while(temp->next!=NULL){
       
        last3rdprevnode=prevnode;
        prevnode=temp;
        temp=temp->next;
       

    }
    printf(" the 3rd last data in linked list is:%d",last3rdprevnode->data);


}