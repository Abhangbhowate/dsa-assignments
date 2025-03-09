#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
};
struct nodeeven{
int data1;
struct nodeeven *next1;

};
struct nodeodd{
int data2;
struct nodeodd *next2;
};
int main(){
    int size;
    printf("enter the size of linked list:");
    scanf("%d",&size);
    struct node *head=NULL,*temp=NULL,*nnode;
    struct nodeeven *head1=NULL,*temp1=NULL,*nnode1;
    struct nodeodd *head2=NULL,*temp2=NULL,*nnode2;
    for (int i=0;i<size;i++){
        nnode=(struct node*)malloc(sizeof(struct node));
        if(nnode==NULL){
            printf("memory is full!");
            return  -1;
        }
        printf("enter the value:");
        scanf("%d",&nnode->data);
        nnode->next=0;
        if(head==0){
            head=nnode;
            temp=nnode;

        }
        else{
            temp->next=nnode;
            temp=nnode;
        }
        
       

        
    }
    temp=head;
    while(temp!=NULL){
        if(temp->data%2==0){
            nnode1 = (struct nodeeven*)malloc(sizeof(struct nodeeven));
            if(nnode1==NULL){
                printf("memory is full!");
                return  -1;
            }
            nnode1->data1=temp->data;
            nnode1->next1=NULL;
            if(head1==0){
                head1=nnode1;
                temp1=nnode1;

            }
            else{
                temp1->next1=nnode1;
                temp1=nnode1;

            }
            temp=temp->next;

        }
        else{
            nnode2 = (struct nodeodd*)malloc(sizeof(struct nodeodd));
            if(nnode2==NULL){
                printf("memory is full!");
                return  -1;
            }
            nnode2->data2=temp->data;
            nnode2->next2=NULL;
            if(head2==0){
                head2=nnode2;
                temp2=nnode2;

            }
            else{
                temp2->next2=nnode2;
                temp2=nnode2;

            }
            temp=temp->next;
        }
        
    }
    temp1=head1;
    temp2=head2;
    printf("Printing the data of all nodes : ");
    temp = head;
    while(temp != NULL){
        printf("%d\t", temp->data);
        temp = temp->next;
    }
    printf("\nPrinting the data of all even nodes : ");
    
    while(temp1 != NULL){
        printf("%d\t", temp1->data1);
        temp1= temp1->next1;
    }
    printf("\nPrinting the data of all odd nodes : ");
    temp2 = head2;
    while(temp2 != NULL){
        printf("%d\t", temp2->data2);
        temp2 = temp2->next2;
    }

}
