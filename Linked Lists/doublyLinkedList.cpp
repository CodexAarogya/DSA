#include <iostream>
#include <stdlib.h>
using namespace std;
int size = 0;
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head = NULL;
struct node *ptr = NULL;

void display()
{
    ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << " --> ";
        ptr = ptr->next;
    }
    cout << " NULL "<<endl;
}

node *createNode(int data)
{
    struct node *newNode = new node();
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;
    cout << "Node created" << endl;
    return newNode;
}
void insertionBeginning(int data)
{
    struct node *newNode = createNode(data);
    if (head == NULL)
    {
        cout << head << endl;
        head = newNode;
        cout << head << endl;
    }
    else
    {
        cout << head;
        head->prev = newNode;
        newNode->next = head;
        head = newNode;
    }
    ++size;
}
void insertionEnd(int data)
{
    struct node *newNode = createNode(data);
    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        ptr = head;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = newNode;
    }
    ++size;
}
void insertKth(int data, int pos)
{
    struct node *newNode = createNode(data);
    if (pos < 0 || pos > size)
    {
        cout << "Invalid Position !";
        return;
    }
    else if (pos == 0)
    {
        insertionBeginning(data);
    }
    else
    {
        struct node *temp = NULL;
        ptr = head;
        for (int i = 0; i < pos; i++)
        {
            temp = ptr;
            ptr = ptr->next;
        }
        // newNode->prev = ptr->prev->next;
        // newNode->next = ptr;
        // ptr->prev->next = newNode;
        // ptr->prev = newNode;

        newNode->prev = temp->next;
        newNode->next = ptr;
        temp->next = newNode;
        ptr->prev = newNode;
        ++size;
    }
}

void deleteBeginning(){
    if(head == NULL){
        cout<<"List is empty !";
        return;
    }
    else{

        ptr = head;
        head = head->next;
        head->prev = NULL;
        free(ptr);
        --size;
    }
}

void deleteEnd(){
    ptr = head;
    if(head == NULL){
        cout<<"List is empty !";
        return;
    }
    else{
        while(ptr->next != NULL){
         ptr = ptr->next;
        }
        cout<<ptr<<endl;
        cout<<ptr->next<<endl;
        cout<<ptr->prev->next;
        ptr->prev->next = NULL;
        
    }
}

void deleteKth(int pos){
    if(pos < 0 || pos > size){
        cout<<"Invalid position !"<<endl;
    }
    else if(pos == 0){
        deleteBeginning();
    }
    else{
        
    }
}

int main()
{
    insertionBeginning(10);
    display();
    insertionEnd(20);
    display();
    insertKth(30, 0);
    display();
    insertKth(40, 1);
    display();
    deleteBeginning();
    display();
    // deleteEnd();
    display();
}