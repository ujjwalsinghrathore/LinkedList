//creating a linked list 
//iserting nodes
//reversing
#include <iostream>

using namespace std;

struct Node{
    int data;
    struct Node* prev;
    struct Node* next;
};
struct Node *head = NULL;
void create(int new_data){
    struct Node *new_node;
    new_node = (struct Node*)malloc (sizeof(struct Node));
    new_node->next = NULL;
    new_node->data = new_data;
    new_node->prev = NULL;
    head = new_node;
}
void insert_begin(int new_data){
    struct Node *new_node, *ptr;
    new_node = (struct Node* )malloc(sizeof(struct Node));
    ptr = head;
    new_node->next = ptr;
    new_node->data = new_data;
    new_node->prev = NULL;
    ptr->prev = new_node;
    head = new_node;
}
void insert_end(int new_data){
    struct Node *new_node,*ptr;
    new_node = (struct Node*)malloc(sizeof(struct Node));
    ptr = head;
    
    while(ptr->next!=NULL){
        ptr = ptr->next;
    }
    ptr->next = new_node;
    new_node->data = new_data;
    new_node->next = NULL;
    new_node->prev = ptr;
    
}
void reverse(){
    struct Node *temp;
    struct Node *curr = head;
    while(curr!=NULL){
        temp = curr->prev;
        curr->prev = curr->next;
        curr->next = temp;
        curr = curr->prev;
        }
       head = temp->prev;
}
void display(){
    struct Node *ptr;
    ptr = head;
    while(ptr!=NULL){
        cout<<ptr->data<<endl;
        ptr = ptr->next;
    }
    cout<<"Printing reverse of the list"<<endl;
    ptr = head;
    while(ptr->next!=NULL){
        ptr = ptr->next;
    }
    while(ptr!=NULL){
        cout<<ptr->data<<endl;
        ptr=ptr->prev;
    }
    
}
int main()
{
    create(5);
    cout<<"Linked list created"<<endl;
    display();
    cout<<"..."<<endl;
    insert_begin(4);
    insert_begin(3);
     cout<<"..."<<endl;
    insert_end(6);
    display();
     cout<<"..."<<endl;
    reverse();
    display();
    return 0;
}
