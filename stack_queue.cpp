//Stack Searching
#include <iostream>
using namespace std;

int main()
{
    int stack[5] = {10, 20, 30, 40, 50};
    int top = 4;
    int key = 30;
    int found = 0;

    while(top >= 0)
    {
        if(stack[top] == key)
        {
            found = 1;
            break;
        }

        top--;
    }

    if(found == 1)
        cout << "Element Found";
    else
        cout << "Element Not Found";

    return 0;
}
// Stack Sorting
#include <iostream>
using namespace std;

int main()
{
    int stack[5] = {30, 10, 50, 20, 40};
    int top = 4;

    int tempStack[5];
    int tempTop = -1;

    while(top >= 0)
    {
        int temp = stack[top];
        top--;

        while(tempTop >= 0 && tempStack[tempTop] > temp)
        {
            stack[++top] = tempStack[tempTop];
            tempTop--;
        }

        tempStack[++tempTop] = temp;
    }

    while(tempTop >= 0)
    {
        cout << tempStack[tempTop] << " ";
        tempTop--;
    }

    return 0;
}
//Queue Searching
#include <iostream>
using namespace std;

int main()
{
    int queue[5] = {10, 20, 30, 40, 50};
    int front = 0;
    int rear = 4;

    int key = 30;
    int found = 0;

    for(int i = front; i <= rear; i++)
    {
        if(queue[i] == key)
        {
            found = 1;
            break;
        }
    }

    if(found == 1)
        cout << "Element Found";
    else
        cout << "Element Not Found";

    return 0;
}
// Queue Sorting
#include <iostream>
using namespace std;

int main()
{
    int queue[5] = {30, 10, 50, 20, 40};
    int front = 0;
    int rear = 4;

    for(int i = front; i <= rear; i++)
    {
        for(int j = i + 1; j <= rear; j++)
        {
            if(queue[i] > queue[j])
            {
                int temp = queue[i];
                queue[i] = queue[j];
                queue[j] = temp;
            }
        }
    }

    for(int i = front; i <= rear; i++)
    {
        cout << queue[i] << " ";
    }

    return 0;
}
// 1. Stack Using Linked List — Searching
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

int main()
{
    Node* top = NULL;

    Node* n1 = new Node;
    Node* n2 = new Node;
    Node* n3 = new Node;

    n1->data = 10;
    n2->data = 20;
    n3->data = 30;

    n1->next = n2;
    n2->next = n3;
    n3->next = NULL;

    top = n3;

    int key = 20;
    Node* temp = top;
    int found = 0;

    while(temp != NULL)
    {
        if(temp->data == key)
        {
            found = 1;
            break;
        }

        temp = temp->next;
    }

    if(found == 1)
        cout << "Element Found";
    else
        cout << "Element Not Found";

    return 0;
}
//Queue Using Linked List — Searching
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

int main()
{
    Node* front = NULL;
    Node* rear = NULL;

    Node* n1 = new Node;
    Node* n2 = new Node;
    Node* n3 = new Node;

    n1->data = 10;
    n2->data = 20;
    n3->data = 30;

    n1->next = n2;
    n2->next = n3;
    n3->next = NULL;

    front = n1;
    rear = n3;

    int key = 20;
    Node* temp = front;
    int found = 0;

    while(temp != NULL)
    {
        if(temp->data == key)
        {
            found = 1;
            break;
        }

        temp = temp->next;
    }

    if(found == 1)
        cout << "Element Found";
    else
        cout << "Element Not Found";

    return 0;
}
//Queue Using Linked List — Sorting
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

int main()
{
    Node* front = NULL;
    Node* rear = NULL;

    Node* n1 = new Node;
    Node* n2 = new Node;
    Node* n3 = new Node;
    Node* n4 = new Node;

    n1->data = 30;
    n2->data = 10;
    n3->data = 40;
    n4->data = 20;

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = NULL;

    front = n1;
    rear = n4;

    Node* i = front;

    while(i != NULL)
    {
        Node* j = i->next;

        while(j != NULL)
        {
            if(i->data > j->data)
            {
                int temp = i->data;
                i->data = j->data;
                j->data = temp;
            }

            j = j->next;
        }

        i = i->next;
    }

    Node* temp = front;

    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}
