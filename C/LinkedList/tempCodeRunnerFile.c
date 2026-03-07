
//Creating Doubly linked list
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
    struct node *prev;
};
int main(){
    struct node *head=NULL;
    struct node *temp;
    struct node *newnode;
    
    int n,i;
    printf("Enter number of Nodes: ");
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d", &newnode->data);
        
        newnode->prev=NULL;
        newnode->next=NULL;
        if(head==NULL){
            head=newnode;
            temp=newnode;
        }
        else{
            newnode->prev=temp;
            temp->next=newnode;
            temp=newnode;   
        }
    }
    printf("Doubly Linked List: ");
    temp = head;

    while(temp!=NULL){
        printf("%d <-> ",temp->data);
        temp = temp->next;
    }

    printf("NULL");

    return 0;
}
