#include <iostream>
using namespace std;
#define stackSize 5
int top = -1;
int stack[stackSize];

void push(int data)
{
    if (top == stackSize - 1)
        cout << "Cannot push " << data << " into stack. Stack Overflow !" << endl;
    else
    {
        top++;
        stack[top] = data;
        cout << data << " push to stack successfully !" << endl;
    }
}

void pop()
{
    if (top < 0)
        cout << "Alert ! Stack Underflow." << endl;
    else
        cout << "Popped : " << stack[top] << endl;
    top--;
}

bool isEmpty()
{
    if (top < 0)
        return true;
    else
        return false;
}

bool isFull()
{
    if (top == stackSize - 1)
        return true;
    else
        return false;
}

void display()
{
    if (top < 0)
        cout << "Stack is empty. Nothing to display." << endl;
    else
    {
        int temp = top;
        for (int i = 0; i <= temp; i++)
        {
            cout << stack[i] << " ";
        }
        cout << endl;
    }
}

int main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    display();
    push(50);
    display();
    push(60);
    pop();
    pop();
    pop();
    pop();
    pop();
    pop();
    display();
}