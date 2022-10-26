#include<stdio.h>
#include<math.h>
#include<stdlib.h>

struct LinkedList{
    int data;
    struct LinkedList *next;
 };

typedef struct LinkedList *node; //Từ giờ dùng kiểu dữ liệu LinkedList có thể thay bằng node cho ngắn gọn

int main(){
    node temp,second,third; // declare a node
    temp = (node)malloc(sizeof(node)); // Cấp phát vùng nhớ dùng malloc()
    second = (node)malloc(sizeof(node));
    third = (node)malloc(sizeof(node));
    temp->next = second;// Cho next trỏ tới NULL
    temp->data = 1; // Gán giá trị cho Node
    second->next = third;// Cho next trỏ tới NULL
    second->data = 2; // Gán giá trị cho Node
    third->next = NULL;
    third->data = 3;
    node cur;
    temp=temp->next;
    
    for(cur=temp;cur!=NULL;cur = cur->next){
        int data=cur->data;
        printf("%d",data);
    }
}