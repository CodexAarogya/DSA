#include <iostream>
using namespace std;

#define MAX_SIZE 3

int queue[MAX_SIZE];
int front = -1;
int rear = -1;

// Check if queue is full
bool isFull()
{
    return ((rear + 1) % MAX_SIZE) == front;
}

// Check if queue is empty
bool isEmpty()
{
    return front == -1;
}

void enqueue(int data)
{
    if (isFull())
    {
        cout << "Queue Overflow! Cannot insert " << data << endl;
        return;
    }
    if (isEmpty())
    {
        front = 0;
    }
    rear = (rear + 1) % MAX_SIZE;
    queue[rear] = data;
    cout << data << " pushed to queue." << endl;
}

void dequeue()
{
    if (isEmpty())
    {
        cout << "Queue Underflow! Queue is empty." << endl;
        return;
    }
    cout << queue[front] << " popped from queue." << endl;
    if (front == rear)
    {
        // Queue has only one element, reset after dequeue
        front = -1;
        rear = -1;
    }
    else
    {
        front = (front + 1) % MAX_SIZE;
    }
}

void display()
{
    if (isEmpty())
    {
        cout << "Queue is empty. Nothing to display." << endl;
        return;
    }
    cout << "Elements in queue: ";
    int i = front;
    while (true)
    {
        cout << queue[i] << " ";
        if (i == rear)
            break;
        i = (i + 1) % MAX_SIZE;
    }
    cout << endl;
}

void peek()
{
    if (isEmpty())
    {
        cout << "Queue is empty. No element to peek." << endl;
    }
    else
    {
        cout << "Front element is: " << queue[front] << endl;
    }
}

int main()
{
    cout << "--- Circular Queue Operations in C++ ---" << endl;

    enqueue(10);
    enqueue(20);
    enqueue(30); // Queue should be full now

    display();

    dequeue();

    display();

    enqueue(40); // Should reuse space at front

    display();

    peek();

    return 0;
}