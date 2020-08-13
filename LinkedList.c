#include<stdio.h>
#include<stdlib.h>


struct Node {
    int data ;
    struct Node* next;
};

void traversal(struct Node* ptr)
{
    // Node start = ptr;
    printf("%d\n",ptr->data);

    while(ptr!=NULL){
        printf("element is : %d\n" , ptr->data);
        ptr = ptr->next;
    }
}



int main(){
    struct Node *head ;
    struct Node *second ;
    struct Node *third;
    struct Node *fourth;

    // Allocate memory for node in in Heap mem
    head = (struct Node*) malloc(sizeof(struct Node));
    second = (struct Node*) malloc(sizeof(struct Node));
    third = (struct Node*) malloc(sizeof(struct Node));
    fourth = (struct Node*) malloc(sizeof(struct Node));
    head->data = 7;
    head->next = second;

    second->data=90;
    second->next = third;

    third->data = 66;
    third->next = fourth;

    fourth->data = 34;
    fourth->next=NULL;

    traversal(head);
    
 
    return 0;   
}