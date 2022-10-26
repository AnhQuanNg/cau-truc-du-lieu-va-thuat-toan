#include<stdio.h>
#include<math.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

typedef struct Node *Node;

void showdata_of_current_element(int data){
    printf("%d",data);
}

int main(){
    Node *head,*second,*third;
    head = (Node)malloc(sizeof(Node));
    second = (Node)malloc(sizeof(Node));
    third = (Node)malloc(sizeof(Node));
    head->data=1;
    head->next=second;
    second->data=2;
    second->next=third;
    third->data=3;
    third->next=NULL;
    Node *cur;
    for(cur=head; cur!=NULL; cur=cur->next){
        showdata_of_current_element(cur->data);
    }
    
}