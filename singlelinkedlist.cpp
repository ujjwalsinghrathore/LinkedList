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
//deleting at begin
void delete_begin(){
    struct Node *ptr;
    ptr = head;
    head = ptr->next;
    
    cout<<"Deleted node from begin"<<endl;
    free(ptr);
}
//deleting at end
void delete_end(){
    struct Node *ptr, *preptr;
    preptr = head;
    ptr = preptr->next;
    int z = 0;
    while(ptr->next != NULL){
        preptr = preptr->next;
        ptr = ptr->next;
    }
    preptr->next = NULL;
    cout<<"Deleted from end "<<endl;
    free(ptr);
    
}
//deleting any node from between
void delete_any(){
    struct Node *ptr, *preptr;
    int x;
    cout<<"Enter which node to be deleted i.e. 1";
    cin>>x;
    head = preptr;
    ptr = preptr->next;
    int z = 1;
    while(z<x-1){
        ptr = ptr->next;
        preptr = preptr->next;
        z++;
    }
    preptr->next = ptr->next;
    free(ptr);
    
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
