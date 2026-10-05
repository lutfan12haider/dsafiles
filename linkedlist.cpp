//Create and Display Linked List
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

int main()
{
    Node* head = NULL;

    Node* n1 = new Node;
    Node* n2 = new Node;
    Node* n3 = new Node;

    n1->data = 10;
    n2->data = 20;
    n3->data = 30;

    n1->next = n2;
    n2->next = n3;
    n3->next = NULL;

    head = n1;

    Node* temp = head;

    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}

//Insert at Beginning
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

int main()
{
    Node* head = NULL;

    Node* n1 = new Node;
    n1->data = 20;
    n1->next = NULL;
    head = n1;

    Node* n2 = new Node;
    n2->data = 30;
    n2->next = head;
    head = n2;

    Node* temp = head;

    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}

//. Insert at End
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

int main()
{
    Node* head = NULL;

    Node* n1 = new Node;
    n1->data = 10;
    n1->next = NULL;
    head = n1;

    Node* n2 = new Node;
    n2->data = 20;
    n2->next = NULL;

    Node* temp = head;

    while(temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = n2;

    temp = head;

    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}
// Insert at Specific Position
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

int main()
{
    Node* head = NULL;

    Node* n1 = new Node;
    n1->data = 10;
    n1->next = NULL;
    head = n1;

    Node* n2 = new Node;
    n2->data = 20;
    n2->next = NULL;
    n1->next = n2;

    int position = 2;
    int value = 15;

    Node* newNode = new Node;
    newNode->data = value;

    Node* temp = head;

    for(int i = 1; i < position - 1; i++)
    {
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;

    temp = head;

    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}
//delete from beginning
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

int main()
{
    Node* head = NULL;

    Node* n1 = new Node;
    Node* n2 = new Node;
    Node* n3 = new Node;

    n1->data = 10;
    n2->data = 20;
    n3->data = 30;

    n1->next = n2;
    n2->next = n3;
    n3->next = NULL;

    head = n1;

    Node* temp = head;

    head = head->next;

    delete temp;

    temp = head;

    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}
// Delete from End
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

int main()
{
    Node* head = NULL;

    Node* n1 = new Node;
    Node* n2 = new Node;
    Node* n3 = new Node;

    n1->data = 10;
    n2->data = 20;
    n3->data = 30;

    n1->next = n2;
    n2->next = n3;
    n3->next = NULL;

    head = n1;

    Node* temp = head;

    while(temp->next->next != NULL)
    {
        temp = temp->next;
    }

    delete temp->next;
    temp->next = NULL;

    temp = head;

    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}
// Search in Linked List
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

int main()
{
    Node* head = NULL;

    Node* n1 = new Node;
    Node* n2 = new Node;
    Node* n3 = new Node;

    n1->data = 10;
    n2->data = 20;
    n3->data = 30;

    n1->next = n2;
    n2->next = n3;
    n3->next = NULL;

    head = n1;

    int key = 20;
    int found = 0;

    Node* temp = head;

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
//Searching Linked List
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

int main()
{
    Node* head = NULL;

    Node* n1 = new Node;
    Node* n2 = new Node;
    Node* n3 = new Node;

    n1->data = 30;
    n2->data = 10;
    n3->data = 20;

    n1->next = n2;
    n2->next = n3;
    n3->next = NULL;

    head = n1;

    int key = 20;
    Node* temp = head;
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
//Sorting Linked List
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

int main()
{
    Node* head = NULL;

    Node* n1 = new Node;
    Node* n2 = new Node;
    Node* n3 = new Node;

    n1->data = 30;
    n2->data = 10;
    n3->data = 20;

    n1->next = n2;
    n2->next = n3;
    n3->next = NULL;

    head = n1;

    Node* i = head;

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

    Node* temp = head;

    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}
