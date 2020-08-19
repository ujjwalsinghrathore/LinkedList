//created by ujjwal singh rathore
//program for single linked list

#include<iostream>
using namespace std;
struct Node{
    int data;
    struct Node* next;
};
struct Node* head =  NULL;
//creating a linked list
void list(int new_data){
    struct Node  *newnode, *ptr ;
    newnode = (struct Node*) malloc (sizeof(struct Node));
    newnode->data = new_data;
    newnode->next = NULL;
    head = newnode;
}
//inserting at end
void insert_at_end(int new_data){
    struct Node *newnode, *ptr;
    newnode = (struct Node*)malloc(sizeof(struct Node));
    ptr = head;
    newnode->data = new_data;
    while(ptr->next!=NULL){
        ptr = ptr->next;
    }
    ptr->next = newnode;
    newnode->next = NULL;
}
//inserting at begin
void insert_at_begin(int new_data){
    struct Node *newnode, *ptr;
    newnode = (struct Node*)malloc(sizeof(struct Node));
    ptr = head;
    newnode->data = new_data;
    newnode->next = ptr;
    head  = newnode;
}
//reversing a linked list
void reverse(){
    struct Node *curr = head;
    struct Node *prev = NULL;
    struct Node *forwd = NULL;
    struct Node *ptr = head;
    while(curr!=NULL){
           forwd = curr->next;
           curr->next = prev;
           prev = curr;
           curr = forwd;
         }
    head = prev;
}
//displaying a linked list
void display(){
    struct Node *ptr;
    ptr = head;
    while(ptr!=NULL){
        cout<<ptr->data<<endl;
        ptr = ptr->next;
    }
}
int main(){
    list(7);
    display();
    insert_at_end(8);
    insert_at_end(9);
    display();
    insert_at_begin(6);
    display();
    reverse();
    cout<<"reverse is"<<endl;
    display();
    return 0;
}
