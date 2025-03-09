// Q7 - Take two linked list from user, merge them in sorted way.
#include <stdio.h>
#include <stdlib.h>
struct node1
{
    int data;
    struct node1 *next;
};
struct node2
{
    int data;
    struct node2 *next;
};
struct node3
{
    int data;
    struct node3 *next;
};
int main()
{
    int size1;
    printf("enter the size of linked list:");
    scanf("%d", &size1);
    struct node1 *head1 = NULL, *temp1 = NULL, *nnode1 = NULL, *tail1 = NULL;

    for (int i = 0; i < size1; i++)
    {
        nnode1 = (struct node1 *)malloc(sizeof(struct node1));
        if (nnode1 == NULL)
        {
            printf("memory allocation failed!");
        }
        printf("enter the data:");
        scanf("%d", &nnode1->data);
        nnode1->next = NULL;
        if (head1 == NULL)
        {
            head1 = nnode1;
            temp1 = nnode1;
        }
        else
        {
            temp1->next = nnode1;
            temp1 = nnode1;
        }
    }
    temp1 = head1;
    // 2nd linked list..
    int size2;
    printf("enter the size of linked list:");
    scanf("%d", &size2);
    struct node2 *head2 = NULL, *temp2 = NULL, *nnode2 = NULL, *tail2 = NULL;

    for (int i = 0; i < size2; i++)
    {
        nnode2 = (struct node2 *)malloc(sizeof(struct node2));
        if (nnode2 == NULL)
        {
            printf("memory allocation failed!");
        }
        printf("enter the data:");
        scanf("%d", &nnode2->data);
        nnode2->next = NULL;
        if (head2 == NULL)
        {
            head2 = nnode2;
            temp2 = nnode2;
        }
        else
        {
            temp2->next = nnode2;
            temp2 = nnode2;
        }
    }
    temp2 = head2;
    // 3rd linked list
    int size3 = size1 + size2;
    struct node3 *head3=NULL, *temp3=NULL, *nnode3=NULL;
    
       
        while (temp1 != NULL && temp2 != NULL)
        {
            nnode3 = (struct node3 *)malloc(sizeof(struct node3));
            if (nnode3 == NULL)
            {
                printf("memory allocation failed!");
            }
            if (temp1->data < temp2->data)
            {
                nnode3->data = temp1->data;
                temp1 = temp1->next;
            }
            else
            {
                nnode3->data = temp2->data;
                temp2 = temp2->next;
            }
            nnode3->next=NULL;
            if (head3 == NULL)
            {
                head3 = nnode3;
                temp3 = nnode3;
            }
            else
            {
                temp3->next = nnode3;
                temp3 = nnode3;
            }
        }

       
            while (temp2 != NULL)
            {
                nnode3 = (struct node3 *)malloc(sizeof(struct node3));
                if (nnode3 == NULL)
                {
                    printf("memory allocation failed!");
                }
                nnode3->data = temp2->data;
                nnode3->next=NULL;
                temp2 = temp2->next;
                if(head3==NULL){
                    head3=nnode3;
                    temp3=nnode3;
                }
                else{
                    temp3->next=nnode3;
                    temp3=nnode3;
                }
               
            }
        
        
            while (temp1 != NULL)
            {
                nnode3 = (struct node3 *)malloc(sizeof(struct node3));
                if (nnode3 == NULL)
                {
                    printf("memory allocation failed!");
                }
                nnode3->data = temp1->data;
                nnode3->next=NULL;
                temp1 = temp1->next;
                if(head3==NULL){
                    head3=nnode3;
                    temp3=nnode3;
                }
                else{
                    temp3->next=nnode3;
                    temp3=nnode3;
                }
                
            }
        
    
    temp3=head3;
    printf("printing the data of all nodes:");
    while(temp3!=NULL){
        printf("\n%d",temp3->data);
        temp3=temp3->next;
    }

}
