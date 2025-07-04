#include <iostream>
#include <stdlib.h>
int size = 0;
using namespace std;
struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;
struct node *ptr = NULL;
node *createNode(int data)
{
    struct node *newNode = new node();
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
void insertBeginning(node *&head, int data)
{
    struct node *newNode = new node();
    newNode->data = data;
    if (head == NULL)
    {
        head = newNode;
    }
    else
    {

        newNode->next = head;
        head = newNode;
    }
    ++size;
}
void insertionEnd(node *&head, int data)
{
    struct node *temp = head;
    struct node *newNode = createNode(data);
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    ++size;
    cout << "Node added at the end." << endl;
}
void insertionAtKth(node *&head, int data, int position)
{
    struct node *newNode = createNode(data);
    struct node *temp = head;
    if (position > size)
    {
        cout << "Position exceed size limit !" << endl;
        return;
    }
    else if (position < 0)
    {
        cout << "Invalid Position." << endl;
        return;
    }
    else if (position == 0)
        insertBeginning(head, data);
    else
    {
        for (int i = 1; i < position - 1; i++)
        {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
}
void deletionFromBeginning(node *&head)
{
    struct node *temp = head;
    if (head == NULL)
    {
        cout << "Node doesnot exist." << endl;
        return;
    }
    else
    {
        head = head->next;
        free(temp);
    }
}
void deletionFromEnd(node *&head)
{
    struct node *temp = head;
    if (head == NULL)
    {
        cout << "Node doesnot exist." << endl;
        return;
    }
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = NULL;
    free(temp);
}
void deletionFromKth(node *&head, int position)
{
    struct node *temp = head;
    if (position > size)
    {
        cout << "Position exceed size limit !" << endl;
        return;
    }
    else if (position < 0)
    {
        cout << "Invalid Position." << endl;
        return;
    }
    else if (position == 0)
    {
        deletionFromBeginning(head);
    }
    else
    {
        for (int i = 0; i < position; i++)
        {
            ptr = temp;
            temp = temp->next;
        }
        ptr->next = temp->next;
        free(temp);
    }
}
void display(node *head)
{
    struct node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " --> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
int main()
{
    int choice;
    char check;
    do
    {
        cout << "--------------------------------------------------" << endl;
        cout << "Enter 1 to display lists" << endl;
        cout << "Enter 2 to insert at beginning" << endl;
        cout << "Enter 3 to insert at end" << endl;
        cout << "Enter 4 to insert at kth position" << endl;
        cout << "Enter 5 to delete at beginning" << endl;
        cout << "Enter 6 to delete at end" << endl;
        cout << "Enter 7 to delete at kth position" << endl;
        cout << "Press 8 to exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout << "--------------------------------------------------" << endl;

        switch (choice)
        {
        case 1:
        {
            display(head);
        }
        case 2:
        {
            int data;
            cout << "Enter data: ";
            cin >> data;
            insertBeginning(head, data);
            display(head);
            break;
        }
        case 3:
        {
            int data;
            cout << "Enter data: ";
            cin >> data;
            insertionEnd(head, data);
            display(head);
            break;
        }
        case 4:
        {
            int data;
            int position;
            cout << "Enter data: ";
            cin >> data;
            cout << "Enter position";
            cin >> position;
            insertionAtKth(head, data, position);
            display(head);
            break;
        }
        case 5:
        {
            deletionFromBeginning(head);
            display(head);
            break;
        }
        case 6:
        {
            deletionFromEnd(head);
            display(head);
            break;
        }
        case 7:
        {
            int position;
            cout << "Enter position";
            cin >> position;
            deletionFromKth(head, position);
        }
        case 8:
        {
            exit(0);
        }

        default:
        {
            cout << "Invalid Choice !";
        }
        }
        cout << "Continue ? [y/n]: ";
        cin >> check;
    } while (check != 'n');

    return 0;
}