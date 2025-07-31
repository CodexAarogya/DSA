#include <iostream>
using namespace std;
#define SIZE 3
int FRONT = -1;
int REAR = -1;
int queue[SIZE];
int user;
void enqueue(int data)
{
    if (REAR > (SIZE))
    {
        cout << "Cannot enqueue " << data << endl;
        cout << "OVERFLOW !" << endl;
    }
    else
    {
        if (FRONT < 0)
        {
            FRONT++;
        }
        REAR++;
        queue[REAR] = data;
        cout << data << " added to queue successfully !";
    }
    cout << endl;
}
void dequeue()
{
    if (FRONT < 0 || FRONT > REAR)
    {
        cout << "Cannot dequeue element." << endl;
    }
    else
    {
        cout << queue[FRONT] << endl;
        FRONT++;
    }
}
void display()
{
    int temp_f = FRONT;
    int temp_r = REAR;
    if (temp_f < 0)
    {
        cout << "Cannot dequeue element !" << endl;
    }
    for (int i = temp_f; i <= temp_r; i++)
    {
        cout << queue[i] << " ";
    }
    cout << endl;
}
int main()
{
    int choice;
    do
    {
        cout << "Enter 1 to enqueue." << endl;
        cout << "Enter 2 to dequeue." << endl;
        cout << "Enter 3 to display." << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            int value;
            cout << "Enter value: ";
            cin >> value;
            enqueue(value);
            break;
        }
        case 2:
        {
            dequeue();
            break;
        }
        case 3:
        {
            display();
        }

        default:
            cout << "Invalid input !";
            break;
        }
        cout << "Do you want to continue ? [1/0]: ";
        cin >> user;
    } while (user != 0);

    return 0;
}