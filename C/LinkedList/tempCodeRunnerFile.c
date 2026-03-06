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
