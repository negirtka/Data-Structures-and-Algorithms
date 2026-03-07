//Creating Singly Linked List
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
int main(){
    struct node *head=NULL; //point to first node
    struct node *temp;      //help to traverse (point current node)
    struct node *newnode;      //store address of new node
    int i,n;
    printf("Enter number of nodes: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        newnode=(struct node*)malloc(sizeof(struct node));

        printf("Enter data: ");
        scanf("%d", &newnode->data);
        newnode->next=NULL;

        if(head==NULL){
            head=newnode;
            temp=head;
        }
        
        else{
            temp->next=newnode;
            temp=newnode;
        }
    }
    /*print linkedlist*/
    temp=head;
    printf("linkedlist: ");
    while(temp!=NULL){
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL");
    return 0;
}


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

//Creating Circular Linked List
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
int main(){
    struct node *temp;
    struct node *head=NULL;
    struct node *newnode;

    int i,n;
    printf("Enter number of nodes: ");
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        newnode=(struct node*)malloc(sizeof(struct node));
        
        printf("Enter data:");
        scanf("%d",&newnode->data);
        newnode->next=NULL;

        if(head==NULL){
            head=newnode;
            temp=head;
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }
    }
    temp->next=head;    //Making singly linkedlist CIRCULAR
    printf("Circular LinkedList: ");
    if(head!=NULL){
    temp->next=head;
    }
    do{
        printf("%d->",temp->data);
        temp=temp->next;
    }while(temp!=head);
    printf("(Back to head)");

    return 0;
}